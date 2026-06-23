#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_ED3259C054307E2A___C_METHOD_1_6150939D7C57528A_OFFSET UNITYSDK_OFFSET(0xF8D1870)
#define CLASS_1_ED3259C054307E2A___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET UNITYSDK_OFFSET(0xF8D1860)
#define CLASS_1_ED3259C054307E2A___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0xF8D1850)
#define CLASS_1_ED3259C054307E2A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF8D1800)
#define CLASS_1_ED3259C054307E2A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF8D1840)

inline static constexpr unsigned int Class_1_ED3259C054307E2A___c_TypeDefinitionIndex = 77251;

class Class_1_ED3259C054307E2A___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__21_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED3259C054307E2A___c_TypeDefinitionIndex)->GetStaticField(0x4B870);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__23_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED3259C054307E2A___c_TypeDefinitionIndex)->GetStaticField(0x4B878);
	}
	static ::Class_1_ED3259C054307E2A___c** StaticGet___9()
	{
		return (::Class_1_ED3259C054307E2A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED3259C054307E2A___c_TypeDefinitionIndex)->GetStaticField(0x4B880);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__21_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED3259C054307E2A___c_TypeDefinitionIndex)->GetStaticField(0x4B888);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED3259C054307E2A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED3259C054307E2A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_ED3259C054307E2A___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_ED3259C054307E2A___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6150939D7C57528A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_ED3259C054307E2A___C_METHOD_1_6150939D7C57528A_OFFSET))(this, a1);
	}
};
