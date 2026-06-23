#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigUIPortraitItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUIPORTRAIT_GETPORTRAITITEM_OFFSET UNITYSDK_OFFSET(0x19FF2FF0)
#define MOLEMOLE_CONFIG_CONFIGUIPORTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF3280)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIPortrait_TypeDefinitionIndex = 51494;

	class ConfigUIPortrait : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIPortraitItem*>*>* configs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIPORTRAIT__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigUIPortraitItem* GetPortraitItem(::System::String* portraitKey, ::System::String* extraKey, ::System::String* roleName)
		{
			return ((::MoleMole::Config::ConfigUIPortraitItem*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIPORTRAIT_GETPORTRAITITEM_OFFSET))(this, portraitKey, extraKey, roleName);
		}
	};
}
