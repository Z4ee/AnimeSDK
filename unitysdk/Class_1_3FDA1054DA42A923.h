#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_3FDA1054DA42A923_GET_ISFADEIN_OFFSET UNITYSDK_OFFSET(0x18B9E580)
#define CLASS_1_3FDA1054DA42A923_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x18B9E5A0)
#define CLASS_1_3FDA1054DA42A923_GET_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B9E5C0)
#define CLASS_1_3FDA1054DA42A923_SET_ISFADEIN_OFFSET UNITYSDK_OFFSET(0x18B9E590)
#define CLASS_1_3FDA1054DA42A923_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x18B9E5B0)
#define CLASS_1_3FDA1054DA42A923_SET_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B9E5D0)
#define CLASS_1_3FDA1054DA42A923__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9E570)

inline static constexpr unsigned int Class_1_3FDA1054DA42A923_TypeDefinitionIndex = 78545;

class Class_1_3FDA1054DA42A923 : public ::System::Object
{
public:
	::System::Action* _OnComplete_k__BackingField; // 0x10
	::System::Boolean _IsWin_k__BackingField; // 0x18
	::System::Boolean _IsFadeIn_k__BackingField; // 0x19

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3FDA1054DA42A923__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_IsFadeIn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FDA1054DA42A923_GET_ISFADEIN_OFFSET))(this);
	}

	::System::Void set_IsFadeIn(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3FDA1054DA42A923_SET_ISFADEIN_OFFSET))(this, a1);
	}

	::System::Boolean get_IsWin()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FDA1054DA42A923_GET_ISWIN_OFFSET))(this);
	}

	::System::Void set_IsWin(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3FDA1054DA42A923_SET_ISWIN_OFFSET))(this, a1);
	}

	::System::Action* get_OnComplete()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FDA1054DA42A923_GET_ONCOMPLETE_OFFSET))(this);
	}

	::System::Void set_OnComplete(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3FDA1054DA42A923_SET_ONCOMPLETE_OFFSET))(this, a1);
	}
};
