#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_F77D015F1B3064A4_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xBCF6EF0)
#define CLASS_1_F77D015F1B3064A4_GET_TEXTPERCENT_OFFSET UNITYSDK_OFFSET(0xBCF6F50)
#define CLASS_1_F77D015F1B3064A4_GET_TEXTTITLE_OFFSET UNITYSDK_OFFSET(0xBCF6F10)
#define CLASS_1_F77D015F1B3064A4_GET_TEXTVALUE_OFFSET UNITYSDK_OFFSET(0xBCF6F30)
#define CLASS_1_F77D015F1B3064A4_METHOD_1_43120711DC71F4B2_OFFSET UNITYSDK_OFFSET(0xBCF6DF0)
#define CLASS_1_F77D015F1B3064A4_SET_ROOT_OFFSET UNITYSDK_OFFSET(0xBCF6F00)
#define CLASS_1_F77D015F1B3064A4_SET_TEXTPERCENT_OFFSET UNITYSDK_OFFSET(0xBCF6F60)
#define CLASS_1_F77D015F1B3064A4_SET_TEXTTITLE_OFFSET UNITYSDK_OFFSET(0xBCF6F20)
#define CLASS_1_F77D015F1B3064A4_SET_TEXTVALUE_OFFSET UNITYSDK_OFFSET(0xBCF6F40)
#define CLASS_1_F77D015F1B3064A4__CTOR_OFFSET UNITYSDK_OFFSET(0xBCF6EE0)

inline static constexpr unsigned int Class_1_F77D015F1B3064A4_TypeDefinitionIndex = 71183;

class Class_1_F77D015F1B3064A4 : public ::System::Object
{
public:
	::UnityEngine::Transform* _Root_k__BackingField; // 0x10
	::UnityEngine::UI::Text* _TextValue_k__BackingField; // 0x18
	::UnityEngine::UI::Text* _TextPercent_k__BackingField; // 0x20
	::UnityEngine::UI::Text* _TextTitle_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77D015F1B3064A4__CTOR_OFFSET))(this);
	}

	static ::Class_1_F77D015F1B3064A4* Method_1_43120711DC71F4B2(::UnityEngine::Transform* a1)
	{
		return ((::Class_1_F77D015F1B3064A4*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F77D015F1B3064A4_METHOD_1_43120711DC71F4B2_OFFSET))(a1);
	}

	::UnityEngine::Transform* get_Root()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77D015F1B3064A4_GET_ROOT_OFFSET))(this);
	}

	::System::Void set_Root(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F77D015F1B3064A4_SET_ROOT_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Text* get_TextTitle()
	{
		return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77D015F1B3064A4_GET_TEXTTITLE_OFFSET))(this);
	}

	::System::Void set_TextTitle(::UnityEngine::UI::Text* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_1_F77D015F1B3064A4_SET_TEXTTITLE_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Text* get_TextValue()
	{
		return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77D015F1B3064A4_GET_TEXTVALUE_OFFSET))(this);
	}

	::System::Void set_TextValue(::UnityEngine::UI::Text* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_1_F77D015F1B3064A4_SET_TEXTVALUE_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Text* get_TextPercent()
	{
		return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77D015F1B3064A4_GET_TEXTPERCENT_OFFSET))(this);
	}

	::System::Void set_TextPercent(::UnityEngine::UI::Text* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_1_F77D015F1B3064A4_SET_TEXTPERCENT_OFFSET))(this, a1);
	}
};
