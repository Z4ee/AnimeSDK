#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6DE8726ADEF173A7_7;
class Class_1_945C969C6B974032;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LightningStrikeAreaConfig; }

#define CLASS_1_753802C34A8927F4_CLEAR_OFFSET UNITYSDK_OFFSET(0x15A68690)
#define CLASS_1_753802C34A8927F4__CTOR_OFFSET UNITYSDK_OFFSET(0x15A688D0)

inline static constexpr unsigned int Class_1_753802C34A8927F4_TypeDefinitionIndex = 53759;

class Class_1_753802C34A8927F4 : public ::System::Object
{
public:
	::RPG::GameCore::LightningStrikeAreaConfig* EABKOHGCHFP; // 0x10
	::RPG::PoolList_1<::Class_1_945C969C6B974032*>* BHCFEGGELJF; // 0x18
	::RPG::PoolList_1<::Class_1_6DE8726ADEF173A7_7*>* FEADGLLKKOL; // 0x20
	::System::UInt32 BFNHBJAGMJK; // 0x28
	::System::Single MMGCACMNDMP; // 0x2C
	::System::UInt32 ECODFMEBEDK; // 0x30
	::System::Boolean CAGCHKJHMPD; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_753802C34A8927F4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_753802C34A8927F4_CLEAR_OFFSET))(this);
	}
};
