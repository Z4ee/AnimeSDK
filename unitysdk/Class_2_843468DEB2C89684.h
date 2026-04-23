#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA5232D6CAD71030.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_895EBA3389065493;
class Class_2_1BB8CA1042AACD99;
class Class_4_38B51614211CBC7D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_843468DEB2C89684_METHOD_2_3129BF8E58CCD3BD_OFFSET UNITYSDK_OFFSET(0x17C0A040)
#define CLASS_2_843468DEB2C89684_METHOD_2_69607B7E4783C654_OFFSET UNITYSDK_OFFSET(0x17C0A230)
#define CLASS_2_843468DEB2C89684_METHOD_2_82A2A4F312B7307A_OFFSET UNITYSDK_OFFSET(0x17C0A290)
#define CLASS_2_843468DEB2C89684_METHOD_2_BA1A2F41DF2039F5_OFFSET UNITYSDK_OFFSET(0x17BDB0E0)
#define CLASS_2_843468DEB2C89684_METHOD_2_E95EAF08D2605EEC_OFFSET UNITYSDK_OFFSET(0x17C0A490)
#define CLASS_2_843468DEB2C89684__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C0A3A0)
#define CLASS_2_843468DEB2C89684__CTOR_OFFSET UNITYSDK_OFFSET(0x17C09FC0)

inline static constexpr unsigned int Class_2_843468DEB2C89684_TypeDefinitionIndex = 34067;

class Class_2_843468DEB2C89684 : public ::Class_1_EA5232D6CAD71030
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_2_0()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_2_843468DEB2C89684_TypeDefinitionIndex)->GetStaticField(0x11940);
	}
	::Class_4_38B51614211CBC7D* Field_2_1; // 0x38
	::Class_1_895EBA3389065493* Field_2_2; // 0x40

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_1BB8CA1042AACD99* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_1BB8CA1042AACD99*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_843468DEB2C89684__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_843468DEB2C89684__CCTOR_OFFSET))();
	}

	::Class_2_1BB8CA1042AACD99* Method_2_BA1A2F41DF2039F5(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_1BB8CA1042AACD99*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_843468DEB2C89684_METHOD_2_BA1A2F41DF2039F5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_1BB8CA1042AACD99*>* Method_2_3129BF8E58CCD3BD(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1BB8CA1042AACD99*>*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_843468DEB2C89684_METHOD_2_3129BF8E58CCD3BD_OFFSET))(this, a1);
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
