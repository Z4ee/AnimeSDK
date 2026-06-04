#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
class Class_1_027882ED3C098B1B;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_DC9913A283BE7357_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10616DC0)
#define CLASS_1_DC9913A283BE7357_METHOD_1_12F69DC2C736C0BD_OFFSET UNITYSDK_OFFSET(0x10616E00)
#define CLASS_1_DC9913A283BE7357_METHOD_1_74505E341CB9A5FE_OFFSET UNITYSDK_OFFSET(0x10617360)
#define CLASS_1_DC9913A283BE7357__CCTOR_OFFSET UNITYSDK_OFFSET(0x10617460)
#define CLASS_1_DC9913A283BE7357__CTOR_OFFSET UNITYSDK_OFFSET(0x10617440)

inline static constexpr unsigned int Class_1_DC9913A283BE7357_TypeDefinitionIndex = 68543;

class Class_1_DC9913A283BE7357 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC9913A283BE7357_TypeDefinitionIndex)->GetStaticField(0xEFD0);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::Class_1_027882ED3C098B1B* Field_1_3; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC9913A283BE7357__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC9913A283BE7357__CCTOR_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC9913A283BE7357_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_12F69DC2C736C0BD(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_866* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_866*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_DC9913A283BE7357_METHOD_1_12F69DC2C736C0BD_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::String* Method_1_74505E341CB9A5FE(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC9913A283BE7357_METHOD_1_74505E341CB9A5FE_OFFSET))(a1);
	}
};
