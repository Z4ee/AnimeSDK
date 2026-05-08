#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/Struct_2_B8984AF1CBDAAA93.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_11C0E52EDFD79C8F___C_METHOD_1_F6CE5D02F67BBC8D_OFFSET UNITYSDK_OFFSET(0xDED9520)
#define CLASS_1_11C0E52EDFD79C8F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDED94D0)
#define CLASS_1_11C0E52EDFD79C8F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDED9510)

inline static constexpr unsigned int Class_1_11C0E52EDFD79C8F___c_TypeDefinitionIndex = 74611;

class Class_1_11C0E52EDFD79C8F___c : public ::System::Object
{
public:
	static ::Class_1_11C0E52EDFD79C8F___c** StaticGet___9()
	{
		return (::Class_1_11C0E52EDFD79C8F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11C0E52EDFD79C8F___c_TypeDefinitionIndex)->GetStaticField(0x364B0);
	}
	static ::System::Func_2<::Struct_2_B8984AF1CBDAAA93, ::PipelineCamera::FinalCameraData>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Struct_2_B8984AF1CBDAAA93, ::PipelineCamera::FinalCameraData>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11C0E52EDFD79C8F___c_TypeDefinitionIndex)->GetStaticField(0x364B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11C0E52EDFD79C8F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11C0E52EDFD79C8F___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::FinalCameraData Method_1_F6CE5D02F67BBC8D(::Struct_2_B8984AF1CBDAAA93 a1)
	{
		return ((::PipelineCamera::FinalCameraData(*)(::PVOID, ::Struct_2_B8984AF1CBDAAA93))((::PBYTE)hIl2Cpp + CLASS_1_11C0E52EDFD79C8F___C_METHOD_1_F6CE5D02F67BBC8D_OFFSET))(this, a1);
	}
};
