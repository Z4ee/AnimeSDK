#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_138DC296DD45EE99_OFFSET UNITYSDK_OFFSET(0x1D37E570)
#define RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_3F7AD1BFD7842930_OFFSET UNITYSDK_OFFSET(0x1D37E7F0)
#define RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_702A64491FCD22C7_OFFSET UNITYSDK_OFFSET(0x1D37E820)
#define RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_88F1D0C2517A7AE1_OFFSET UNITYSDK_OFFSET(0x1D37E530)
#define RPG_GAMECORE_RA_BYDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D37E560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByDistance_TypeDefinitionIndex = 19812;

	class RA_ByDistance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseInstigator; // 0x20
		::System::Boolean UseStimulusPos; // 0x21
		::RPG::GameCore::CompareType CompareType; // 0x24
		::System::Single CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_88F1D0C2517A7AE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_88F1D0C2517A7AE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_138DC296DD45EE99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_138DC296DD45EE99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3F7AD1BFD7842930(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_3F7AD1BFD7842930_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_702A64491FCD22C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_702A64491FCD22C7_OFFSET))(a1, a2);
		}
	};
}
