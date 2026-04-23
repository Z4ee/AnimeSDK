#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_METHOD_5_3B8D71B1689B0B90_OFFSET UNITYSDK_OFFSET(0x18AAE060)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_METHOD_5_46E68DE7574D70AE_OFFSET UNITYSDK_OFFSET(0x18AADF40)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AADFF0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ApplyChessBoardTemplateAction_TypeDefinitionIndex = 23701;

	class ApplyChessBoardTemplateAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* TemplatePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_46E68DE7574D70AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_METHOD_5_46E68DE7574D70AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3B8D71B1689B0B90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_METHOD_5_3B8D71B1689B0B90_OFFSET))(a1, a2);
		}
	};
}
