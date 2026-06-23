#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DA77831942E480A9;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal { class TextureSheetRenderer; }

#define CLASS_1_37F417A6FB470A7F_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1DCC59C0)
#define CLASS_1_37F417A6FB470A7F_METHOD_1_8035DAD119FDD10E_OFFSET UNITYSDK_OFFSET(0x1DCC5A80)
#define CLASS_1_37F417A6FB470A7F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1DCC5A10)
#define CLASS_1_37F417A6FB470A7F_METHOD_1_E2649B6A4455E663_OFFSET UNITYSDK_OFFSET(0x1DCC5B30)
#define CLASS_1_37F417A6FB470A7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC59B0)

inline static constexpr unsigned int Class_1_37F417A6FB470A7F_TypeDefinitionIndex = 90897;

class Class_1_37F417A6FB470A7F : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Rendering::Universal::TextureSheetRenderer* Field_1_4; // 0x18
	::UnityEngine::GameObject* Field_1_1; // 0x20
	::Class_1_DA77831942E480A9* Field_1_5; // 0x28
	::System::Single Field_1_3; // 0x30
	::System::Int32 Field_1_8; // 0x34
	::System::Boolean Field_1_9; // 0x38
	::System::Boolean Field_1_6; // 0x39
	::System::Boolean Field_1_7; // 0x3A
	::System::Single Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37F417A6FB470A7F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_37F417A6FB470A7F_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37F417A6FB470A7F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8035DAD119FDD10E(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3, ::System::Int32 a4, ::Class_1_DA77831942E480A9* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::Class_1_DA77831942E480A9*))((::PBYTE)hIl2Cpp + CLASS_1_37F417A6FB470A7F_METHOD_1_8035DAD119FDD10E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Rendering::Universal::TextureSheetRenderer* Method_1_E2649B6A4455E663()
	{
		return ((::UnityEngine::Rendering::Universal::TextureSheetRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37F417A6FB470A7F_METHOD_1_E2649B6A4455E663_OFFSET))(this);
	}
};
