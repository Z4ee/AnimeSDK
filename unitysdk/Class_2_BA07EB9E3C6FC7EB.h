#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/Rendering/RendererUpdateAllAsyncHandle.h"

#define CLASS_2_BA07EB9E3C6FC7EB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137C2FC0)
#define CLASS_2_BA07EB9E3C6FC7EB_METHOD_2_178812F674E8B05A_OFFSET UNITYSDK_OFFSET(0x137C3050)
#define CLASS_2_BA07EB9E3C6FC7EB_ONCREATE_OFFSET UNITYSDK_OFFSET(0x137C2F80)
#define CLASS_2_BA07EB9E3C6FC7EB__CCTOR_OFFSET UNITYSDK_OFFSET(0x137C3040)
#define CLASS_2_BA07EB9E3C6FC7EB__CTOR_OFFSET UNITYSDK_OFFSET(0x137C3020)

inline static constexpr unsigned int Class_2_BA07EB9E3C6FC7EB_TypeDefinitionIndex = 54001;

class Class_2_BA07EB9E3C6FC7EB : public ::Foundation::SingletonDisposable_1<::Class_2_BA07EB9E3C6FC7EB*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_BA07EB9E3C6FC7EB_TypeDefinitionIndex)->GetStaticField(0xAAE0);
	}
	::UnityEngine::Rendering::RendererUpdateAllAsyncHandle Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA07EB9E3C6FC7EB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BA07EB9E3C6FC7EB__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA07EB9E3C6FC7EB_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA07EB9E3C6FC7EB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_178812F674E8B05A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA07EB9E3C6FC7EB_METHOD_2_178812F674E8B05A_OFFSET))(this);
	}
};
