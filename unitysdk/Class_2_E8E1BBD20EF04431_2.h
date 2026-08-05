#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

namespace System { class Action; }

#define CLASS_2_E8E1BBD20EF04431_2_METHOD_2_0DC04D95FC16788D_OFFSET UNITYSDK_OFFSET(0x15737020)
#define CLASS_2_E8E1BBD20EF04431_2_METHOD_2_81BC3C66D553CC5F_OFFSET UNITYSDK_OFFSET(0x157371F0)
#define CLASS_2_E8E1BBD20EF04431_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15736F90)
#define CLASS_2_E8E1BBD20EF04431_2_ONSTART_OFFSET UNITYSDK_OFFSET(0x15736FD0)
#define CLASS_2_E8E1BBD20EF04431_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15737010)

inline static constexpr unsigned int Class_2_E8E1BBD20EF04431_2_TypeDefinitionIndex = 76617;

class Class_2_E8E1BBD20EF04431_2 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8E1BBD20EF04431_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8E1BBD20EF04431_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8E1BBD20EF04431_2_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_0DC04D95FC16788D(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E8E1BBD20EF04431_2_METHOD_2_0DC04D95FC16788D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_81BC3C66D553CC5F(::Il2CppArray<::System::Int32>* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E8E1BBD20EF04431_2_METHOD_2_81BC3C66D553CC5F_OFFSET))(this, a1, a2, a3);
	}
};
