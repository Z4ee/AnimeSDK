#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A422511FB64752E;
namespace RPG::GameCore { class MiddleMissionPackConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C68048984BDA3388_GET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x123EC420)
#define CLASS_1_C68048984BDA3388_METHOD_1_1E867E90319780DD_OFFSET UNITYSDK_OFFSET(0x123EC1D0)
#define CLASS_1_C68048984BDA3388_METHOD_1_4A72003C3EEB3E75_OFFSET UNITYSDK_OFFSET(0x123EC170)
#define CLASS_1_C68048984BDA3388_SET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x123EC430)
#define CLASS_1_C68048984BDA3388__CTOR_OFFSET UNITYSDK_OFFSET(0x123EC160)

inline static constexpr unsigned int Class_1_C68048984BDA3388_TypeDefinitionIndex = 60853;

class Class_1_C68048984BDA3388 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_5A422511FB64752E*>* Field_1_1; // 0x10
	::System::UInt32 _MissionID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68048984BDA3388__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4A72003C3EEB3E75(::RPG::GameCore::MiddleMissionPackConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MiddleMissionPackConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C68048984BDA3388_METHOD_1_4A72003C3EEB3E75_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E867E90319780DD(::RPG::GameCore::MiddleMissionPackConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MiddleMissionPackConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C68048984BDA3388_METHOD_1_1E867E90319780DD_OFFSET))(this, a1);
	}

	::System::UInt32 get_MissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68048984BDA3388_GET_MISSIONID_OFFSET))(this);
	}

	::System::Void set_MissionID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C68048984BDA3388_SET_MISSIONID_OFFSET))(this, value);
	}
};
