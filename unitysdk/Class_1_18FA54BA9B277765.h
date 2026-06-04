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

#define CLASS_1_18FA54BA9B277765_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x141877B0)
#define CLASS_1_18FA54BA9B277765_GET_ISROTATEREGIONGROUP_OFFSET UNITYSDK_OFFSET(0x141877C0)
#define CLASS_1_18FA54BA9B277765_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0x14187C50)
#define CLASS_1_18FA54BA9B277765_METHOD_1_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x14187B70)
#define CLASS_1_18FA54BA9B277765_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x141877D0)
#define CLASS_1_18FA54BA9B277765_METHOD_1_679732E46F837809_OFFSET UNITYSDK_OFFSET(0x14187B20)
#define CLASS_1_18FA54BA9B277765_METHOD_1_E3373A9CC9432801_OFFSET UNITYSDK_OFFSET(0x141877E0)
#define CLASS_1_18FA54BA9B277765__CTOR_OFFSET UNITYSDK_OFFSET(0x14187880)

inline static constexpr unsigned int Class_1_18FA54BA9B277765_TypeDefinitionIndex = 64692;

class Class_1_18FA54BA9B277765 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_DACE4D21D4FC5F48*>* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::LevelCrowdInfo*>* Field_1_1; // 0x18
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

	::System::Void Method_1_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18FA54BA9B277765_METHOD_1_45714050EDEF8291_OFFSET))(this);
	}

	::System::Void Method_1_0D3455A2B8A3E6D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18FA54BA9B277765_METHOD_1_0D3455A2B8A3E6D4_OFFSET))(this);
	}

	::RPG::GameCore::EntityClassifyType Method_1_679732E46F837809(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_18FA54BA9B277765_METHOD_1_679732E46F837809_OFFSET))(this, a1);
	}
};
