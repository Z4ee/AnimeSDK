#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_6CC143B9599F1FCA;
namespace RPG::Client { class InControlIconPathConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOINPUTICONTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0xD840730)
#define RPG_CLIENT_MONOINPUTICONTIP_METHOD_5_460ED92A9D08B0B6_OFFSET UNITYSDK_OFFSET(0xD840A30)
#define RPG_CLIENT_MONOINPUTICONTIP_METHOD_5_99770A90CCA648B7_OFFSET UNITYSDK_OFFSET(0xD8409E0)
#define RPG_CLIENT_MONOINPUTICONTIP_METHOD_5_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xD840CC0)
#define RPG_CLIENT_MONOINPUTICONTIP_METHOD_5_BF622B900A7F3625_OFFSET UNITYSDK_OFFSET(0xD840840)
#define RPG_CLIENT_MONOINPUTICONTIP_METHOD_5_D32194AE7B33706F_OFFSET UNITYSDK_OFFSET(0xD840D70)
#define RPG_CLIENT_MONOINPUTICONTIP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD840900)
#define RPG_CLIENT_MONOINPUTICONTIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD840E90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInputIconTip_TypeDefinitionIndex = 61441;

	class MonoInputIconTip : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _ActionName; // 0x18
		::System::String* _IconPath_Phone; // 0x20
		::System::String* _IconPath_PC; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::InControlIconPathConfig*>* _IconPath_GamePad; // 0x30
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x38
		::Class_1_6CC143B9599F1FCA* DLALHGJDNNO; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_99770A90CCA648B7(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_METHOD_5_99770A90CCA648B7_OFFSET))(this, a1);
		}

		::System::Void Method_5_BF622B900A7F3625()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_METHOD_5_BF622B900A7F3625_OFFSET))(this);
		}

		::System::String* Method_5_460ED92A9D08B0B6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_METHOD_5_460ED92A9D08B0B6_OFFSET))(this);
		}

		::InControl::InputControlType Method_5_D32194AE7B33706F()
		{
			return ((::InControl::InputControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_METHOD_5_D32194AE7B33706F_OFFSET))(this);
		}

		::System::Boolean Method_5_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINPUTICONTIP_METHOD_5_A3FAE12D7B6ACD62_OFFSET))(this);
		}
	};
}
