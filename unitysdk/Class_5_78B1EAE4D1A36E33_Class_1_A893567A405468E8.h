#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_A85DD0CF7A2118D1.h"
#include "unitysdk/System/Object.h"

class Class_1_229DBE8532954410;
class Class_5_A6F8D19602712D95;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_A893567A405468E8_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17F50A20)
#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_A893567A405468E8_METHOD_1_B238CE6261F18051_OFFSET UNITYSDK_OFFSET(0x17F50A90)
#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_A893567A405468E8__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4AF40)

inline static constexpr unsigned int Class_5_78B1EAE4D1A36E33_Class_1_A893567A405468E8_TypeDefinitionIndex = 58072;

class Class_5_78B1EAE4D1A36E33_Class_1_A893567A405468E8 : public ::System::Object
{
public:
	::Class_1_229DBE8532954410* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_A85DD0CF7A2118D1>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_A893567A405468E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_A893567A405468E8_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_B238CE6261F18051(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_A893567A405468E8_METHOD_1_B238CE6261F18051_OFFSET))(this, a1);
	}
};
