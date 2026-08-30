#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_B9E8C2EEAA5C96EC;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_43BD383C98B4C0C5_33_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3C9390)
#define CLASS_1_43BD383C98B4C0C5_33__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C9460)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_33_TypeDefinitionIndex = 41928;

class Class_1_43BD383C98B4C0C5_33 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_2_B9E8C2EEAA5C96EC*>* JJJNPLOLJGE; // 0x10
	::System::Action_1<::Class_2_B9E8C2EEAA5C96EC*>* KLDCLEOAJFD; // 0x18
	::RPG::PoolList_1<::Class_2_B9E8C2EEAA5C96EC*>* MNFCJNLHEJN; // 0x20
	::Class_2_B9E8C2EEAA5C96EC* BHKEFIKOHFK; // 0x28
	::Class_2_B9E8C2EEAA5C96EC* OKPKEHBENDC; // 0x30
	::Class_2_B9E8C2EEAA5C96EC* OANLEPICPEA; // 0x38
	::System::Action_1<::Class_2_B9E8C2EEAA5C96EC*>* MMKJLGLBDMI; // 0x40
	::System::Action_1<::Class_2_B9E8C2EEAA5C96EC*>* BFDFDGGJCHJ; // 0x48
	::System::Single LONFDBHBLHG; // 0x50
	::System::Single ADHEDCEKLDD; // 0x54
	::System::Int32 HFDEKKAIDBO; // 0x58
	::System::Single DHBFEJHFGAJ; // 0x5C
	::System::Int32 DKKNALIFGPM; // 0x60
	::System::Boolean FONIBCIGOLE; // 0x64
	::System::UInt16 AHDAKOBKAIK; // 0x66
	::UnityEngine::Vector2 MLLHDIABIDD; // 0x68
	::System::Int32 OCMBIIIDMLL; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_33__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_33_CLEAR_OFFSET))(this);
	}
};
