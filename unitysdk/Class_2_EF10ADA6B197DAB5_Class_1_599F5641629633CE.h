#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_176;
class Class_4_DA19DD65175B97CF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EF10ADA6B197DAB5_CLASS_1_599F5641629633CE__CTOR_OFFSET UNITYSDK_OFFSET(0xE8871D0)

inline static constexpr unsigned int Class_2_EF10ADA6B197DAB5_Class_1_599F5641629633CE_TypeDefinitionIndex = 58623;

class Class_2_EF10ADA6B197DAB5_Class_1_599F5641629633CE : public ::System::Object
{
public:
	::Class_4_DA19DD65175B97CF* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_176* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_CLASS_1_599F5641629633CE__CTOR_OFFSET))(this);
	}
};
