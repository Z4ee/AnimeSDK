#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_4.h"
#include "unitysdk/System/Object.h"

class PopText;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x16D3D1B0)
#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x16D3CE50)
#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x16D3CB50)
#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x16D3D0D0)
#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x16D3CBA0)
#define CLASS_1_7F57F1E502AAA0D8_METHOD_1_D9AFFAAF75A2B70C_OFFSET UNITYSDK_OFFSET(0x16D3D050)
#define CLASS_1_7F57F1E502AAA0D8__CTOR_OFFSET UNITYSDK_OFFSET(0x16D3CB40)

inline static constexpr unsigned int Class_1_7F57F1E502AAA0D8_TypeDefinitionIndex = 85092;

class Class_1_7F57F1E502AAA0D8 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	::System::Action* Field_1_5; // 0x10
	::Struct_2_7734F33592BF49F6_4 Field_1_0; // 0x18
	::System::Action_1<::System::Boolean>* Field_1_4; // 0x30
	::UnityEngine::Animation* Field_1_3; // 0x38
	::UnityEngine::GameObject* Field_1_1; // 0x40
	::PopText* Field_1_2; // 0x48
	::System::Action* Field_1_6; // 0x50
	::System::UInt32 Field_1_11; // 0x58
	::System::Boolean Field_1_9; // 0x5C
	::System::UInt32 Field_1_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_D9AFFAAF75A2B70C(::UnityEngine::GameObject* a1, ::PopText* a2, ::UnityEngine::Animation* a3, ::System::Action_1<::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::PopText*, ::UnityEngine::Animation*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_D9AFFAAF75A2B70C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BCCEF225A11BDA90(::Struct_2_7734F33592BF49F6_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7734F33592BF49F6_4))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}
};
