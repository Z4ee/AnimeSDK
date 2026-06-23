#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/SpecialEffectRoleType.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_08B34D65A9FCAAE5_METHOD_1_51C813E46F35BD4A_OFFSET UNITYSDK_OFFSET(0x13BAA3E0)
#define CLASS_1_08B34D65A9FCAAE5_METHOD_1_82E3DC7DB248E610_OFFSET UNITYSDK_OFFSET(0x13BAA470)
#define CLASS_1_08B34D65A9FCAAE5_METHOD_1_FE0A26B83792CDDD_OFFSET UNITYSDK_OFFSET(0x13BAA2C0)
#define CLASS_1_08B34D65A9FCAAE5__CTOR_OFFSET UNITYSDK_OFFSET(0x13BAA230)

inline static constexpr unsigned int Class_1_08B34D65A9FCAAE5_TypeDefinitionIndex = 67385;

class Class_1_08B34D65A9FCAAE5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::SpecialEffectRoleType, ::Class_1_945ACFB1FEBC7A2C_7*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08B34D65A9FCAAE5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_FE0A26B83792CDDD(::MoleMole::HollowChessboard::SpecialEffectRoleType a1, ::Class_1_945ACFB1FEBC7A2C_7*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::SpecialEffectRoleType, ::Class_1_945ACFB1FEBC7A2C_7*&))((::PBYTE)hIl2Cpp + CLASS_1_08B34D65A9FCAAE5_METHOD_1_FE0A26B83792CDDD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51C813E46F35BD4A(::MoleMole::HollowChessboard::SpecialEffectRoleType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SpecialEffectRoleType))((::PBYTE)hIl2Cpp + CLASS_1_08B34D65A9FCAAE5_METHOD_1_51C813E46F35BD4A_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E3DC7DB248E610(::MoleMole::HollowChessboard::SpecialEffectRoleType a1, ::Class_1_945ACFB1FEBC7A2C_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SpecialEffectRoleType, ::Class_1_945ACFB1FEBC7A2C_7*))((::PBYTE)hIl2Cpp + CLASS_1_08B34D65A9FCAAE5_METHOD_1_82E3DC7DB248E610_OFFSET))(this, a1, a2);
	}
};
