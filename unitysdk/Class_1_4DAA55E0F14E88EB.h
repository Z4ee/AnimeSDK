#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8DD0BFB45DFD5B40.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/OverlapResult.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1A58F01F41846A1D;
class Class_3_883E597458B91E77;
class Class_3_DFD5D1FDB9D2A4AC;

#define CLASS_1_4DAA55E0F14E88EB_METHOD_1_940918FEDA1F3064_OFFSET UNITYSDK_OFFSET(0x16E20B80)
#define CLASS_1_4DAA55E0F14E88EB_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x16E20FE0)
#define CLASS_1_4DAA55E0F14E88EB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16E20F10)
#define CLASS_1_4DAA55E0F14E88EB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16E20E70)
#define CLASS_1_4DAA55E0F14E88EB__CTOR_OFFSET UNITYSDK_OFFSET(0x16E20B70)

inline static constexpr unsigned int Class_1_4DAA55E0F14E88EB_TypeDefinitionIndex = 49741;

class Class_1_4DAA55E0F14E88EB : public ::System::Object
{
public:
	::Class_3_1A58F01F41846A1D* Field_1_1; // 0x10
	::Il2CppArray<::UnityEngine::OverlapResult>* Field_1_4; // 0x18
	::Class_3_883E597458B91E77* Field_1_2; // 0x20
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_3; // 0x28
	::Class_3_DFD5D1FDB9D2A4AC* Field_1_0; // 0x30
	::System::Boolean Field_1_22; // 0x38
	::System::Boolean Field_1_20; // 0x39
	::System::Boolean Field_1_19; // 0x3A
	::System::Boolean Field_1_15; // 0x3B
	::UnityEngine::RaycastHit Field_1_17; // 0x3C
	::System::Int32 Field_1_7; // 0x70
	::System::UInt32 Field_1_5; // 0x74
	::System::Boolean Field_1_24; // 0x78
	::System::Boolean Field_1_16; // 0x79
	::System::Boolean Field_1_14; // 0x7A
	::System::Boolean Field_1_18; // 0x7B
	::Struct_2_8DD0BFB45DFD5B40 Field_1_13; // 0x7C
	::UnityEngine::Vector3 Field_1_11; // 0xA8
	::UnityEngine::Vector3 Field_1_10; // 0xB4
	::UnityEngine::Vector3 Field_1_12; // 0xC0
	::UnityEngine::Vector3 Field_1_8; // 0xCC
	::System::Boolean Field_1_23; // 0xD8
	::System::Boolean Field_1_25; // 0xD9
	::System::Boolean Field_1_6; // 0xDA
	::System::Boolean Field_1_21; // 0xDB
	::UnityEngine::Quaternion Field_1_9; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DAA55E0F14E88EB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_940918FEDA1F3064(::Class_1_4DAA55E0F14E88EB* a1)
	{
		return ((::System::Void(*)(::Class_1_4DAA55E0F14E88EB*))((::PBYTE)hIl2Cpp + CLASS_1_4DAA55E0F14E88EB_METHOD_1_940918FEDA1F3064_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DAA55E0F14E88EB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DAA55E0F14E88EB_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::Class_1_4DAA55E0F14E88EB* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_4DAA55E0F14E88EB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DAA55E0F14E88EB_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}
};
