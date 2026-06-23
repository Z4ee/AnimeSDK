#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_BFD23B786929AB28_Class_1_B95243F097AE8C33;
namespace System { class String; }

#define CLASS_3_BFD23B786929AB28_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13E2CFD0)
#define CLASS_3_BFD23B786929AB28_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13E2D0B0)
#define CLASS_3_BFD23B786929AB28_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13E2D830)
#define CLASS_3_BFD23B786929AB28_METHOD_3_F5E011FAC512A7AF_OFFSET UNITYSDK_OFFSET(0x13E2D140)
#define CLASS_3_BFD23B786929AB28_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13E2CF50)
#define CLASS_3_BFD23B786929AB28__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E2D020)
#define CLASS_3_BFD23B786929AB28__CTOR_OFFSET UNITYSDK_OFFSET(0x13E2D0A0)

inline static constexpr unsigned int Class_3_BFD23B786929AB28_TypeDefinitionIndex = 59521;

class Class_3_BFD23B786929AB28 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0x7E; // 0x0
	::System::String* Field_3_7; // 0x48
	::Class_3_BFD23B786929AB28_Class_1_B95243F097AE8C33* Field_3_9; // 0x50
	::System::String* Field_3_8; // 0x58
	::System::String* Field_3_4; // 0x60
	::UnityEngine::Vector3 Field_3_6; // 0x68
	::UnityEngine::Vector3 Field_3_5; // 0x74
	::UnityEngine::Vector3 Field_3_1; // 0x80
	::System::UInt32 Field_3_10; // 0x8C
	::UnityEngine::Vector3 Field_3_0; // 0x90
	::System::Boolean Field_3_3; // 0x9C
	::UnityEngine::Vector3 Field_3_2; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BFD23B786929AB28__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFD23B786929AB28__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFD23B786929AB28_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFD23B786929AB28_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFD23B786929AB28_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_F5E011FAC512A7AF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BFD23B786929AB28_METHOD_3_F5E011FAC512A7AF_OFFSET))(this, a1);
	}

	static ::Class_3_BFD23B786929AB28* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_BFD23B786929AB28*(*)())((::PBYTE)hIl2Cpp + CLASS_3_BFD23B786929AB28_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
