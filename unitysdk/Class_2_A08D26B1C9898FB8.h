#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7991050093A784B6.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"

class Class_1_26684305CEECE64E;
class Class_1_3E663F02593BDAF0;
class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A08D26B1C9898FB8_METHOD_2_30A5A2871548A1F8_1_OFFSET UNITYSDK_OFFSET(0x17DDC540)
#define CLASS_2_A08D26B1C9898FB8_METHOD_2_30A5A2871548A1F8_OFFSET UNITYSDK_OFFSET(0x17DDC4D0)
#define CLASS_2_A08D26B1C9898FB8_METHOD_2_9CE62585340E1AD9_OFFSET UNITYSDK_OFFSET(0x17DDBE80)
#define CLASS_2_A08D26B1C9898FB8_METHOD_2_A10F916B18C7FCB1_1_OFFSET UNITYSDK_OFFSET(0x17DDC240)
#define CLASS_2_A08D26B1C9898FB8_METHOD_2_A10F916B18C7FCB1_OFFSET UNITYSDK_OFFSET(0x17DDBFB0)
#define CLASS_2_A08D26B1C9898FB8_METHOD_2_AE1F022B53A2E977_OFFSET UNITYSDK_OFFSET(0x17DDBF50)
#define CLASS_2_A08D26B1C9898FB8__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDBF20)

inline static constexpr unsigned int Class_2_A08D26B1C9898FB8_TypeDefinitionIndex = 34599;

class Class_2_A08D26B1C9898FB8 : public ::Class_1_7991050093A784B6
{
public:
	::Il2CppArray<::Class_1_26684305CEECE64E*>* Field_2_3; // 0x40
	::Class_1_3E663F02593BDAF0* Field_2_1; // 0x48
	::Il2CppArray<::Class_1_26684305CEECE64E*>* Field_2_2; // 0x50
	::Class_2_3ABA989E5AECB261* Field_2_0; // 0x58
	::Class_2_F3C45F1FC7349B6E* Field_2_4; // 0x60

	::System::Void _ctor(::Class_2_3ABA989E5AECB261* a1, ::RPG::GameCore::CakeRaceAoeShowType a2, ::Class_2_F3C45F1FC7349B6E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::RPG::GameCore::CakeRaceAoeShowType, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_A08D26B1C9898FB8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_A08D26B1C9898FB8* Method_2_9CE62585340E1AD9(::Class_2_3ABA989E5AECB261* a1, ::RPG::GameCore::CakeRaceAoeShowType a2, ::Class_2_F3C45F1FC7349B6E* a3)
	{
		return ((::Class_2_A08D26B1C9898FB8*(*)(::Class_2_3ABA989E5AECB261*, ::RPG::GameCore::CakeRaceAoeShowType, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_A08D26B1C9898FB8_METHOD_2_9CE62585340E1AD9_OFFSET))(a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_3ABA989E5AECB261*>* Method_2_AE1F022B53A2E977()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_3ABA989E5AECB261*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A08D26B1C9898FB8_METHOD_2_AE1F022B53A2E977_OFFSET))(this);
	}

	::System::Void Method_2_A10F916B18C7FCB1(::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>*))((::PBYTE)hIl2Cpp + CLASS_2_A08D26B1C9898FB8_METHOD_2_A10F916B18C7FCB1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A10F916B18C7FCB1_1(::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>*))((::PBYTE)hIl2Cpp + CLASS_2_A08D26B1C9898FB8_METHOD_2_A10F916B18C7FCB1_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_30A5A2871548A1F8(::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>*))((::PBYTE)hIl2Cpp + CLASS_2_A08D26B1C9898FB8_METHOD_2_30A5A2871548A1F8_OFFSET))(this, P0);
	}

	::System::Void Method_2_30A5A2871548A1F8_1(::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>*))((::PBYTE)hIl2Cpp + CLASS_2_A08D26B1C9898FB8_METHOD_2_30A5A2871548A1F8_1_OFFSET))(this, P0);
	}
};
