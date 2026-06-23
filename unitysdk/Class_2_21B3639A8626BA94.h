#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_61B3BCD70D19C820.h"

class Class_1_0D6706375CDAAE8C;
class Class_3_FF05634111641DF3_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_21B3639A8626BA94_METHOD_2_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x10E3E700)
#define CLASS_2_21B3639A8626BA94_METHOD_2_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x10E3E710)
#define CLASS_2_21B3639A8626BA94__CTOR_OFFSET UNITYSDK_OFFSET(0x10E3E6F0)

inline static constexpr unsigned int Class_2_21B3639A8626BA94_TypeDefinitionIndex = 47317;

class Class_2_21B3639A8626BA94 : public ::Class_1_61B3BCD70D19C820
{
public:
	::Class_3_FF05634111641DF3_1* Field_2_0; // 0x28

	::System::Void _ctor(::Class_3_FF05634111641DF3_1* a1, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FF05634111641DF3_1*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_21B3639A8626BA94__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A0042105686D97E8(::Class_3_FF05634111641DF3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FF05634111641DF3_1*))((::PBYTE)hIl2Cpp + CLASS_2_21B3639A8626BA94_METHOD_2_A0042105686D97E8_OFFSET))(this, a1);
	}

	::Class_3_FF05634111641DF3_1* Method_2_F239777256F9BA8F()
	{
		return ((::Class_3_FF05634111641DF3_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21B3639A8626BA94_METHOD_2_F239777256F9BA8F_OFFSET))(this);
	}
};
