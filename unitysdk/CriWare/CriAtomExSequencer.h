#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomExSequencer_EventCallback; }
namespace CriWare { class CriAtomExSequencer_EventCbFunc; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXSEQUENCER_ADD_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x12BE9010)
#define CRIWARE_CRIATOMEXSEQUENCER_REMOVE_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x12BE9100)
#define CRIWARE_CRIATOMEXSEQUENCER_SETEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12BF1C60)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExSequencer_TypeDefinitionIndex = 36741;

	class CriAtomExSequencer : public ::System::Object
	{
	public:
		static ::System::Void add_OnCallback(::CriWare::CriAtomExSequencer_EventCallback* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_ADD_ONCALLBACK_OFFSET))(value);
		}

		static ::System::Void remove_OnCallback(::CriWare::CriAtomExSequencer_EventCallback* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_REMOVE_ONCALLBACK_OFFSET))(value);
		}

		static ::System::Void SetEventCallback(::CriWare::CriAtomExSequencer_EventCbFunc* func, ::System::String* separator)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCbFunc*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_SETEVENTCALLBACK_OFFSET))(func, separator);
		}
	};
}
