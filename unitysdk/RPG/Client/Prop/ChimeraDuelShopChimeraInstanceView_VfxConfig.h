#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_VFXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC51C640)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopChimeraInstanceView_VfxConfig_TypeDefinitionIndex = 72861;

	class ChimeraDuelShopChimeraInstanceView_VfxConfig : public ::System::Object
	{
	public:
		::System::String* AnchorName; // 0x10
		::System::String* EffectPath; // 0x18
		::System::String* UniqueName; // 0x20
		::System::Single Scale; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_VFXCONFIG__CTOR_OFFSET))(this);
		}
	};
}
