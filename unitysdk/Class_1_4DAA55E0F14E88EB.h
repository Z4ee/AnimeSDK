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

#define CLASS_1_4DAA55E0F14E88EB_METHOD_1_940918FEDA1F3064_OFFSET UNITYSDK_OFFSET(0x1293F8F0)
#define CLASS_1_4DAA55E0F14E88EB_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x1293FC80)
#define CLASS_1_4DAA55E0F14E88EB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1293FD80)
#define CLASS_1_4DAA55E0F14E88EB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1293FBE0)
#define CLASS_1_4DAA55E0F14E88EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1293F8E0)

inline static constexpr unsigned int Class_1_4DAA55E0F14E88EB_TypeDefinitionIndex = 47200;

class Class_1_4DAA55E0F14E88EB : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_3; // 0x10
	::Class_3_DFD5D1FDB9D2A4AC* Field_1_0; // 0x18
	::Class_3_1A58F01F41846A1D* Field_1_1; // 0x20
	::Class_3_883E597458B91E77* Field_1_2; // 0x28
	::Il2CppArray<::UnityEngine::OverlapResult>* Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_7; // 0x38
	::System::Boolean Field_1_20; // 0x44
	::System::Boolean Field_1_21; // 0x45
	::System::Boolean Field_1_23; // 0x46
	::System::Boolean Field_1_22; // 0x47
	::UnityEngine::Vector3 Field_1_9; // 0x48
	::Struct_2_8DD0BFB45DFD5B40 Field_1_12; // 0x54
	::UnityEngine::RaycastHit Field_1_16; // 0x7C
	::UnityEngine::Quaternion Field_1_8; // 0xB0
	::UnityEngine::Vector3 Field_1_10; // 0xC0
	::UnityEngine::Vector3 Field_1_11; // 0xCC
	::System::UInt32 Field_1_5; // 0xD8
	::System::Boolean Field_1_18; // 0xDC
	::System::Boolean Field_1_14; // 0xDD
	::System::Boolean Field_1_17; // 0xDE
	::System::Boolean Field_1_15; // 0xDF
	::System::Boolean Field_1_24; // 0xE0
	::System::Boolean Field_1_13; // 0xE1
	::System::Boolean Field_1_19; // 0xE2
	::System::Boolean Field_1_6; // 0xE3

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

	static ::Class_1_4DAA55E0F14E88EB* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_4DAA55E0F14E88EB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DAA55E0F14E88EB_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DAA55E0F14E88EB_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
