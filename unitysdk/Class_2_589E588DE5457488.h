#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_82F5C77DD4957B13.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_91B9F1504236E74F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_589E588DE5457488__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD13D0)

inline static constexpr unsigned int Class_2_589E588DE5457488_TypeDefinitionIndex = 53123;

class Class_2_589E588DE5457488 : public ::Class_1_82F5C77DD4957B13
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* Field_2_12; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* Field_2_10; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_91B9F1504236E74F*>* Field_2_14; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* Field_2_11; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Field_2_13; // 0x40
	::RPG::GameCore::FixPoint Field_2_3; // 0x48
	::System::Int32 Field_2_9; // 0x50
	::System::Int32 Field_2_8; // 0x54
	::RPG::GameCore::FixPoint Field_2_2; // 0x58
	::RPG::GameCore::FixPoint Field_2_6; // 0x60
	::System::Int32 Field_2_4; // 0x68
	::System::Int32 Field_2_1; // 0x6C
	::RPG::GameCore::FixPoint Field_2_5; // 0x70
	::RPG::GameCore::FixPoint Field_2_7; // 0x78
	::RPG::GameCore::FixPoint Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_589E588DE5457488__CTOR_OFFSET))(this);
	}
};
