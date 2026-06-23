#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_452E9F64D17D9854___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET UNITYSDK_OFFSET(0x179B7560)
#define CLASS_1_452E9F64D17D9854___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0x179B7550)
#define CLASS_1_452E9F64D17D9854___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179B7500)
#define CLASS_1_452E9F64D17D9854___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179B7540)

inline static constexpr unsigned int Class_1_452E9F64D17D9854___c_TypeDefinitionIndex = 61001;

class Class_1_452E9F64D17D9854___c : public ::System::Object
{
public:
	static ::Class_1_452E9F64D17D9854___c** StaticGet___9()
	{
		return (::Class_1_452E9F64D17D9854___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_452E9F64D17D9854___c_TypeDefinitionIndex)->GetStaticField(0x42770);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__13_5()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_452E9F64D17D9854___c_TypeDefinitionIndex)->GetStaticField(0x42778);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__13_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_452E9F64D17D9854___c_TypeDefinitionIndex)->GetStaticField(0x42780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6FE6B6DCEB2431_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_452E9F64D17D9854___C_METHOD_1_6C6FE6B6DCEB2431_1_OFFSET))(this, a1);
	}
};
