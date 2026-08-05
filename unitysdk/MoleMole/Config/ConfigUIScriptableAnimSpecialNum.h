#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUISCRIPTABLEANIMSPECIALNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FB2F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIScriptableAnimSpecialNum_TypeDefinitionIndex = 76854;

	class ConfigUIScriptableAnimSpecialNum : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UISpecialNumGroup*>* ConfigUISpecialNumGroupDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISCRIPTABLEANIMSPECIALNUM__CTOR_OFFSET))(this);
		}
	};
}
