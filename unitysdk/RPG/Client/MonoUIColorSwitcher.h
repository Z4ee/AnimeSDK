#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoUIColorSwitcher_NodeRecord; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOUICOLORSWITCHER_GETCOLORBYSTATE_OFFSET UNITYSDK_OFFSET(0xD87A520)
#define RPG_CLIENT_MONOUICOLORSWITCHER_SWITCHCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xD87A6E0)
#define RPG_CLIENT_MONOUICOLORSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xD87AB30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIColorSwitcher_TypeDefinitionIndex = 68938;

	class MonoUIColorSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonoUIColorSwitcher_NodeRecord*>* NodeRecords; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color GetColorByState(::System::String* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER_GETCOLORBYSTATE_OFFSET))(this, a1);
		}

		::System::Void SwitchColorState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER_SWITCHCOLORSTATE_OFFSET))(this, a1);
		}
	};
}
