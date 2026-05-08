#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_34F7035555410463_3.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_D490E10B93EAC68A_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF60A8B0)
#define CLASS_3_D490E10B93EAC68A_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xF60A990)
#define CLASS_3_D490E10B93EAC68A_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xF60AA20)
#define CLASS_3_D490E10B93EAC68A_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF60A800)
#define CLASS_3_D490E10B93EAC68A__CCTOR_OFFSET UNITYSDK_OFFSET(0xF60A900)
#define CLASS_3_D490E10B93EAC68A__CTOR_OFFSET UNITYSDK_OFFSET(0xF60A980)

inline static constexpr unsigned int Class_3_D490E10B93EAC68A_TypeDefinitionIndex = 80887;

class Class_3_D490E10B93EAC68A : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x83; // 0x0
	::System::Boolean Field_3_4; // 0x48
	::System::Single Field_3_1; // 0x4C
	::System::Single Field_3_0; // 0x50
	::UnityEngine::Vector3 Field_3_2; // 0x54
	::Enum_3_34F7035555410463_3 Field_3_5; // 0x60
	::UnityEngine::LayerMask Field_3_3; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D490E10B93EAC68A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D490E10B93EAC68A__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D490E10B93EAC68A_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D490E10B93EAC68A_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D490E10B93EAC68A_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_D490E10B93EAC68A* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_D490E10B93EAC68A*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D490E10B93EAC68A_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
