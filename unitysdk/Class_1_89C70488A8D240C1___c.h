#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_89C70488A8D240C1___C_METHOD_1_1904421C06532BF0_OFFSET UNITYSDK_OFFSET(0xFAB3190)
#define CLASS_1_89C70488A8D240C1___C_METHOD_1_6150939D7C57528A_1_OFFSET UNITYSDK_OFFSET(0xFAB3170)
#define CLASS_1_89C70488A8D240C1___C_METHOD_1_6150939D7C57528A_OFFSET UNITYSDK_OFFSET(0xFAB3160)
#define CLASS_1_89C70488A8D240C1___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET UNITYSDK_OFFSET(0xFAB3230)
#define CLASS_1_89C70488A8D240C1___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0xFAB3180)
#define CLASS_1_89C70488A8D240C1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFAB3110)
#define CLASS_1_89C70488A8D240C1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFAB3150)

inline static constexpr unsigned int Class_1_89C70488A8D240C1___c_TypeDefinitionIndex = 80519;

class Class_1_89C70488A8D240C1___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__20_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89C70488A8D240C1___c_TypeDefinitionIndex)->GetStaticField(0x38410);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__19_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89C70488A8D240C1___c_TypeDefinitionIndex)->GetStaticField(0x38418);
	}
	static ::Class_1_89C70488A8D240C1___c** StaticGet___9()
	{
		return (::Class_1_89C70488A8D240C1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89C70488A8D240C1___c_TypeDefinitionIndex)->GetStaticField(0x38420);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__18_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89C70488A8D240C1___c_TypeDefinitionIndex)->GetStaticField(0x38428);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__17_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89C70488A8D240C1___c_TypeDefinitionIndex)->GetStaticField(0x38430);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__20_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89C70488A8D240C1___c_TypeDefinitionIndex)->GetStaticField(0x38438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6150939D7C57528A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1___C_METHOD_1_6150939D7C57528A_OFFSET))(this, a1);
	}

	::System::Void Method_1_6150939D7C57528A_1(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1___C_METHOD_1_6150939D7C57528A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_1904421C06532BF0()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1___C_METHOD_1_1904421C06532BF0_OFFSET))(this);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET))(this, a1);
	}
};
