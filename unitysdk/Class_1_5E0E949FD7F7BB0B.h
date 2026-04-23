#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1136;
class Class_1_634284739E90CAFA;
class Class_1_F557D8DF0E2B57A7;
class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_5E0E949FD7F7BB0B_METHOD_1_099C21CA35AAE6DE_OFFSET UNITYSDK_OFFSET(0xAFEA560)
#define CLASS_1_5E0E949FD7F7BB0B_METHOD_1_2CC086D996FFB016_OFFSET UNITYSDK_OFFSET(0xAFEB250)
#define CLASS_1_5E0E949FD7F7BB0B_METHOD_1_6F7A18E5270890F6_OFFSET UNITYSDK_OFFSET(0xAFEB490)
#define CLASS_1_5E0E949FD7F7BB0B_METHOD_1_8ED0522328FA0EF3_OFFSET UNITYSDK_OFFSET(0xAFEA860)
#define CLASS_1_5E0E949FD7F7BB0B_METHOD_1_8F43AAD54AF94971_OFFSET UNITYSDK_OFFSET(0xAFEADB0)
#define CLASS_1_5E0E949FD7F7BB0B_METHOD_1_EFA30E3AA3BBB035_OFFSET UNITYSDK_OFFSET(0xAFEAFA0)
#define CLASS_1_5E0E949FD7F7BB0B_METHOD_1_FE9136FE91B29A40_OFFSET UNITYSDK_OFFSET(0xAFEA770)
#define CLASS_1_5E0E949FD7F7BB0B__CTOR_OFFSET UNITYSDK_OFFSET(0xAFE9EF0)

inline static constexpr unsigned int Class_1_5E0E949FD7F7BB0B_TypeDefinitionIndex = 71300;

class Class_1_5E0E949FD7F7BB0B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingBattleBuffType, ::Class_0_16E4307DCC419505_1136*>* Field_1_2; // 0x10
	::Class_3_543326C044264182* Field_1_1; // 0x18
	::Class_2_E9C9AAD7C711B3E3* Field_1_0; // 0x20
	::Class_1_F557D8DF0E2B57A7* Field_1_3; // 0x28

	::System::Void _ctor(::Class_3_543326C044264182* a1, ::Class_2_E9C9AAD7C711B3E3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_099C21CA35AAE6DE(::Class_2_181A7F9409C60DBC* a1, ::Class_1_634284739E90CAFA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_1_634284739E90CAFA*))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B_METHOD_1_099C21CA35AAE6DE_OFFSET))(this, a1, a2);
	}

	::Class_1_634284739E90CAFA* Method_1_8ED0522328FA0EF3(::Class_2_181A7F9409C60DBC* a1, ::Class_1_634284739E90CAFA* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::Class_1_634284739E90CAFA*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_1_634284739E90CAFA*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B_METHOD_1_8ED0522328FA0EF3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8F43AAD54AF94971(::Class_2_181A7F9409C60DBC* a1, ::Class_1_634284739E90CAFA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_1_634284739E90CAFA*))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B_METHOD_1_8F43AAD54AF94971_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EFA30E3AA3BBB035(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleBuffType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B_METHOD_1_EFA30E3AA3BBB035_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2CC086D996FFB016(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleBuffType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B_METHOD_1_2CC086D996FFB016_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IList_1<::Class_1_634284739E90CAFA*>* Method_1_6F7A18E5270890F6(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleBuffType a2)
	{
		return ((::System::Collections::Generic::IList_1<::Class_1_634284739E90CAFA*>*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B_METHOD_1_6F7A18E5270890F6_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1136* Method_1_FE9136FE91B29A40(::RPG::GameCore::ChenLingBattleBuffType a1)
	{
		return ((::Class_0_16E4307DCC419505_1136*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B_METHOD_1_FE9136FE91B29A40_OFFSET))(this, a1);
	}
};
