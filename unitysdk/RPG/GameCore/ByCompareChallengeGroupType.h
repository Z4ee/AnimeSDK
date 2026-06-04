#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_38221E01C628D9CC_OFFSET UNITYSDK_OFFSET(0x19506F00)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_47C6761A088A00DC_OFFSET UNITYSDK_OFFSET(0x19507100)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_8FDB4C220D730E71_OFFSET UNITYSDK_OFFSET(0x19507080)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_F130E1E1F27B0282_OFFSET UNITYSDK_OFFSET(0x19506E30)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19506EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareChallengeGroupType_TypeDefinitionIndex = 22164;

	class ByCompareChallengeGroupType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ChallengeGroupType CurrentStageType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F130E1E1F27B0282(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChallengeGroupType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChallengeGroupType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_F130E1E1F27B0282_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38221E01C628D9CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_38221E01C628D9CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8FDB4C220D730E71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeGroupType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeGroupType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_8FDB4C220D730E71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47C6761A088A00DC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_METHOD_4_47C6761A088A00DC_OFFSET))(a1, a2);
		}
	};
}
