#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Object.h"

class Class_2_D6FEE2A35B0F262A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_923BB6EA0D9B637B_CLASS_1_554DDEAB24F2D32F__CTOR_OFFSET UNITYSDK_OFFSET(0x132CB910)

inline static constexpr unsigned int Class_2_923BB6EA0D9B637B_Class_1_554DDEAB24F2D32F_TypeDefinitionIndex = 74933;

class Class_2_923BB6EA0D9B637B_Class_1_554DDEAB24F2D32F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_D6FEE2A35B0F262A*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_923BB6EA0D9B637B_CLASS_1_554DDEAB24F2D32F__CTOR_OFFSET))(this);
	}
};
