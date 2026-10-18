#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParseUrlCallBack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_OPEUTIL___C__DISPLAYCLASS32_0__CONVERTEVENTURL_B__0_OFFSET UNITYSDK_OFFSET(0xD9FBDF0)
#define RPG_CLIENT_OPEUTIL___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F7F00)

namespace RPG::Client
{
	inline static constexpr unsigned int OpeUtil___c__DisplayClass32_0_TypeDefinitionIndex = 59310;

	class OpeUtil___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::String* sourceUrl; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict; // 0x18
		::RPG::Client::ParseUrlCallBack* callBack; // 0x20
		::System::String* baseUrl; // 0x28
		::System::String* fragment; // 0x30
		::System::Boolean isExternalBrowser; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _ConvertEventUrl_b__0(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL___C__DISPLAYCLASS32_0__CONVERTEVENTURL_B__0_OFFSET))(this, a1, a2);
		}
	};
}
