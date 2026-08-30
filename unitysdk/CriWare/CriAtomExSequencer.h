#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomExSequencer_EventCallback; }
namespace CriWare { class CriAtomExSequencer_EventCbFunc; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXSEQUENCER_ADD_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x164CDAC0)
#define CRIWARE_CRIATOMEXSEQUENCER_REMOVE_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x164CDBC0)
#define CRIWARE_CRIATOMEXSEQUENCER_SETEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x164D83D0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExSequencer_TypeDefinitionIndex = 38699;

	class CriAtomExSequencer : public ::System::Object
	{
	public:
		static ::System::Void add_OnCallback(::CriWare::CriAtomExSequencer_EventCallback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_ADD_ONCALLBACK_OFFSET))(a1);
		}

		static ::System::Void remove_OnCallback(::CriWare::CriAtomExSequencer_EventCallback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_REMOVE_ONCALLBACK_OFFSET))(a1);
		}

		static ::System::Void SetEventCallback(::CriWare::CriAtomExSequencer_EventCbFunc* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCbFunc*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSEQUENCER_SETEVENTCALLBACK_OFFSET))(a1, a2);
		}
	};
}
