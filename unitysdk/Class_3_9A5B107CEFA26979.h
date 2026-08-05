#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_9A5B107CEFA26979_METHOD_3_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x1907ADD0)
#define CLASS_3_9A5B107CEFA26979_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1907AB10)
#define CLASS_3_9A5B107CEFA26979_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1907B340)
#define CLASS_3_9A5B107CEFA26979__CTOR_OFFSET UNITYSDK_OFFSET(0x1907B140)

inline static constexpr unsigned int Class_3_9A5B107CEFA26979_TypeDefinitionIndex = 66387;

class Class_3_9A5B107CEFA26979 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_6; // 0x18
	::Class_3_B537A0AA78803363* Field_3_10; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_5; // 0x28
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_11; // 0x30
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_4; // 0x38
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x40
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5B107CEFA26979__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5B107CEFA26979_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_9A5B107CEFA26979_METHOD_3_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5B107CEFA26979_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
