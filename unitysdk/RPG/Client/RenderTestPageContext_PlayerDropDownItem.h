#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_RENDERTESTPAGECONTEXT_PLAYERDROPDOWNITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA2CF0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderTestPageContext_PlayerDropDownItem_TypeDefinitionIndex = 59727;

	class RenderTestPageContext_PlayerDropDownItem : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* AssetPath; // 0x18
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT_PLAYERDROPDOWNITEM__CTOR_OFFSET))(this);
		}
	};
}
