#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_331.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_971.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_62FA09EDD5F5D65F_METHOD_2_038349821F206DD5_1_OFFSET UNITYSDK_OFFSET(0x1BAF5800)
#define CLASS_2_62FA09EDD5F5D65F_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x1BAF57E0)
#define CLASS_2_62FA09EDD5F5D65F_METHOD_2_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x1BAF57F0)
#define CLASS_2_62FA09EDD5F5D65F_METHOD_2_F5CD8BFA444150BD_OFFSET UNITYSDK_OFFSET(0x1BAF5810)
#define CLASS_2_62FA09EDD5F5D65F__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF4ED0)

inline static constexpr unsigned int Class_2_62FA09EDD5F5D65F_TypeDefinitionIndex = 16668;

class Class_2_62FA09EDD5F5D65F : public ::Class_1_5DA2E7556103D5A3_331
{
public:
	::Foundation::Unreal::FGameplayTagContainer Field_2_0; // 0x70
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0xE0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0xE8
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0xF0

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_971 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_971, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_62FA09EDD5F5D65F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62FA09EDD5F5D65F_METHOD_2_038349821F206DD5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62FA09EDD5F5D65F_METHOD_2_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62FA09EDD5F5D65F_METHOD_2_038349821F206DD5_1_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_62FA09EDD5F5D65F_METHOD_2_F5CD8BFA444150BD_OFFSET))(this, a1);
	}
};
