#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_97AA85461D84B92D___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET UNITYSDK_OFFSET(0x17F495D0)
#define CLASS_1_97AA85461D84B92D___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0x17F495C0)
#define CLASS_1_97AA85461D84B92D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F49570)
#define CLASS_1_97AA85461D84B92D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F495B0)

inline static constexpr unsigned int Class_1_97AA85461D84B92D___c_TypeDefinitionIndex = 62402;

class Class_1_97AA85461D84B92D___c : public ::System::Object
{
public:
	static ::Class_1_97AA85461D84B92D___c** StaticGet___9()
	{
		return (::Class_1_97AA85461D84B92D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97AA85461D84B92D___c_TypeDefinitionIndex)->GetStaticField(0x38F50);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__18_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97AA85461D84B92D___c_TypeDefinitionIndex)->GetStaticField(0x38F58);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__18_5()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97AA85461D84B92D___c_TypeDefinitionIndex)->GetStaticField(0x38F60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET))(this, a1);
	}
};
