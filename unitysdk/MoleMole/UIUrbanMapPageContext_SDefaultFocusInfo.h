#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }

#define MOLEMOLE_UIURBANMAPPAGECONTEXT_SDEFAULTFOCUSINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x7613B0)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT_SDEFAULTFOCUSINFO_GET_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x761350)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPageContext_SDefaultFocusInfo_TypeDefinitionIndex = 46098;

	struct alignas(8) UIUrbanMapPageContext_SDefaultFocusInfo
	{
		::System::Type* ContextType; // 0x10
		::System::UInt64 Id; // 0x18
		::System::Boolean SingleUse; // 0x20
		::System::Boolean ShowPanel; // 0x21
		::System::Boolean ShowFogAnim; // 0x22
		::System::Boolean EnableRadiusOverride; // 0x23
		::System::Single OverrideRadiusRate; // 0x24
		::Foundation::ViewObject::GroupMemberIdentifier GroupStateAnimGroupId; // 0x28
		::System::Int32 GroupStatePopId; // 0x30
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
