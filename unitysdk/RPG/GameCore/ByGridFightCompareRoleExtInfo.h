#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRoleExtInfoType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_815FAC75A8919B3C_OFFSET UNITYSDK_OFFSET(0x1BBDAB90)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_8433A06A19E3D670_OFFSET UNITYSDK_OFFSET(0x1BBDAE60)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_901E3C31BC156035_OFFSET UNITYSDK_OFFSET(0x1BBDABD0)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_F47A5D197237CDE7_OFFSET UNITYSDK_OFFSET(0x1BBDAE30)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDABC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightCompareRoleExtInfo_TypeDefinitionIndex = 22273;

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

		static ::System::Void Method_4_815FAC75A8919B3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_815FAC75A8919B3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_901E3C31BC156035(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_901E3C31BC156035_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F47A5D197237CDE7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_F47A5D197237CDE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8433A06A19E3D670(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_8433A06A19E3D670_OFFSET))(a1, a2);
		}
	};
}
