#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_B9E8C2EEAA5C96EC;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_43BD383C98B4C0C5_35_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C92AD40)
#define CLASS_1_43BD383C98B4C0C5_35__CTOR_OFFSET UNITYSDK_OFFSET(0x1C92AE10)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_35_TypeDefinitionIndex = 43570;

class Class_1_43BD383C98B4C0C5_35 : public ::System::Object
{
public:
	::Class_2_B9E8C2EEAA5C96EC* OANLEPICPEA; // 0x10
	::Class_2_B9E8C2EEAA5C96EC* BHKEFIKOHFK; // 0x18
	::System::Action_1<::Class_2_B9E8C2EEAA5C96EC*>* KLDCLEOAJFD; // 0x20
	::RPG::PoolList_1<::Class_2_B9E8C2EEAA5C96EC*>* JJJNPLOLJGE; // 0x28
	::System::Action_1<::Class_2_B9E8C2EEAA5C96EC*>* MMKJLGLBDMI; // 0x30
	::RPG::PoolList_1<::Class_2_B9E8C2EEAA5C96EC*>* MNFCJNLHEJN; // 0x38
	::System::Action_1<::Class_2_B9E8C2EEAA5C96EC*>* BFDFDGGJCHJ; // 0x40
	::Class_2_B9E8C2EEAA5C96EC* OKPKEHBENDC; // 0x48
	::System::Boolean FONIBCIGOLE; // 0x50
	::System::UInt16 AHDAKOBKAIK; // 0x52
	::System::Single LONFDBHBLHG; // 0x54
	::System::Single ADHEDCEKLDD; // 0x58
	::UnityEngine::Vector2 MLLHDIABIDD; // 0x5C
	::System::Int32 OCMBIIIDMLL; // 0x64
	::System::Single DHBFEJHFGAJ; // 0x68
	::System::Int32 HFDEKKAIDBO; // 0x6C
	::System::Int32 DKKNALIFGPM; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_35__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_35_CLEAR_OFFSET))(this);
	}
};
