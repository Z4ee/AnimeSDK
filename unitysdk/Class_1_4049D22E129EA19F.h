#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FA4131863BE341A7.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_F79C1AA612159303;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4049D22E129EA19F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15EF2D60)
#define CLASS_1_4049D22E129EA19F_METHOD_1_2B3B816B6031F0E2_OFFSET UNITYSDK_OFFSET(0x15EF3320)
#define CLASS_1_4049D22E129EA19F_METHOD_1_2E8AFDFF20EB7DF5_OFFSET UNITYSDK_OFFSET(0x15EF2CD0)
#define CLASS_1_4049D22E129EA19F_METHOD_1_4A9DEC7AF03BB968_1_OFFSET UNITYSDK_OFFSET(0x15EF3230)
#define CLASS_1_4049D22E129EA19F_METHOD_1_4A9DEC7AF03BB968_OFFSET UNITYSDK_OFFSET(0x15EF2DC0)
#define CLASS_1_4049D22E129EA19F_METHOD_1_4DE37437EE984E30_OFFSET UNITYSDK_OFFSET(0x15EF3120)
#define CLASS_1_4049D22E129EA19F_METHOD_1_DBD9CA657B972D6C_1_OFFSET UNITYSDK_OFFSET(0x15EF3400)
#define CLASS_1_4049D22E129EA19F_METHOD_1_DBD9CA657B972D6C_OFFSET UNITYSDK_OFFSET(0x15EF2EB0)
#define CLASS_1_4049D22E129EA19F__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF2CC0)

inline static constexpr unsigned int Class_1_4049D22E129EA19F_TypeDefinitionIndex = 53387;

class Class_1_4049D22E129EA19F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F79C1AA612159303*>* Field_1_6; // 0x10
	::System::Int32 Field_1_3; // 0x18
	::System::Nullable_1<::System::Boolean> Field_1_7; // 0x1C
	::System::Int32 Field_1_1; // 0x20
	::Enum_3_FA4131863BE341A7 Field_1_2; // 0x24
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4049D22E129EA19F__CTOR_OFFSET))(this);
	}

	::Class_1_F79C1AA612159303* Method_1_2E8AFDFF20EB7DF5(::System::Int32 a1)
	{
		return ((::Class_1_F79C1AA612159303*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4049D22E129EA19F_METHOD_1_2E8AFDFF20EB7DF5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4049D22E129EA19F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_4A9DEC7AF03BB968(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4049D22E129EA19F_METHOD_1_4A9DEC7AF03BB968_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DBD9CA657B972D6C(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_4049D22E129EA19F_METHOD_1_DBD9CA657B972D6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_4DE37437EE984E30(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4049D22E129EA19F_METHOD_1_4DE37437EE984E30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4A9DEC7AF03BB968_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4049D22E129EA19F_METHOD_1_4A9DEC7AF03BB968_1_OFFSET))(this, a1, a2);
	}

	::Class_1_F79C1AA612159303* Method_1_2B3B816B6031F0E2(::System::Int32 a1)
	{
		return ((::Class_1_F79C1AA612159303*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4049D22E129EA19F_METHOD_1_2B3B816B6031F0E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBD9CA657B972D6C_1(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_4049D22E129EA19F_METHOD_1_DBD9CA657B972D6C_1_OFFSET))(this, a1);
	}
};
