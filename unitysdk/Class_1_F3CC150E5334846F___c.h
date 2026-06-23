#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_F3CC150E5334846F___C_METHOD_1_6150939D7C57528A_OFFSET UNITYSDK_OFFSET(0x12A7BBC0)
#define CLASS_1_F3CC150E5334846F___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET UNITYSDK_OFFSET(0x12A7BBD0)
#define CLASS_1_F3CC150E5334846F___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0x12A7BA30)
#define CLASS_1_F3CC150E5334846F___C_METHOD_1_8047E14E3FC3F341_OFFSET UNITYSDK_OFFSET(0x12A7BBE0)
#define CLASS_1_F3CC150E5334846F___C_METHOD_1_E3C23382944EFA5D_OFFSET UNITYSDK_OFFSET(0x12A7BA40)
#define CLASS_1_F3CC150E5334846F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A7B9E0)
#define CLASS_1_F3CC150E5334846F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7BA20)

inline static constexpr unsigned int Class_1_F3CC150E5334846F___c_TypeDefinitionIndex = 76864;

class Class_1_F3CC150E5334846F___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__13_8()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CC150E5334846F___c_TypeDefinitionIndex)->GetStaticField(0x34CE0);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__13_10()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CC150E5334846F___c_TypeDefinitionIndex)->GetStaticField(0x34CE8);
	}
	static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>** StaticGet___9__13_5()
	{
		return (::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CC150E5334846F___c_TypeDefinitionIndex)->GetStaticField(0x34CF0);
	}
	static ::Class_1_F3CC150E5334846F___c** StaticGet___9()
	{
		return (::Class_1_F3CC150E5334846F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CC150E5334846F___c_TypeDefinitionIndex)->GetStaticField(0x34CF8);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__13_1()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CC150E5334846F___c_TypeDefinitionIndex)->GetStaticField(0x34D00);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__13_4()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CC150E5334846F___c_TypeDefinitionIndex)->GetStaticField(0x34D08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_E3C23382944EFA5D()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F___C_METHOD_1_E3C23382944EFA5D_OFFSET))(this);
	}

	::System::Void Method_1_6150939D7C57528A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F___C_METHOD_1_6150939D7C57528A_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8047E14E3FC3F341(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F___C_METHOD_1_8047E14E3FC3F341_OFFSET))(this, a1);
	}
};
