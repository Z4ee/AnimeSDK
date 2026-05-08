#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_AAE113EF1D654B70___C_METHOD_1_E661BAEFA63CDC37_OFFSET UNITYSDK_OFFSET(0xFE6B790)
#define CLASS_1_AAE113EF1D654B70___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE6B740)
#define CLASS_1_AAE113EF1D654B70___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFE6B780)

inline static constexpr unsigned int Class_1_AAE113EF1D654B70___c_TypeDefinitionIndex = 57261;

class Class_1_AAE113EF1D654B70___c : public ::System::Object
{
public:
	static ::Class_1_AAE113EF1D654B70___c** StaticGet___9()
	{
		return (::Class_1_AAE113EF1D654B70___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAE113EF1D654B70___c_TypeDefinitionIndex)->GetStaticField(0x31B90);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__19_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAE113EF1D654B70___c_TypeDefinitionIndex)->GetStaticField(0x31B98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_E661BAEFA63CDC37()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70___C_METHOD_1_E661BAEFA63CDC37_OFFSET))(this);
	}
};
