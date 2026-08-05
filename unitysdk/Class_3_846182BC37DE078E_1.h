#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_3_846182BC37DE078E_1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x156FFDE0)
#define CLASS_3_846182BC37DE078E_1_METHOD_3_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x156FFEC0)
#define CLASS_3_846182BC37DE078E_1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x156FFFA0)
#define CLASS_3_846182BC37DE078E_1_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x156FFF20)
#define CLASS_3_846182BC37DE078E_1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x156FFBD0)
#define CLASS_3_846182BC37DE078E_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x156FFE30)
#define CLASS_3_846182BC37DE078E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x156FFEB0)

inline static constexpr unsigned int Class_3_846182BC37DE078E_1_TypeDefinitionIndex = 64092;

class Class_3_846182BC37DE078E_1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_13 = 0x2A; // 0x0
	::System::String* Field_3_14; // 0x48
	::UnityEngine::AnimationCurve* Field_3_2; // 0x50
	::UnityEngine::Transform* Field_3_15; // 0x58
	::System::Single Field_3_4; // 0x60
	::System::Boolean Field_3_3; // 0x64
	::System::Single Field_3_10; // 0x68
	::System::Single Field_3_1; // 0x6C
	::System::Single Field_3_6; // 0x70
	::UnityEngine::Vector3 Field_3_8; // 0x74
	::System::Single Field_3_7; // 0x80
	::System::Single Field_3_5; // 0x84
	::System::Single Field_3_11; // 0x88
	::UnityEngine::Vector3 Field_3_9; // 0x8C
	::System::Single Field_3_0; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_METHOD_3_050E70FEDB783306_OFFSET))(this, a1);
	}

	static ::Class_3_846182BC37DE078E_1* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_846182BC37DE078E_1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
