#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace System { class Object; }

#define CLASS_2_FA12D1638ECEF6BC_METHOD_2_391D289564D0A120_OFFSET UNITYSDK_OFFSET(0x18A51CF0)
#define CLASS_2_FA12D1638ECEF6BC__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x18A51C10)
#define CLASS_2_FA12D1638ECEF6BC__CTOR_OFFSET UNITYSDK_OFFSET(0x18A52220)

inline static constexpr unsigned int Class_2_FA12D1638ECEF6BC_TypeDefinitionIndex = 68251;

class Class_2_FA12D1638ECEF6BC : public ::RPG::Client::BaseModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA12D1638ECEF6BC__CTOR_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA12D1638ECEF6BC__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_391D289564D0A120(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FA12D1638ECEF6BC_METHOD_2_391D289564D0A120_OFFSET))(this, a1, a2);
	}
};
