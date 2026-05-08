#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_78783A73BC2E7725;
namespace System { class EventArgs; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_1_FB6A0B9750413E8B_METHOD_1_BF10FA4CF868A326_OFFSET UNITYSDK_OFFSET(0xA9B3540)
#define CLASS_1_FB6A0B9750413E8B_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xA9B3670)
#define CLASS_1_FB6A0B9750413E8B__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9B34A0)

inline static constexpr unsigned int Class_1_FB6A0B9750413E8B_TypeDefinitionIndex = 63452;

class Class_1_FB6A0B9750413E8B : public ::System::Object
{
public:
	static ::System::WeakReference_1<::Class_2_78783A73BC2E7725*>** StaticGet_Field_1_1()
	{
		return (::System::WeakReference_1<::Class_2_78783A73BC2E7725*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB6A0B9750413E8B_TypeDefinitionIndex)->GetStaticField(0x48DF0);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB6A0B9750413E8B_TypeDefinitionIndex)->GetStaticField(0x119A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB6A0B9750413E8B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_BF10FA4CF868A326(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_FB6A0B9750413E8B_METHOD_1_BF10FA4CF868A326_OFFSET))(a1);
	}

	static ::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB6A0B9750413E8B_METHOD_1_CEBFF096B4C9D46B_OFFSET))();
	}
};
