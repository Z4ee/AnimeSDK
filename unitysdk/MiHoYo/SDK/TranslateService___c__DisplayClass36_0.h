#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ChatMessage; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class TranslateService; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2BB1E0)
#define MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS36_0__TRANSLATE_B__0_OFFSET UNITYSDK_OFFSET(0xB2BBF60)
#define MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS36_0__TRANSLATE_B__1_OFFSET UNITYSDK_OFFSET(0xB2BC090)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TranslateService___c__DisplayClass36_0_TypeDefinitionIndex = 47044;

	class TranslateService___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::System::String* targetLanguage; // 0x18
		::MiHoYo::SDK::TranslateService* __4__this; // 0x20
		::MiHoYo::SDK::ChatMessage* msg; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _Translate_b__0(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS36_0__TRANSLATE_B__0_OFFSET))(this, a1);
		}

		::System::Void _Translate_b__1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__DISPLAYCLASS36_0__TRANSLATE_B__1_OFFSET))(this, a1, a2);
		}
	};
}
