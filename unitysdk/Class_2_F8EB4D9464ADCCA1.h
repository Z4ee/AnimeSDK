#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_250.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_747.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F8EB4D9464ADCCA1_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x14B6FF70)
#define CLASS_2_F8EB4D9464ADCCA1_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x14B6FF80)
#define CLASS_2_F8EB4D9464ADCCA1_METHOD_2_E89C9D5AA7FFAD2D_OFFSET UNITYSDK_OFFSET(0x14B701D0)
#define CLASS_2_F8EB4D9464ADCCA1_METHOD_2_F01E63D8AC21EB2E_OFFSET UNITYSDK_OFFSET(0x14B6FF90)
#define CLASS_2_F8EB4D9464ADCCA1__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B6FE40)
#define CLASS_2_F8EB4D9464ADCCA1__CTOR_OFFSET UNITYSDK_OFFSET(0x14B6FE10)

inline static constexpr unsigned int Class_2_F8EB4D9464ADCCA1_TypeDefinitionIndex = 87842;

class Class_2_F8EB4D9464ADCCA1 : public ::Class_1_5DA2E7556103D5A3_250
{
public:
	static ::Il2CppArray<::MoleMole::Config::DamageElementType>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::MoleMole::Config::DamageElementType>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8EB4D9464ADCCA1_TypeDefinitionIndex)->GetStaticField(0x4B510);
	}
	::System::String* Field_2_1; // 0x198

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_747 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_747, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_F8EB4D9464ADCCA1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F8EB4D9464ADCCA1__CCTOR_OFFSET))();
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8EB4D9464ADCCA1_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F8EB4D9464ADCCA1_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_F01E63D8AC21EB2E()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8EB4D9464ADCCA1_METHOD_2_F01E63D8AC21EB2E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_E89C9D5AA7FFAD2D()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8EB4D9464ADCCA1_METHOD_2_E89C9D5AA7FFAD2D_OFFSET))(this);
	}
};
