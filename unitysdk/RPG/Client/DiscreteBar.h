#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiscreteBar_DisplayMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DISCRETEBAR_GET_CURRATE_OFFSET UNITYSDK_OFFSET(0xA178DF0)
#define RPG_CLIENT_DISCRETEBAR_REFRESH_OFFSET UNITYSDK_OFFSET(0xA178E80)
#define RPG_CLIENT_DISCRETEBAR_SET_CURRATE_OFFSET UNITYSDK_OFFSET(0xA178E00)
#define RPG_CLIENT_DISCRETEBAR__CTOR_OFFSET UNITYSDK_OFFSET(0xA1790D0)

namespace RPG::Client
{
	inline static constexpr unsigned int DiscreteBar_TypeDefinitionIndex = 66826;

	class DiscreteBar : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::DiscreteBar_DisplayMode displayMode; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BarNodes; // 0x20
		::System::Single _CurRate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISCRETEBAR__CTOR_OFFSET))(this);
		}

		::System::Single get_CurRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISCRETEBAR_GET_CURRATE_OFFSET))(this);
		}

		::System::Void set_CurRate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISCRETEBAR_SET_CURRATE_OFFSET))(this, value);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISCRETEBAR_REFRESH_OFFSET))(this);
		}
	};
}
