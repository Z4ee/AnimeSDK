#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_827280A7B00D3846_Class_1_B95243F097AE8C33;
namespace System { class String; }

#define CLASS_3_827280A7B00D3846_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1764BB00)
#define CLASS_3_827280A7B00D3846_METHOD_3_5152ABC5D08CE614_OFFSET UNITYSDK_OFFSET(0x1764BC70)
#define CLASS_3_827280A7B00D3846_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1764BBE0)
#define CLASS_3_827280A7B00D3846_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1764C360)
#define CLASS_3_827280A7B00D3846_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1764BA90)
#define CLASS_3_827280A7B00D3846__CCTOR_OFFSET UNITYSDK_OFFSET(0x1764BB50)
#define CLASS_3_827280A7B00D3846__CTOR_OFFSET UNITYSDK_OFFSET(0x1764BBD0)

inline static constexpr unsigned int Class_3_827280A7B00D3846_TypeDefinitionIndex = 45423;

class Class_3_827280A7B00D3846 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_15 = 0x7F; // 0x0
	::System::String* Field_3_10; // 0x48
	::System::String* Field_3_6; // 0x50
	::Class_3_827280A7B00D3846_Class_1_B95243F097AE8C33* Field_3_9; // 0x58
	::System::String* Field_3_11; // 0x60
	::UnityEngine::Vector3 Field_3_2; // 0x68
	::System::UInt32 Field_3_8; // 0x74
	::UnityEngine::Vector3 Field_3_5; // 0x78
	::UnityEngine::Vector3 Field_3_4; // 0x84
	::UnityEngine::Vector3 Field_3_0; // 0x90
	::UnityEngine::Vector3 Field_3_1; // 0x9C
	::System::Boolean Field_3_7; // 0xA8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_827280A7B00D3846__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_827280A7B00D3846__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_827280A7B00D3846_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_827280A7B00D3846_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_827280A7B00D3846_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_5152ABC5D08CE614(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_827280A7B00D3846_METHOD_3_5152ABC5D08CE614_OFFSET))(this, a1);
	}

	static ::Class_3_827280A7B00D3846* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_827280A7B00D3846*(*)())((::PBYTE)hIl2Cpp + CLASS_3_827280A7B00D3846_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
