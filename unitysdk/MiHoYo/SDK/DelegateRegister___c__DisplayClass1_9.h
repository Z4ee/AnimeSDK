#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class GeetestView; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB2F00)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__50_OFFSET UNITYSDK_OFFSET(0x19FB40D0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__51_OFFSET UNITYSDK_OFFSET(0x19FB42A0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__52_OFFSET UNITYSDK_OFFSET(0x19FB44B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_9_TypeDefinitionIndex = 35098;

	class DelegateRegister___c__DisplayClass1_9 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::GeetestView* view; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__50(::ZenFulcrum::EmbeddedBrowser::JSONNode* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__50_OFFSET))(this, result);
		}

		::System::Void _RegisterWebFunc_b__51(::ZenFulcrum::EmbeddedBrowser::JSONNode* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__51_OFFSET))(this, result);
		}

		::System::Void _RegisterWebFunc_b__52(::ZenFulcrum::EmbeddedBrowser::JSONNode* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_9__REGISTERWEBFUNC_B__52_OFFSET))(this, result);
		}
	};
}
