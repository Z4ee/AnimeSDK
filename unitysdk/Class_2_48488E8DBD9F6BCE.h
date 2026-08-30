#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D8BECDCE48063EC7.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_ED78E2C86A4B45C0;
class Class_2_AEE59ED8DADEC1A1;
class Class_4_38B51614211CBC7D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_48488E8DBD9F6BCE_METHOD_2_18CA3767827515DE_OFFSET UNITYSDK_OFFSET(0x1A582320)
#define CLASS_2_48488E8DBD9F6BCE_METHOD_2_69607B7E4783C654_OFFSET UNITYSDK_OFFSET(0x1A582560)
#define CLASS_2_48488E8DBD9F6BCE_METHOD_2_82A2A4F312B7307A_OFFSET UNITYSDK_OFFSET(0x1A5825E0)
#define CLASS_2_48488E8DBD9F6BCE_METHOD_2_BA1A2F41DF2039F5_OFFSET UNITYSDK_OFFSET(0x1A581D90)
#define CLASS_2_48488E8DBD9F6BCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A582730)
#define CLASS_2_48488E8DBD9F6BCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A581C40)

inline static constexpr unsigned int Class_2_48488E8DBD9F6BCE_TypeDefinitionIndex = 35592;

class Class_2_48488E8DBD9F6BCE : public ::Class_1_D8BECDCE48063EC7
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_CHHAAANMKKB()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_2_48488E8DBD9F6BCE_TypeDefinitionIndex)->GetStaticField(0x1760);
	}
	::Class_1_ED78E2C86A4B45C0* EAEJGPLLGMI; // 0x38
	::Class_4_38B51614211CBC7D* NPJFFHDPPMO; // 0x40

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_AEE59ED8DADEC1A1*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_48488E8DBD9F6BCE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_48488E8DBD9F6BCE__CCTOR_OFFSET))();
	}

	::Class_2_AEE59ED8DADEC1A1* Method_2_BA1A2F41DF2039F5(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_AEE59ED8DADEC1A1*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_48488E8DBD9F6BCE_METHOD_2_BA1A2F41DF2039F5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>* Method_2_18CA3767827515DE(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_48488E8DBD9F6BCE_METHOD_2_18CA3767827515DE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_69607B7E4783C654()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48488E8DBD9F6BCE_METHOD_2_69607B7E4783C654_OFFSET))(this);
	}

	::System::Boolean Method_2_82A2A4F312B7307A(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_48488E8DBD9F6BCE_METHOD_2_82A2A4F312B7307A_OFFSET))(this, a1, a2);
	}
};
