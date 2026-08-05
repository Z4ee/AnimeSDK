#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_2C91071C0F0BBB3B_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x18DA6570)
#define CLASS_3_2C91071C0F0BBB3B_METHOD_3_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x18DA6200)
#define CLASS_3_2C91071C0F0BBB3B_METHOD_3_9C36AFA140789703_OFFSET UNITYSDK_OFFSET(0x18DA60B0)
#define CLASS_3_2C91071C0F0BBB3B_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x18DA65E0)
#define CLASS_3_2C91071C0F0BBB3B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18DA7220)
#define CLASS_3_2C91071C0F0BBB3B_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x18DA7190)
#define CLASS_3_2C91071C0F0BBB3B__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA6F10)

inline static constexpr unsigned int Class_3_2C91071C0F0BBB3B_TypeDefinitionIndex = 51021;

class Class_3_2C91071C0F0BBB3B : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::MoleMole::EntityHandle>* Field_3_11; // 0x18
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_4; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_6; // 0x30
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_5; // 0x38
	::Class_3_DCB7F8B839F0C44B_4* Field_3_2; // 0x40
	::Class_3_B537A0AA78803363* Field_3_10; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x50
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C91071C0F0BBB3B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9C36AFA140789703(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_2C91071C0F0BBB3B_METHOD_3_9C36AFA140789703_OFFSET))(this, a1);
	}

	::System::Void Method_3_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C91071C0F0BBB3B_METHOD_3_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_2C91071C0F0BBB3B_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_2C91071C0F0BBB3B_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_2C91071C0F0BBB3B_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C91071C0F0BBB3B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
