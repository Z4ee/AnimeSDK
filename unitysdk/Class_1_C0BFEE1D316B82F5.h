#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_34C03801479AC814.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_469;
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C0BFEE1D316B82F5_METHOD_1_B186592E7EC6FB80_1_OFFSET UNITYSDK_OFFSET(0x1293ABF0)
#define CLASS_1_C0BFEE1D316B82F5_METHOD_1_B186592E7EC6FB80_OFFSET UNITYSDK_OFFSET(0x1293AA70)
#define CLASS_1_C0BFEE1D316B82F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1293AB50)

inline static constexpr unsigned int Class_1_C0BFEE1D316B82F5_TypeDefinitionIndex = 51890;

class Class_1_C0BFEE1D316B82F5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>* Field_1_3; // 0x10
	::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* Field_1_4; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x24
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0BFEE1D316B82F5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_469* Method_1_B186592E7EC6FB80()
	{
		return ((::Class_0_16E4307DCC419505_469*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0BFEE1D316B82F5_METHOD_1_B186592E7EC6FB80_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_469* Method_1_B186592E7EC6FB80_1()
	{
		return ((::Class_0_16E4307DCC419505_469*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0BFEE1D316B82F5_METHOD_1_B186592E7EC6FB80_1_OFFSET))(this);
	}
};
