#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRoleExtInfoType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_67EB5D3EC0CEDE57_OFFSET UNITYSDK_OFFSET(0x18746F50)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_901E3C31BC156035_OFFSET UNITYSDK_OFFSET(0x18747020)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18746FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightCompareRoleExtInfo_TypeDefinitionIndex = 21408;

	class ByGridFightCompareRoleExtInfo : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GridFightRoleExtInfoType ExtInfoType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x28
		::RPG::GameCore::DynamicFloat* TargetCharacterID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_67EB5D3EC0CEDE57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_67EB5D3EC0CEDE57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_901E3C31BC156035(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_901E3C31BC156035_OFFSET))(a1, a2);
		}
	};
}
