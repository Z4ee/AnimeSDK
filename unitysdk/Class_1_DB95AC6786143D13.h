#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFinancing; }

#define CLASS_1_DB95AC6786143D13_METHOD_1_092697C44E93A9A4_OFFSET UNITYSDK_OFFSET(0x18CC1EB0)
#define CLASS_1_DB95AC6786143D13__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC1EA0)
#define CLASS_1_DB95AC6786143D13__GETSPECIALDISPLAYPARAM_B__1_0_OFFSET UNITYSDK_OFFSET(0x18CC2150)

inline static constexpr unsigned int Class_1_DB95AC6786143D13_TypeDefinitionIndex = 65032;

class Class_1_DB95AC6786143D13 : public ::System::Object
{
public:
	::System::UInt32 BNCPBBHOOKB; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB95AC6786143D13__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_092697C44E93A9A4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB95AC6786143D13_METHOD_1_092697C44E93A9A4_OFFSET))(this);
	}

	::System::Boolean _GetSpecialDisplayParam_b__1_0(::RPG::Client::GridFightFinancing* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFinancing*))((::PBYTE)hIl2Cpp + CLASS_1_DB95AC6786143D13__GETSPECIALDISPLAYPARAM_B__1_0_OFFSET))(this, a1);
	}
};
