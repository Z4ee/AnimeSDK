#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoUIColorSwitcher_NodeRecord; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOUICOLORSWITCHER_SWITCHCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xC15C250)
#define RPG_CLIENT_MONOUICOLORSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xC15C640)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIColorSwitcher_TypeDefinitionIndex = 64499;

	class MonoUIColorSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonoUIColorSwitcher_NodeRecord*>* NodeRecords; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void SwitchColorState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER_SWITCHCOLORSTATE_OFFSET))(this, a1);
		}
	};
}
