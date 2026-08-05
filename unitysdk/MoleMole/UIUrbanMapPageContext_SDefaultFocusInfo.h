#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }

#define MOLEMOLE_UIURBANMAPPAGECONTEXT_SDEFAULTFOCUSINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x817090)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT_SDEFAULTFOCUSINFO_GET_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x817030)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPageContext_SDefaultFocusInfo_TypeDefinitionIndex = 65725;

	struct alignas(8) UIUrbanMapPageContext_SDefaultFocusInfo
	{
		::System::Type* ContextType; // 0x10
		::System::UInt64 Id; // 0x18
		::System::Int32 PanelId; // 0x20
		::System::Boolean SingleUse; // 0x24
		::System::Boolean ShowPanel; // 0x25
		::System::Boolean ShowFogAnim; // 0x26
		::System::Boolean EnableRadiusOverride; // 0x27
		::System::Single OverrideRadiusRate; // 0x28
		::Foundation::ViewObject::GroupMemberIdentifier GroupStateAnimGroupId; // 0x2C
		::System::Int32 GroupStatePopId; // 0x34
		::System::String* GroupStateAnimationName; // 0x38

		::System::Boolean get_PlayAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_SDEFAULTFOCUSINFO_GET_PLAYANIM_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_SDEFAULTFOCUSINFO_EQUALS_OFFSET))(this, other);
		}
	};
}
