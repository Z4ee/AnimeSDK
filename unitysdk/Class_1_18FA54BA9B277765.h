#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"

class Class_1_DACE4D21D4FC5F48;
namespace RPG::GameCore { class LevelCrowdBakedInfo; }
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class LevelGroupBakedInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_18FA54BA9B277765_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x12ADF2C0)
#define CLASS_1_18FA54BA9B277765_GET_ISROTATEREGIONGROUP_OFFSET UNITYSDK_OFFSET(0x12ADF2D0)
#define CLASS_1_18FA54BA9B277765_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x12ADF2E0)
#define CLASS_1_18FA54BA9B277765_METHOD_1_679732E46F837809_OFFSET UNITYSDK_OFFSET(0x12ADF610)
#define CLASS_1_18FA54BA9B277765_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x12ADF710)
#define CLASS_1_18FA54BA9B277765_METHOD_1_E3373A9CC9432801_OFFSET UNITYSDK_OFFSET(0x12ADF2F0)
#define CLASS_1_18FA54BA9B277765_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x12ADF660)
#define CLASS_1_18FA54BA9B277765__CTOR_OFFSET UNITYSDK_OFFSET(0x12ADF390)

inline static constexpr unsigned int Class_1_18FA54BA9B277765_TypeDefinitionIndex = 63771;

class Class_1_18FA54BA9B277765 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::LevelCrowdInfo*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_DACE4D21D4FC5F48*>* Field_1_2; // 0x18
	::System::Boolean _IsRotateRegionGroup_k__BackingField; // 0x20
	::System::UInt32 _GroupID_k__BackingField; // 0x24

	::System::Void _ctor(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_18FA54BA9B277765__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18FA54BA9B277765_GET_GROUPID_OFFSET))(this);
	}

	::System::Boolean get_IsRotateRegionGroup()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18FA54BA9B277765_GET_ISROTATEREGIONGROUP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_DACE4D21D4FC5F48*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DACE4D21D4FC5F48*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18FA54BA9B277765_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	static ::RPG::GameCore::LevelCrowdBakedInfo* Method_1_E3373A9CC9432801(::RPG::GameCore::LevelCrowdInfo* a1, ::RPG::GameCore::LevelGroupBakedInfo* a2)
	{
		return ((::RPG::GameCore::LevelCrowdBakedInfo*(*)(::RPG::GameCore::LevelCrowdInfo*, ::RPG::GameCore::LevelGroupBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_18FA54BA9B277765_METHOD_1_E3373A9CC9432801_OFFSET))(a1, a2);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18FA54BA9B277765_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18FA54BA9B277765_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::RPG::GameCore::EntityClassifyType Method_1_679732E46F837809(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_18FA54BA9B277765_METHOD_1_679732E46F837809_OFFSET))(this, a1);
	}
};
