#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_CEBEFC8BE3C58B6D___C_METHOD_1_6150939D7C57528A_OFFSET UNITYSDK_OFFSET(0x18EA87E0)
#define CLASS_1_CEBEFC8BE3C58B6D___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0x18EA87F0)
#define CLASS_1_CEBEFC8BE3C58B6D___C_METHOD_1_F8B3684B03BA8B7D_OFFSET UNITYSDK_OFFSET(0x18EA87C0)
#define CLASS_1_CEBEFC8BE3C58B6D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EA8770)
#define CLASS_1_CEBEFC8BE3C58B6D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA87B0)

inline static constexpr unsigned int Class_1_CEBEFC8BE3C58B6D___c_TypeDefinitionIndex = 74716;

class Class_1_CEBEFC8BE3C58B6D___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__16_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEBEFC8BE3C58B6D___c_TypeDefinitionIndex)->GetStaticField(0x44E00);
	}
	static ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEBEFC8BE3C58B6D___c_TypeDefinitionIndex)->GetStaticField(0x44E08);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__15_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEBEFC8BE3C58B6D___c_TypeDefinitionIndex)->GetStaticField(0x44E10);
	}
	static ::Class_1_CEBEFC8BE3C58B6D___c** StaticGet___9()
	{
		return (::Class_1_CEBEFC8BE3C58B6D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEBEFC8BE3C58B6D___c_TypeDefinitionIndex)->GetStaticField(0x44E18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_F8B3684B03BA8B7D(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D___C_METHOD_1_F8B3684B03BA8B7D_OFFSET))(this, a1);
	}

	::System::Void Method_1_6150939D7C57528A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D___C_METHOD_1_6150939D7C57528A_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}
};
