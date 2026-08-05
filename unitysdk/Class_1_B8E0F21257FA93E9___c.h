#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B8E0F21257FA93E9___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET UNITYSDK_OFFSET(0x18A82500)
#define CLASS_1_B8E0F21257FA93E9___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0x18A82420)
#define CLASS_1_B8E0F21257FA93E9___C_METHOD_1_942D9492451488C4_1_OFFSET UNITYSDK_OFFSET(0x18A82510)
#define CLASS_1_B8E0F21257FA93E9___C_METHOD_1_942D9492451488C4_OFFSET UNITYSDK_OFFSET(0x18A82430)
#define CLASS_1_B8E0F21257FA93E9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A823D0)
#define CLASS_1_B8E0F21257FA93E9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A82410)

inline static constexpr unsigned int Class_1_B8E0F21257FA93E9___c_TypeDefinitionIndex = 82861;

class Class_1_B8E0F21257FA93E9___c : public ::System::Object
{
public:
	static ::Class_1_B8E0F21257FA93E9___c** StaticGet___9()
	{
		return (::Class_1_B8E0F21257FA93E9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8E0F21257FA93E9___c_TypeDefinitionIndex)->GetStaticField(0x35080);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8E0F21257FA93E9___c_TypeDefinitionIndex)->GetStaticField(0x35088);
	}
	static ::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_4()
	{
		return (::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8E0F21257FA93E9___c_TypeDefinitionIndex)->GetStaticField(0x35090);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_5()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8E0F21257FA93E9___c_TypeDefinitionIndex)->GetStaticField(0x35098);
	}
	static ::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_2()
	{
		return (::System::Func_2<::PipelineCamera::ICameraDataBlender*, ::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8E0F21257FA93E9___c_TypeDefinitionIndex)->GetStaticField(0x350A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_942D9492451488C4(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9___C_METHOD_1_942D9492451488C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_942D9492451488C4_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9___C_METHOD_1_942D9492451488C4_1_OFFSET))(this, a1);
	}
};
