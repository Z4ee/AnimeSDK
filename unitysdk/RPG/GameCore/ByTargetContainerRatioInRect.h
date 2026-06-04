#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_0DA33D809AD780AA_OFFSET UNITYSDK_OFFSET(0x195D8B80)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_32207F2AC0855714_OFFSET UNITYSDK_OFFSET(0x195D8960)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_60738F7D854684FF_OFFSET UNITYSDK_OFFSET(0x195D8C20)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_66B36311B089860F_OFFSET UNITYSDK_OFFSET(0x195D8840)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x195D88E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetContainerRatioInRect_TypeDefinitionIndex = 20434;

	class ByTargetContainerRatioInRect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* BindPhotographName; // 0x20
		::System::String* ContainerFlagName; // 0x28
		::RPG::GameCore::PhotoGraphTargetSize* Size; // 0x30
		::System::Single Ratio; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_66B36311B089860F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetContainerRatioInRect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetContainerRatioInRect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_66B36311B089860F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_32207F2AC0855714(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_32207F2AC0855714_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0DA33D809AD780AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetContainerRatioInRect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetContainerRatioInRect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_0DA33D809AD780AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_60738F7D854684FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_60738F7D854684FF_OFFSET))(a1, a2);
		}
	};
}
