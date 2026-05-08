#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_484FC6C8D28A6453___C_METHOD_1_1904421C06532BF0_OFFSET UNITYSDK_OFFSET(0x123EF0E0)
#define CLASS_1_484FC6C8D28A6453___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x123EF090)
#define CLASS_1_484FC6C8D28A6453___C__CTOR_OFFSET UNITYSDK_OFFSET(0x123EF0D0)

inline static constexpr unsigned int Class_1_484FC6C8D28A6453___c_TypeDefinitionIndex = 48515;

class Class_1_484FC6C8D28A6453___c : public ::System::Object
{
public:
	static ::Class_1_484FC6C8D28A6453___c** StaticGet___9()
	{
		return (::Class_1_484FC6C8D28A6453___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_484FC6C8D28A6453___c_TypeDefinitionIndex)->GetStaticField(0x400A0);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__9_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_484FC6C8D28A6453___c_TypeDefinitionIndex)->GetStaticField(0x400A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_1904421C06532BF0()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453___C_METHOD_1_1904421C06532BF0_OFFSET))(this);
	}
};
