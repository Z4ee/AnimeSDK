#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B1A7D8EBAB39D13D.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_895EBA3389065493;
class Class_2_569DE47525C5FD32;
class Class_4_25476C0ECCF1BB17;

#define CLASS_2_843468DEB2C89684_METHOD_2_69607B7E4783C654_OFFSET UNITYSDK_OFFSET(0x166C9020)
#define CLASS_2_843468DEB2C89684_METHOD_2_82A2A4F312B7307A_OFFSET UNITYSDK_OFFSET(0x166C9080)
#define CLASS_2_843468DEB2C89684_METHOD_2_A5E6D914A33599E4_OFFSET UNITYSDK_OFFSET(0x166C8EF0)
#define CLASS_2_843468DEB2C89684_METHOD_2_E95EAF08D2605EEC_OFFSET UNITYSDK_OFFSET(0x166C9280)
#define CLASS_2_843468DEB2C89684__CCTOR_OFFSET UNITYSDK_OFFSET(0x166C9190)
#define CLASS_2_843468DEB2C89684__CTOR_OFFSET UNITYSDK_OFFSET(0x166C8E70)

inline static constexpr unsigned int Class_2_843468DEB2C89684_TypeDefinitionIndex = 28403;

class Class_2_843468DEB2C89684 : public ::Class_1_B1A7D8EBAB39D13D
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_2_0()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_2_843468DEB2C89684_TypeDefinitionIndex)->GetStaticField(0xE900);
	}
	::Class_4_25476C0ECCF1BB17* Field_2_1; // 0x30
	::Class_1_895EBA3389065493* Field_2_2; // 0x38

	::System::Void _ctor(::Class_4_25476C0ECCF1BB17* a1, ::Class_2_569DE47525C5FD32* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_25476C0ECCF1BB17*, ::Class_2_569DE47525C5FD32*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_843468DEB2C89684__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_843468DEB2C89684__CCTOR_OFFSET))();
	}

	::Class_2_569DE47525C5FD32* Method_2_A5E6D914A33599E4(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_569DE47525C5FD32*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_843468DEB2C89684_METHOD_2_A5E6D914A33599E4_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_69607B7E4783C654()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_843468DEB2C89684_METHOD_2_69607B7E4783C654_OFFSET))(this);
	}

	::System::Boolean Method_2_82A2A4F312B7307A(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_843468DEB2C89684_METHOD_2_82A2A4F312B7307A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E95EAF08D2605EEC(::RPG::GameCore::StringHash P0, ::RPG::GameCore::FixPoint& P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_843468DEB2C89684_METHOD_2_E95EAF08D2605EEC_OFFSET))(this, P0, P1);
	}
};
