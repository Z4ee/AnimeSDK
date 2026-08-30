#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_09B1CA8BF3C28673_OFFSET UNITYSDK_OFFSET(0x1CF5EFF0)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_32207F2AC0855714_OFFSET UNITYSDK_OFFSET(0x1CF5F0A0)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_DD0FB4AD3E297A40_OFFSET UNITYSDK_OFFSET(0x1CF5F2C0)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_ECBACE56234333D8_OFFSET UNITYSDK_OFFSET(0x1CF5F330)
#define RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF5F060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetContainerRatioInRect_TypeDefinitionIndex = 21405;

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

		static ::System::Void Method_4_09B1CA8BF3C28673(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetContainerRatioInRect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetContainerRatioInRect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_09B1CA8BF3C28673_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_32207F2AC0855714(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_32207F2AC0855714_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DD0FB4AD3E297A40(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetContainerRatioInRect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetContainerRatioInRect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_DD0FB4AD3E297A40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ECBACE56234333D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETCONTAINERRATIOINRECT_METHOD_4_ECBACE56234333D8_OFFSET))(a1, a2);
		}
	};
}
