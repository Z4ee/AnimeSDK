#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolvePeriodType.h"
#include "unitysdk/System/Object.h"

class Class_1_03DFC5F304B992FF;
class Class_1_3B8811FC98169DA6;
class Class_1_6E48A12B40FA04FD;
class Class_1_727381C54DC8F89E;
class Class_1_D2F71E01735EE2C6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B66FD2332404CEBB_METHOD_1_2D444D75288B6C4F_OFFSET UNITYSDK_OFFSET(0x10ABB320)
#define CLASS_1_B66FD2332404CEBB__CTOR_OFFSET UNITYSDK_OFFSET(0x10ABB600)

inline static constexpr unsigned int Class_1_B66FD2332404CEBB_TypeDefinitionIndex = 45144;

class Class_1_B66FD2332404CEBB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_727381C54DC8F89E*>* Field_1_10; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_727381C54DC8F89E*>* Field_1_11; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_14; // 0x28
	::Class_1_3B8811FC98169DA6* Field_1_26; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_15; // 0x38
	::Class_1_03DFC5F304B992FF* Field_1_27; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_13; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_16; // 0x50
	::System::Collections::Generic::List_1<::Class_1_D2F71E01735EE2C6*>* Field_1_12; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6E48A12B40FA04FD*>* Field_1_25; // 0x60
	::System::UInt32 Field_1_5; // 0x68
	::System::UInt32 Field_1_9; // 0x6C
	::System::UInt32 Field_1_0; // 0x70
	::System::UInt32 Field_1_4; // 0x74
	::System::UInt32 Field_1_17; // 0x78
	::System::UInt32 Field_1_24; // 0x7C
	::RPG::GameCore::EvolvePeriodType Field_1_1; // 0x80
	::System::UInt32 Field_1_6; // 0x84
	::System::UInt32 Field_1_8; // 0x88
	::System::Boolean Field_1_21; // 0x8C
	::System::Boolean Field_1_19; // 0x8D
	::System::UInt32 Field_1_18; // 0x90
	::System::UInt32 Field_1_3; // 0x94
	::System::UInt32 Field_1_7; // 0x98
	::System::Boolean Field_1_23; // 0x9C
	::System::Boolean Field_1_20; // 0x9D
	::System::Boolean Field_1_22; // 0x9E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B66FD2332404CEBB__CTOR_OFFSET))(this);
	}

	::Class_1_B66FD2332404CEBB* Method_1_2D444D75288B6C4F()
	{
		return ((::Class_1_B66FD2332404CEBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B66FD2332404CEBB_METHOD_1_2D444D75288B6C4F_OFFSET))(this);
	}
};
