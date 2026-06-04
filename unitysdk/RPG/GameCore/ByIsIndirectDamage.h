#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_AB27B52D9278BF26_OFFSET UNITYSDK_OFFSET(0x19568350)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_D2D20274EEA2DECE_OFFSET UNITYSDK_OFFSET(0x195683D0)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_F006FA43339F5C07_OFFSET UNITYSDK_OFFSET(0x19568140)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_FDB08BD1D5BD820D_OFFSET UNITYSDK_OFFSET(0x19568210)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x195681C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsIndirectDamage_TypeDefinitionIndex = 22212;

	class ByIsIndirectDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F006FA43339F5C07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsIndirectDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsIndirectDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_F006FA43339F5C07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FDB08BD1D5BD820D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_FDB08BD1D5BD820D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AB27B52D9278BF26(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsIndirectDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsIndirectDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_AB27B52D9278BF26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D2D20274EEA2DECE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_D2D20274EEA2DECE_OFFSET))(a1, a2);
		}
	};
}
