#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/Unreal/FRotator.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class TelescopeCameraConfig; }

#define STRUCT_2_684D98DEC5D1B919_METHOD_2_18D9238B9C310BFF_1_OFFSET UNITYSDK_OFFSET(0x84B270)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x84AEB0)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_4DA56B3B1C112C8A_OFFSET UNITYSDK_OFFSET(0x84ABA0)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x66AB30)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x84B0F0)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x34AF10)
#define STRUCT_2_684D98DEC5D1B919_METHOD_2_E995AC2C77AFC09F_OFFSET UNITYSDK_OFFSET(0x84AFF0)
#define STRUCT_2_684D98DEC5D1B919__CTOR_OFFSET UNITYSDK_OFFSET(0x84AB60)

inline static constexpr unsigned int Struct_2_684D98DEC5D1B919_TypeDefinitionIndex = 43906;

struct alignas(8) Struct_2_684D98DEC5D1B919
{
	::Foundation::Unreal::FTransform Field_2_0; // 0x10
	::Foundation::Unreal::FRotator Field_2_7; // 0x30
	::Foundation::Clamped_1<::System::Single> Field_2_6; // 0x40
	::System::Single Field_2_5; // 0x58
	::Foundation::Unreal::Interval_1<::System::Single> Field_2_4; // 0x5C
	::Foundation::Unreal::Interval_1<::System::Single> Field_2_11; // 0x6C
	::Foundation::Unreal::Interval_1<::System::Single> Field_2_10; // 0x7C

	/*
	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::MoleMole::Cameras::TelescopeCameraConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Cameras::TelescopeCameraConfig*))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919__CTOR_OFFSET))(this, a1, a2, a3);
	}
	*/

	::System::Void Method_2_4DA56B3B1C112C8A(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_4DA56B3B1C112C8A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Quaternion Method_2_E995AC2C77AFC09F()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_E995AC2C77AFC09F_OFFSET))(this);
	}
	*/

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_18D9238B9C310BFF_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_684D98DEC5D1B919_METHOD_2_18D9238B9C310BFF_1_OFFSET))(this, a1);
	}
};
