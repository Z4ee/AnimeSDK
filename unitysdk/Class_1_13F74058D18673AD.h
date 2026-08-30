#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

class Class_1_961B0CA014B1FC95;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_13F74058D18673AD__CTOR_OFFSET UNITYSDK_OFFSET(0xBC81100)

inline static constexpr unsigned int Class_1_13F74058D18673AD_TypeDefinitionIndex = 80674;

class Class_1_13F74058D18673AD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::UInt32>* LJOLMNOBPCG; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Il2CppArray<::Class_1_961B0CA014B1FC95*>*>* AMCAMCIAIHJ; // 0x18
	::RPG::GameCore::B51RacingPartType HBADGMPANOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13F74058D18673AD__CTOR_OFFSET))(this);
	}
};
