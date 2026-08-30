#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7991050093A784B6.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"

class Class_1_3E663F02593BDAF0;
class Class_1_E559374AC4E5AD13;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2EBAC67816CBA1E1_METHOD_2_0B0F6FAE19C973F5_OFFSET UNITYSDK_OFFSET(0x1C200780)
#define CLASS_2_2EBAC67816CBA1E1_METHOD_2_688DB5F38BD7D347_1_OFFSET UNITYSDK_OFFSET(0x1C200B90)
#define CLASS_2_2EBAC67816CBA1E1_METHOD_2_688DB5F38BD7D347_OFFSET UNITYSDK_OFFSET(0x1C200840)
#define CLASS_2_2EBAC67816CBA1E1_METHOD_2_9CE62585340E1AD9_OFFSET UNITYSDK_OFFSET(0x1C2006B0)
#define CLASS_2_2EBAC67816CBA1E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C200750)

inline static constexpr unsigned int Class_2_2EBAC67816CBA1E1_TypeDefinitionIndex = 36525;

class Class_2_2EBAC67816CBA1E1 : public ::Class_1_7991050093A784B6
{
public:
	::Class_1_3E663F02593BDAF0* LMDHPABCOAB; // 0x40
	::Class_2_F3C45F1FC7349B6E* PDENFEFCAGN; // 0x48
	::Il2CppArray<::Class_1_E559374AC4E5AD13*>* KHKJAJEHLHD; // 0x50
	::Class_2_21AD365C113DC484* MGBHEHNKOFO; // 0x58
	::Il2CppArray<::Class_1_E559374AC4E5AD13*>* CHEGKHGIOLL; // 0x60

	::System::Void _ctor(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceAoeShowType a2, ::Class_2_F3C45F1FC7349B6E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceAoeShowType, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_2EBAC67816CBA1E1* Method_2_9CE62585340E1AD9(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceAoeShowType a2, ::Class_2_F3C45F1FC7349B6E* a3)
	{
		return ((::Class_2_2EBAC67816CBA1E1*(*)(::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceAoeShowType, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1_METHOD_2_9CE62585340E1AD9_OFFSET))(a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_21AD365C113DC484*>* Method_2_0B0F6FAE19C973F5()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_21AD365C113DC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1_METHOD_2_0B0F6FAE19C973F5_OFFSET))(this);
	}

	::System::Void Method_2_688DB5F38BD7D347(::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>*))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1_METHOD_2_688DB5F38BD7D347_OFFSET))(this, a1);
	}

	::System::Void Method_2_688DB5F38BD7D347_1(::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>*))((::PBYTE)hIl2Cpp + CLASS_2_2EBAC67816CBA1E1_METHOD_2_688DB5F38BD7D347_1_OFFSET))(this, a1);
	}
};
