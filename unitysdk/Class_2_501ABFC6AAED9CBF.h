#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_501ABFC6AAED9CBF_Enum_3_03342BC59F3F13B1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_2_501ABFC6AAED9CBF_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1C3D13A0)
#define CLASS_2_501ABFC6AAED9CBF_METHOD_2_9C7E0974E4920812_OFFSET UNITYSDK_OFFSET(0x1C3D1430)
#define CLASS_2_501ABFC6AAED9CBF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C3D14E0)
#define CLASS_2_501ABFC6AAED9CBF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3D1320)
#define CLASS_2_501ABFC6AAED9CBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D1390)

inline static constexpr unsigned int Class_2_501ABFC6AAED9CBF_TypeDefinitionIndex = 72225;

class Class_2_501ABFC6AAED9CBF : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0xE6; // 0x0
	::System::String* Field_2_0; // 0x20
	::UnityEngine::Vector3 Field_2_6; // 0x28
	::System::Single Field_2_5; // 0x34
	::System::Int32 Field_2_7; // 0x38
	::Class_2_501ABFC6AAED9CBF_Enum_3_03342BC59F3F13B1 Field_2_1; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_501ABFC6AAED9CBF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501ABFC6AAED9CBF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501ABFC6AAED9CBF_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_9C7E0974E4920812(::Class_2_501ABFC6AAED9CBF_Enum_3_03342BC59F3F13B1 a1, ::System::String* a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_501ABFC6AAED9CBF_Enum_3_03342BC59F3F13B1, ::System::String*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501ABFC6AAED9CBF_METHOD_2_9C7E0974E4920812_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501ABFC6AAED9CBF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
