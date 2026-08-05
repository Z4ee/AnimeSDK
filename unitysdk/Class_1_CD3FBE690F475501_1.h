#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class LineLightingV2;
namespace UnityEngine { class Transform; }

#define CLASS_1_CD3FBE690F475501_1_METHOD_1_BC9469D0AE2CE5A1_OFFSET UNITYSDK_OFFSET(0x13ECE4F0)
#define CLASS_1_CD3FBE690F475501_1_METHOD_1_C14045483B1EE7A4_OFFSET UNITYSDK_OFFSET(0x13ECE5A0)
#define CLASS_1_CD3FBE690F475501_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13ECE490)
#define CLASS_1_CD3FBE690F475501_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13ECE590)
#define CLASS_1_CD3FBE690F475501_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECE480)

inline static constexpr unsigned int Class_1_CD3FBE690F475501_1_TypeDefinitionIndex = 80872;

class Class_1_CD3FBE690F475501_1 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_15; // 0x10
	::UnityEngine::Transform* Field_1_8; // 0x20
	::UnityEngine::Transform* Field_1_9; // 0x28
	::LineLightingV2* Field_1_2; // 0x30
	::System::Single Field_1_0; // 0x38
	::System::Boolean Field_1_11; // 0x3C
	::System::Single Field_1_1; // 0x40
	::System::Single Field_1_13; // 0x44
	::System::Boolean Field_1_19; // 0x48
	::System::Boolean Field_1_14; // 0x49
	::System::Boolean Field_1_12; // 0x4A
	::System::Boolean Field_1_10; // 0x4B
	::System::Single Field_1_4; // 0x4C
	::System::Single Field_1_5; // 0x50
	::System::Single Field_1_7; // 0x54
	::System::Single Field_1_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD3FBE690F475501_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD3FBE690F475501_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_CD3FBE690F475501_1* Method_1_BC9469D0AE2CE5A1()
	{
		return ((::Class_1_CD3FBE690F475501_1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD3FBE690F475501_1_METHOD_1_BC9469D0AE2CE5A1_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD3FBE690F475501_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::System::Void Method_1_C14045483B1EE7A4(::Class_1_CD3FBE690F475501_1* a1)
	{
		return ((::System::Void(*)(::Class_1_CD3FBE690F475501_1*))((::PBYTE)hIl2Cpp + CLASS_1_CD3FBE690F475501_1_METHOD_1_C14045483B1EE7A4_OFFSET))(a1);
	}
};
