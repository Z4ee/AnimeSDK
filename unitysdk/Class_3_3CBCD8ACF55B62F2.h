#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0.h"
#include "unitysdk/Enum_3_527B06155233FF65.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System { class String; }

#define CLASS_3_3CBCD8ACF55B62F2_METHOD_3_4AF8B041E45F663A_OFFSET UNITYSDK_OFFSET(0x138E7DF0)
#define CLASS_3_3CBCD8ACF55B62F2_METHOD_3_551A624D77DDF9C9_OFFSET UNITYSDK_OFFSET(0x138E8720)
#define CLASS_3_3CBCD8ACF55B62F2_METHOD_3_75DA2BD1FF10E8BE_OFFSET UNITYSDK_OFFSET(0x138E87E0)
#define CLASS_3_3CBCD8ACF55B62F2_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x138E8710)
#define CLASS_3_3CBCD8ACF55B62F2_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x138E8EF0)
#define CLASS_3_3CBCD8ACF55B62F2_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x138E8700)
#define CLASS_3_3CBCD8ACF55B62F2_METHOD_3_AF8551886E0838A1_OFFSET UNITYSDK_OFFSET(0x138E8740)
#define CLASS_3_3CBCD8ACF55B62F2_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x138E8ED0)
#define CLASS_3_3CBCD8ACF55B62F2_METHOD_3_EE87AF45C9BA5F54_OFFSET UNITYSDK_OFFSET(0x138E8EE0)
#define CLASS_3_3CBCD8ACF55B62F2_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x138E8EC0)
#define CLASS_3_3CBCD8ACF55B62F2_ONATTACH_OFFSET UNITYSDK_OFFSET(0x138E7D60)
#define CLASS_3_3CBCD8ACF55B62F2_ONDETACH_OFFSET UNITYSDK_OFFSET(0x138E8150)
#define CLASS_3_3CBCD8ACF55B62F2_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x138E85C0)
#define CLASS_3_3CBCD8ACF55B62F2__CTOR_OFFSET UNITYSDK_OFFSET(0x138E86C0)

inline static constexpr unsigned int Class_3_3CBCD8ACF55B62F2_TypeDefinitionIndex = 41955;

class Class_3_3CBCD8ACF55B62F2 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_3CBCD8ACF55B62F2*>
{
public:
	::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*> Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x40
	::System::Boolean Field_3_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*> Method_3_551A624D77DDF9C9()
	{
		return ((::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_METHOD_3_551A624D77DDF9C9_OFFSET))(this);
	}

	::System::Boolean Method_3_AF8551886E0838A1(::System::String* a1, ::Enum_3_527B06155233FF65 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_527B06155233FF65))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_METHOD_3_AF8551886E0838A1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_75DA2BD1FF10E8BE(::System::UInt32 a1, ::System::String* a2, ::Enum_3_527B06155233FF65 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Enum_3_527B06155233FF65))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_METHOD_3_75DA2BD1FF10E8BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_4AF8B041E45F663A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_METHOD_3_4AF8B041E45F663A_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_EE87AF45C9BA5F54(::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*>))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_METHOD_3_EE87AF45C9BA5F54_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBCD8ACF55B62F2_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
