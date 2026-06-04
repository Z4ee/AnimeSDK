#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_0ADEB13A805E88F5_OFFSET UNITYSDK_OFFSET(0x1955E760)
#define RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_56D337AD89503789_OFFSET UNITYSDK_OFFSET(0x1955E7E0)
#define RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_7A69B11D65C9CB7A_OFFSET UNITYSDK_OFFSET(0x1955E620)
#define RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_7BF5344AF54E5750_OFFSET UNITYSDK_OFFSET(0x1955E550)
#define RPG_GAMECORE_BYISCONVERTDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1955E5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsConvertDamage_TypeDefinitionIndex = 22213;

	class ByIsConvertDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7BF5344AF54E5750(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsConvertDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsConvertDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_7BF5344AF54E5750_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7A69B11D65C9CB7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_7A69B11D65C9CB7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0ADEB13A805E88F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsConvertDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsConvertDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_0ADEB13A805E88F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_56D337AD89503789(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_METHOD_4_56D337AD89503789_OFFSET))(a1, a2);
		}
	};
}
