#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_1D30321658AD8041_OFFSET UNITYSDK_OFFSET(0x1954B190)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_4A26B8A4795D9B6C_OFFSET UNITYSDK_OFFSET(0x1954B490)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_C4AEBCD6D270CE33_OFFSET UNITYSDK_OFFSET(0x1954B0B0)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_F80B713B7FA80917_OFFSET UNITYSDK_OFFSET(0x1954B410)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1954B130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightHasSameTrait_TypeDefinitionIndex = 21297;

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

		static ::System::Void Method_4_C4AEBCD6D270CE33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightHasSameTrait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightHasSameTrait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_C4AEBCD6D270CE33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D30321658AD8041(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_1D30321658AD8041_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F80B713B7FA80917(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasSameTrait*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasSameTrait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_F80B713B7FA80917_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4A26B8A4795D9B6C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_METHOD_4_4A26B8A4795D9B6C_OFFSET))(a1, a2);
		}
	};
}
