#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5FAE93110E8848E3___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET UNITYSDK_OFFSET(0x1864E7B0)
#define CLASS_1_5FAE93110E8848E3___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0x1864E7A0)
#define CLASS_1_5FAE93110E8848E3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1864E750)
#define CLASS_1_5FAE93110E8848E3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1864E790)

inline static constexpr unsigned int Class_1_5FAE93110E8848E3___c_TypeDefinitionIndex = 40489;

class Class_1_5FAE93110E8848E3___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_5()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FAE93110E8848E3___c_TypeDefinitionIndex)->GetStaticField(0x3F7D0);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__9_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FAE93110E8848E3___c_TypeDefinitionIndex)->GetStaticField(0x3F7D8);
	}
	static ::Class_1_5FAE93110E8848E3___c** StaticGet___9()
	{
		return (::Class_1_5FAE93110E8848E3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FAE93110E8848E3___c_TypeDefinitionIndex)->GetStaticField(0x3F7E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET))(this, a1);
	}
};
