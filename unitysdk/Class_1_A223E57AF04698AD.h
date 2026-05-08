#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D18F1D061EEF5E67_2.h"
#include "unitysdk/System/Object.h"

class Class_1_AB4E9C6220DB54FF;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A223E57AF04698AD_METHOD_1_AE2EBCF518B2E8B6_OFFSET UNITYSDK_OFFSET(0x138BCD80)
#define CLASS_1_A223E57AF04698AD_METHOD_1_D4506E2299C17A75_OFFSET UNITYSDK_OFFSET(0x138BC010)
#define CLASS_1_A223E57AF04698AD_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x138BCD10)
#define CLASS_1_A223E57AF04698AD_METHOD_1_FE794B7E4E441446_OFFSET UNITYSDK_OFFSET(0x138BCB10)
#define CLASS_1_A223E57AF04698AD__CTOR_OFFSET UNITYSDK_OFFSET(0x138BBE30)

inline static constexpr unsigned int Class_1_A223E57AF04698AD_TypeDefinitionIndex = 54423;

class Class_1_A223E57AF04698AD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_1_10; // 0x10
	::MoleMole::Config::ConfigPosRot* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_1_11; // 0x20
	::MoleMole::Config::ConfigPosRot* Field_1_5; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_D18F1D061EEF5E67_2>* Field_1_14; // 0x38
	::MoleMole::Config::ConfigPosRot* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_1_12; // 0x48
	::System::Int32 Field_1_13; // 0x50
	::System::Boolean Field_1_9; // 0x54
	::System::Boolean Field_1_8; // 0x55
	::System::Int32 Field_1_1; // 0x58
	::System::Single Field_1_3; // 0x5C
	::System::Int32 Field_1_0; // 0x60
	::System::Single Field_1_2; // 0x64

	::System::Void _ctor(::Class_2_167BB37617B940E3* a1, ::Class_1_AB4E9C6220DB54FF* a2, ::Class_1_AB4E9C6220DB54FF* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_167BB37617B940E3*, ::Class_1_AB4E9C6220DB54FF*, ::Class_1_AB4E9C6220DB54FF*))((::PBYTE)hIl2Cpp + CLASS_1_A223E57AF04698AD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_FE794B7E4E441446(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A223E57AF04698AD_METHOD_1_FE794B7E4E441446_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D4506E2299C17A75(::Class_2_167BB37617B940E3* a1, ::Class_1_AB4E9C6220DB54FF* a2, ::Class_1_AB4E9C6220DB54FF* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_167BB37617B940E3*, ::Class_1_AB4E9C6220DB54FF*, ::Class_1_AB4E9C6220DB54FF*))((::PBYTE)hIl2Cpp + CLASS_1_A223E57AF04698AD_METHOD_1_D4506E2299C17A75_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_AE2EBCF518B2E8B6(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A223E57AF04698AD_METHOD_1_AE2EBCF518B2E8B6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A223E57AF04698AD_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}
};
