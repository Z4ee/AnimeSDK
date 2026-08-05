#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_B6CB25C8158EE1DE___C_METHOD_1_1904421C06532BF0_OFFSET UNITYSDK_OFFSET(0x1BA4EEC0)
#define CLASS_1_B6CB25C8158EE1DE___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET UNITYSDK_OFFSET(0x1BA4EF70)
#define CLASS_1_B6CB25C8158EE1DE___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0x1BA4EF60)
#define CLASS_1_B6CB25C8158EE1DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA4EE70)
#define CLASS_1_B6CB25C8158EE1DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4EEB0)

inline static constexpr unsigned int Class_1_B6CB25C8158EE1DE___c_TypeDefinitionIndex = 76342;

class Class_1_B6CB25C8158EE1DE___c : public ::System::Object
{
public:
	static ::Class_1_B6CB25C8158EE1DE___c** StaticGet___9()
	{
		return (::Class_1_B6CB25C8158EE1DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6CB25C8158EE1DE___c_TypeDefinitionIndex)->GetStaticField(0x496E0);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__17_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6CB25C8158EE1DE___c_TypeDefinitionIndex)->GetStaticField(0x496E8);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__18_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6CB25C8158EE1DE___c_TypeDefinitionIndex)->GetStaticField(0x496F0);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__19_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6CB25C8158EE1DE___c_TypeDefinitionIndex)->GetStaticField(0x496F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_1904421C06532BF0()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE___C_METHOD_1_1904421C06532BF0_OFFSET))(this);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET))(this, a1);
	}
};
