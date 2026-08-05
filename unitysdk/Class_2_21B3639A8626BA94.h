#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_61B3BCD70D19C820.h"

class Class_1_0D6706375CDAAE8C;
class Class_3_2D7E6611DB92A92F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_21B3639A8626BA94_METHOD_2_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x17765FF0)
#define CLASS_2_21B3639A8626BA94_METHOD_2_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x17765FE0)
#define CLASS_2_21B3639A8626BA94__CTOR_OFFSET UNITYSDK_OFFSET(0x17765FD0)

inline static constexpr unsigned int Class_2_21B3639A8626BA94_TypeDefinitionIndex = 84903;

class Class_2_21B3639A8626BA94 : public ::Class_1_61B3BCD70D19C820
{
public:
	::Class_3_2D7E6611DB92A92F* Field_2_0; // 0x28

	::System::Void _ctor(::Class_3_2D7E6611DB92A92F* a1, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_2D7E6611DB92A92F*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_21B3639A8626BA94__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_3_2D7E6611DB92A92F* Method_2_F239777256F9BA8F()
	{
		return ((::Class_3_2D7E6611DB92A92F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21B3639A8626BA94_METHOD_2_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Void Method_2_A0042105686D97E8(::Class_3_2D7E6611DB92A92F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_2D7E6611DB92A92F*))((::PBYTE)hIl2Cpp + CLASS_2_21B3639A8626BA94_METHOD_2_A0042105686D97E8_OFFSET))(this, a1);
	}
};
