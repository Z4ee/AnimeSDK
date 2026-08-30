#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_0958868D9AC2B44D_OFFSET UNITYSDK_OFFSET(0x1BBDB760)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_0D57250E379DAC18_OFFSET UNITYSDK_OFFSET(0x1BBDB450)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_1D30321658AD8041_OFFSET UNITYSDK_OFFSET(0x1BBDB4A0)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_2A779F28A034942B_OFFSET UNITYSDK_OFFSET(0x1BBDB720)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDB490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightHasSameTrait_TypeDefinitionIndex = 22275;

	class ByGridFightHasSameTrait : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType1; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType2; // 0x28
		::System::Boolean IncludeOtherEffect; // 0x30
		::System::Boolean IncludeInactiveTrait; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0D57250E379DAC18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightHasSameTrait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightHasSameTrait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_0D57250E379DAC18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D30321658AD8041(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_1D30321658AD8041_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2A779F28A034942B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasSameTrait*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasSameTrait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_2A779F28A034942B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0958868D9AC2B44D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_0958868D9AC2B44D_OFFSET))(a1, a2);
		}
	};
}
