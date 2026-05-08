#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_9454BFF647B56E9E___C_METHOD_1_6150939D7C57528A_OFFSET UNITYSDK_OFFSET(0x14CF82F0)
#define CLASS_1_9454BFF647B56E9E___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET UNITYSDK_OFFSET(0x14CF8310)
#define CLASS_1_9454BFF647B56E9E___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0x14CF8300)
#define CLASS_1_9454BFF647B56E9E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CF82A0)
#define CLASS_1_9454BFF647B56E9E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF82E0)

inline static constexpr unsigned int Class_1_9454BFF647B56E9E___c_TypeDefinitionIndex = 74985;

class Class_1_9454BFF647B56E9E___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__6_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9454BFF647B56E9E___c_TypeDefinitionIndex)->GetStaticField(0x36F60);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__6_5()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9454BFF647B56E9E___c_TypeDefinitionIndex)->GetStaticField(0x36F68);
	}
	static ::Class_1_9454BFF647B56E9E___c** StaticGet___9()
	{
		return (::Class_1_9454BFF647B56E9E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9454BFF647B56E9E___c_TypeDefinitionIndex)->GetStaticField(0x36F70);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__7_1()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9454BFF647B56E9E___c_TypeDefinitionIndex)->GetStaticField(0x36F78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6150939D7C57528A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E___C_METHOD_1_6150939D7C57528A_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET))(this, a1);
	}
};
