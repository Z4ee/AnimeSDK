#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_A85DD0CF7A2118D1.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
class Class_5_DCFF91E03A93C03C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_D92F94D35A34A019_METHOD_1_F5F251F87BE1EDDC_OFFSET UNITYSDK_OFFSET(0x17F50CB0)
#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_D92F94D35A34A019__CTOR_OFFSET UNITYSDK_OFFSET(0x17F50410)

inline static constexpr unsigned int Class_5_78B1EAE4D1A36E33_Class_1_D92F94D35A34A019_TypeDefinitionIndex = 58073;

class Class_5_78B1EAE4D1A36E33_Class_1_D92F94D35A34A019 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_A85DD0CF7A2118D1>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_1; // 0x18
	::Class_5_DCFF91E03A93C03C* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_D92F94D35A34A019__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F5F251F87BE1EDDC(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_D92F94D35A34A019_METHOD_1_F5F251F87BE1EDDC_OFFSET))(this, a1);
	}
};
