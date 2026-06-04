#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_138DC296DD45EE99_OFFSET UNITYSDK_OFFSET(0x19AA7A70)
#define RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_1DBB595F3AF79882_OFFSET UNITYSDK_OFFSET(0x19AA79A0)
#define RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_57E05A80DBAB4AFD_OFFSET UNITYSDK_OFFSET(0x19AA7CF0)
#define RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_7AAA71EEA0DE0100_OFFSET UNITYSDK_OFFSET(0x19AA7D70)
#define RPG_GAMECORE_RA_BYDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA7A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByDistance_TypeDefinitionIndex = 18921;

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

		static ::System::Void Method_4_1DBB595F3AF79882(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_1DBB595F3AF79882_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_138DC296DD45EE99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_138DC296DD45EE99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57E05A80DBAB4AFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_57E05A80DBAB4AFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7AAA71EEA0DE0100(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_METHOD_4_7AAA71EEA0DE0100_OFFSET))(a1, a2);
		}
	};
}
