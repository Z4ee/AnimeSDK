#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/SpecialEffectRoleType.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_08B34D65A9FCAAE5_METHOD_1_51C813E46F35BD4A_OFFSET UNITYSDK_OFFSET(0xFF47760)
#define CLASS_1_08B34D65A9FCAAE5_METHOD_1_82E3DC7DB248E610_OFFSET UNITYSDK_OFFSET(0xFF477F0)
#define CLASS_1_08B34D65A9FCAAE5_METHOD_1_FE0A26B83792CDDD_OFFSET UNITYSDK_OFFSET(0xFF478B0)
#define CLASS_1_08B34D65A9FCAAE5__CTOR_OFFSET UNITYSDK_OFFSET(0xFF476D0)

inline static constexpr unsigned int Class_1_08B34D65A9FCAAE5_TypeDefinitionIndex = 82859;

class Class_1_08B34D65A9FCAAE5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::SpecialEffectRoleType, ::Class_1_945ACFB1FEBC7A2C_3*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08B34D65A9FCAAE5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_51C813E46F35BD4A(::MoleMole::HollowChessboard::SpecialEffectRoleType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SpecialEffectRoleType))((::PBYTE)hIl2Cpp + CLASS_1_08B34D65A9FCAAE5_METHOD_1_51C813E46F35BD4A_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E3DC7DB248E610(::MoleMole::HollowChessboard::SpecialEffectRoleType a1, ::Class_1_945ACFB1FEBC7A2C_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SpecialEffectRoleType, ::Class_1_945ACFB1FEBC7A2C_3*))((::PBYTE)hIl2Cpp + CLASS_1_08B34D65A9FCAAE5_METHOD_1_82E3DC7DB248E610_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FE0A26B83792CDDD(::MoleMole::HollowChessboard::SpecialEffectRoleType a1, ::Class_1_945ACFB1FEBC7A2C_3*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::SpecialEffectRoleType, ::Class_1_945ACFB1FEBC7A2C_3*&))((::PBYTE)hIl2Cpp + CLASS_1_08B34D65A9FCAAE5_METHOD_1_FE0A26B83792CDDD_OFFSET))(this, a1, a2);
	}
};
