#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_330B6218B3B9782B;
class Class_1_4EBAA9372E57A380_Class_1_04A718CFB2B0DB18;
class Class_2_208CC9941471731A_35;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4EBAA9372E57A380_METHOD_1_996B9749A311D0D4_OFFSET UNITYSDK_OFFSET(0x1A3DB310)
#define CLASS_1_4EBAA9372E57A380_METHOD_1_BDCF5E8865BEDF6E_OFFSET UNITYSDK_OFFSET(0x1A3DB220)
#define CLASS_1_4EBAA9372E57A380_METHOD_1_F9B57DBF3518EF48_OFFSET UNITYSDK_OFFSET(0x1A3DB860)
#define CLASS_1_4EBAA9372E57A380__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3DB190)

inline static constexpr unsigned int Class_1_4EBAA9372E57A380_TypeDefinitionIndex = 9229;

class Class_1_4EBAA9372E57A380 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_4EBAA9372E57A380_Class_1_04A718CFB2B0DB18*>* Field_1_1; // 0x10
	::Class_1_330B6218B3B9782B* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_35* Method_1_BDCF5E8865BEDF6E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_35*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_BDCF5E8865BEDF6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_996B9749A311D0D4(::Class_1_330B6218B3B9782B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_330B6218B3B9782B*))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_996B9749A311D0D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F9B57DBF3518EF48(::Class_1_330B6218B3B9782B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_330B6218B3B9782B*))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_F9B57DBF3518EF48_OFFSET))(this, a1);
	}
};
