#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D769E1F51D12BB96.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_455336A079B58DD3_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x40C5C0)
#define STRUCT_2_455336A079B58DD3_METHOD_2_61BCA6E04C88A26E_OFFSET UNITYSDK_OFFSET(0x2AB510)
#define STRUCT_2_455336A079B58DD3_METHOD_2_774AD89AA3EB3093_OFFSET UNITYSDK_OFFSET(0x2C19D0)
#define STRUCT_2_455336A079B58DD3_METHOD_2_82F0E3DD8D847BCC_OFFSET UNITYSDK_OFFSET(0x52CCD0)
#define STRUCT_2_455336A079B58DD3_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STRUCT_2_455336A079B58DD3_METHOD_2_F608E611E2F7EC60_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define STRUCT_2_455336A079B58DD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1074D6E0)
#define STRUCT_2_455336A079B58DD3__CTOR_OFFSET UNITYSDK_OFFSET(0x6C8CC0)

inline static constexpr unsigned int Struct_2_455336A079B58DD3_TypeDefinitionIndex = 70075;

struct alignas(8) Struct_2_455336A079B58DD3
{
	static ::System::Func_1<::System::Single>** StaticGet_Field_2_6()
	{
		return (::System::Func_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_455336A079B58DD3_TypeDefinitionIndex)->GetStaticField(0x4B9D0);
	}
	static ::UnityEngine::AnimationCurve** StaticGet_Field_2_5()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_455336A079B58DD3_TypeDefinitionIndex)->GetStaticField(0x4B9D8);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::PipelineCamera::WorldBasicCameraDataDeltaFlag Field_2_2; // 0x18
	::UnityEngine::AnimationCurve* Field_2_3; // 0x20
	::System::Func_1<::System::Single>* Field_2_4; // 0x28

	::System::Void _ctor(::Enum_3_D769E1F51D12BB96 a1, ::System::Single a2, ::System::Func_1<::System::Single>* a3, ::UnityEngine::AnimationCurve* a4, ::PipelineCamera::WorldBasicCameraDataDeltaFlag a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D769E1F51D12BB96, ::System::Single, ::System::Func_1<::System::Single>*, ::UnityEngine::AnimationCurve*, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + STRUCT_2_455336A079B58DD3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_455336A079B58DD3__CCTOR_OFFSET))();
	}

	::System::Func_1<::System::Single>* Method_2_61BCA6E04C88A26E()
	{
		return ((::System::Func_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_455336A079B58DD3_METHOD_2_61BCA6E04C88A26E_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_455336A079B58DD3_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_2_F608E611E2F7EC60()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_455336A079B58DD3_METHOD_2_F608E611E2F7EC60_OFFSET))(this);
	}

	::System::Void Method_2_82F0E3DD8D847BCC(::PipelineCamera::WorldBasicCameraDataDeltaFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + STRUCT_2_455336A079B58DD3_METHOD_2_82F0E3DD8D847BCC_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_455336A079B58DD3_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraDataDeltaFlag Method_2_774AD89AA3EB3093()
	{
		return ((::PipelineCamera::WorldBasicCameraDataDeltaFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_455336A079B58DD3_METHOD_2_774AD89AA3EB3093_OFFSET))(this);
	}
};
