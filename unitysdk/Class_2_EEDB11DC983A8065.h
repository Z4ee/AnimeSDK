#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_EEDB11DC983A8065_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xCB348A0)
#define CLASS_2_EEDB11DC983A8065_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xCB348C0)
#define CLASS_2_EEDB11DC983A8065_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xCB348D0)
#define CLASS_2_EEDB11DC983A8065_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xCB34CB0)
#define CLASS_2_EEDB11DC983A8065_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCB34C50)
#define CLASS_2_EEDB11DC983A8065_METHOD_2_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0xCB34A30)
#define CLASS_2_EEDB11DC983A8065_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xCB34B20)
#define CLASS_2_EEDB11DC983A8065_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xCB348B0)
#define CLASS_2_EEDB11DC983A8065__CTOR_OFFSET UNITYSDK_OFFSET(0xCB34BC0)
#define CLASS_2_EEDB11DC983A8065__ONBIND_OFFSET UNITYSDK_OFFSET(0xCB34800)
#define CLASS_2_EEDB11DC983A8065___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xCB34BF0)

inline static constexpr unsigned int Class_2_EEDB11DC983A8065_TypeDefinitionIndex = 58512;

class Class_2_EEDB11DC983A8065 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_3; // 0x60
	::UnityEngine::UI::Button* Field_2_1; // 0x68
	::System::Int32 _Index_k__BackingField; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEDB11DC983A8065__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEDB11DC983A8065__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEDB11DC983A8065_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EEDB11DC983A8065_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEDB11DC983A8065_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEDB11DC983A8065_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_9B92C44D5842AA8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEDB11DC983A8065_METHOD_2_9B92C44D5842AA8A_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EEDB11DC983A8065_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEDB11DC983A8065___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEDB11DC983A8065_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEDB11DC983A8065_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
