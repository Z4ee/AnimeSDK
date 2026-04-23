#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoUIColorSwitcher_NodeRecord; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOUICOLORSWITCHER_SWITCHCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xAA0DEC0)
#define RPG_CLIENT_MONOUICOLORSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA0E410)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIColorSwitcher_TypeDefinitionIndex = 63578;

	class MonoUIColorSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonoUIColorSwitcher_NodeRecord*>* NodeRecords; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void SwitchColorState(::System::String* stateName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER_SWITCHCOLORSTATE_OFFSET))(this, stateName);
		}
	};
}
