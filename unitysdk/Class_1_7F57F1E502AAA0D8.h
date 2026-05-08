#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_3.h"
#include "unitysdk/System/Object.h"

class PopText;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x10DA8BC0)
#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x10DA8880)
#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x10DA8A90)
#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x10DA8AE0)
#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x10DA8C80)
#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_D9AFFAAF75A2B70C_OFFSET UNITYSDK_OFFSET(0x10DA8800)
#define CLASS_1_7F57F1E502AAA0D8__CTOR_OFFSET UNITYSDK_OFFSET(0x10DA87F0)

inline static constexpr unsigned int Class_1_7F57F1E502AAA0D8_TypeDefinitionIndex = 39595;

class Class_1_7F57F1E502AAA0D8 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	::System::Action* Field_1_6; // 0x10
	::System::Action* Field_1_5; // 0x18
	::UnityEngine::GameObject* Field_1_1; // 0x20
	::UnityEngine::Animation* Field_1_3; // 0x28
	::Struct_2_7734F33592BF49F6_3 Field_1_0; // 0x30
	::System::Action_1<::System::Boolean>* Field_1_4; // 0x48
	::PopText* Field_1_2; // 0x50
	::System::UInt32 Field_1_10; // 0x58
	::System::Boolean Field_1_9; // 0x5C
	::System::UInt32 Field_1_11; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D9AFFAAF75A2B70C(::UnityEngine::GameObject* a1, ::PopText* a2, ::UnityEngine::Animation* a3, ::System::Action_1<::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::PopText*, ::UnityEngine::Animation*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_D9AFFAAF75A2B70C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_1_BCCEF225A11BDA90(::Struct_2_7734F33592BF49F6_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7734F33592BF49F6_3))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_CEBFF096B4C9D46B_OFFSET))(this);
	}
};
