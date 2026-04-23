#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_RENDERTESTPAGECONTEXT_ANIMATIONDROPDOWNITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAFCD980)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderTestPageContext_AnimationDropDownItem_TypeDefinitionIndex = 67124;

	class RenderTestPageContext_AnimationDropDownItem : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::System::Int32 StateHash; // 0x18
		::System::Int32 Layer; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT_ANIMATIONDROPDOWNITEM__CTOR_OFFSET))(this);
		}
	};
}
