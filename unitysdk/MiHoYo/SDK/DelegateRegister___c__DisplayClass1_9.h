#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class GeetestView; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__CTOR_OFFSET UNITYSDK_OFFSET(0xB1C7580)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__51_OFFSET UNITYSDK_OFFSET(0xB1C8510)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__52_OFFSET UNITYSDK_OFFSET(0xB1C85A0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__53_OFFSET UNITYSDK_OFFSET(0xB1C8640)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_9_TypeDefinitionIndex = 46733;

	class DelegateRegister___c__DisplayClass1_9 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::GeetestView* view; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__51(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__51_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__52(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__52_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__53(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__53_OFFSET))(this, a1);
		}
	};
}
