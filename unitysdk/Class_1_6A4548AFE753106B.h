#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_243;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_6A4548AFE753106B_CLEAR_OFFSET UNITYSDK_OFFSET(0x168110F0)
#define CLASS_1_6A4548AFE753106B__CTOR_OFFSET UNITYSDK_OFFSET(0x168112A0)

inline static constexpr unsigned int Class_1_6A4548AFE753106B_TypeDefinitionIndex = 33662;

class Class_1_6A4548AFE753106B : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_0_16E4307DCC419505_243*>* Field_1_2; // 0x10
	::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean> Field_1_3; // 0x18
	::System::Boolean Field_1_1; // 0xA8
	::System::UInt32 Field_1_0; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A4548AFE753106B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A4548AFE753106B_CLEAR_OFFSET))(this);
	}
};
