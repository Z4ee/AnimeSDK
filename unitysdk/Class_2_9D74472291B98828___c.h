#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_9D74472291B98828___C_METHOD_1_6150939D7C57528A_OFFSET UNITYSDK_OFFSET(0xA641D50)
#define CLASS_2_9D74472291B98828___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA641D00)
#define CLASS_2_9D74472291B98828___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA641D40)

inline static constexpr unsigned int Class_2_9D74472291B98828___c_TypeDefinitionIndex = 57687;

class Class_2_9D74472291B98828___c : public ::System::Object
{
public:
	static ::Class_2_9D74472291B98828___c** StaticGet___9()
	{
		return (::Class_2_9D74472291B98828___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D74472291B98828___c_TypeDefinitionIndex)->GetStaticField(0x3F710);
	}
	static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__53_2()
	{
		return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D74472291B98828___c_TypeDefinitionIndex)->GetStaticField(0x3F718);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6150939D7C57528A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828___C_METHOD_1_6150939D7C57528A_OFFSET))(this, a1);
	}
};
