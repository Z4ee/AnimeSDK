#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_56448ACA1E248B1A_METHOD_2_54F087CB0E40E879_OFFSET UNITYSDK_OFFSET(0xBD963A0)
#define CLASS_2_56448ACA1E248B1A_METHOD_2_7994C4DE82EC92CB_OFFSET UNITYSDK_OFFSET(0xBD965A0)
#define CLASS_2_56448ACA1E248B1A_METHOD_2_7E0102A7D81125F5_OFFSET UNITYSDK_OFFSET(0xBD96650)
#define CLASS_2_56448ACA1E248B1A_METHOD_2_9C7395CE0F030E26_OFFSET UNITYSDK_OFFSET(0xBD96210)
#define CLASS_2_56448ACA1E248B1A__CTOR_OFFSET UNITYSDK_OFFSET(0xBD967B0)
#define CLASS_2_56448ACA1E248B1A__ONBIND_OFFSET UNITYSDK_OFFSET(0xBD96150)

inline static constexpr unsigned int Class_2_56448ACA1E248B1A_TypeDefinitionIndex = 72269;

class Class_2_56448ACA1E248B1A : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* GKJNMLAAGPF; // 0x0
	// static const ::System::String* EHPGJAFDAGI; // 0x0
	// static const ::System::String* NANMNMKDECK; // 0x0
	::UnityEngine::UI::Image* LKAOENJHMHA; // 0x60
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
	::UnityEngine::UI::Text* KPICPMEANJJ; // 0x70
	::System::Int32 GEINOAHHBIP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56448ACA1E248B1A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56448ACA1E248B1A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9C7395CE0F030E26(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_56448ACA1E248B1A_METHOD_2_9C7395CE0F030E26_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_54F087CB0E40E879(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_56448ACA1E248B1A_METHOD_2_54F087CB0E40E879_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7994C4DE82EC92CB(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_56448ACA1E248B1A_METHOD_2_7994C4DE82EC92CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7E0102A7D81125F5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_56448ACA1E248B1A_METHOD_2_7E0102A7D81125F5_OFFSET))(this, a1);
	}
};
