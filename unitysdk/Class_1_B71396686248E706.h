#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_2_0114679E2864BD47;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_B71396686248E706_METHOD_1_6AAB3D4DBB3B0A06_OFFSET UNITYSDK_OFFSET(0x14E4F990)
#define CLASS_1_B71396686248E706__CTOR_OFFSET UNITYSDK_OFFSET(0x14E4F890)

inline static constexpr unsigned int Class_1_B71396686248E706_TypeDefinitionIndex = 44345;

class Class_1_B71396686248E706 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowEntity* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_9; // 0x18
	::Class_2_0114679E2864BD47* Field_1_6; // 0x20
	::MoleMole::HollowChessboard::HollowEntity* Field_1_7; // 0x28
	::System::Boolean Field_1_10; // 0x30
	::System::Boolean Field_1_11; // 0x31
	::MoleMole::HollowChessboard::HollowCell Field_1_4; // 0x34
	::MoleMole::HollowChessboard::HollowCell Field_1_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71396686248E706__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_1_6AAB3D4DBB3B0A06()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71396686248E706_METHOD_1_6AAB3D4DBB3B0A06_OFFSET))(this);
	}
};
