#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/PolishItemKind.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_C7968F86BC6ACC74;
namespace System { class String; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B522820)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_GET_KIND_OFFSET UNITYSDK_OFFSET(0x1B522800)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_READITEM_OFFSET UNITYSDK_OFFSET(0x1B522940)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B522830)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_SET_KIND_OFFSET UNITYSDK_OFFSET(0x1B522810)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_STOREITEM_OFFSET UNITYSDK_OFFSET(0x1B522840)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B522B00)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxPolishItem_TypeDefinitionIndex = 49384;

	class WhiteBoxPolishItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPGTools::LDWhiteBox::PolishItemKind _kind; // 0x18
		::System::String* _displayName; // 0x20
		::System::String* _serializedItem; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM__CTOR_OFFSET))(this);
		}

		::RPGTools::LDWhiteBox::PolishItemKind get_Kind()
		{
			return ((::RPGTools::LDWhiteBox::PolishItemKind(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_GET_KIND_OFFSET))(this);
		}

		::System::Void set_Kind(::RPGTools::LDWhiteBox::PolishItemKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::PolishItemKind))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_SET_KIND_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::System::Void StoreItem(::Class_1_C7968F86BC6ACC74* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C7968F86BC6ACC74*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_STOREITEM_OFFSET))(this, a1);
		}

		::Class_1_C7968F86BC6ACC74* ReadItem()
		{
			return ((::Class_1_C7968F86BC6ACC74*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHITEM_READITEM_OFFSET))(this);
		}
	};
}
