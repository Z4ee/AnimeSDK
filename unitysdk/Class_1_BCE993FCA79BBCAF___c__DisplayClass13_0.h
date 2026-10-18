#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftEffectType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_113;
class Class_1_52E21E813AA435A9;
class Class_1_59F064CC78086962;
class Class_1_BCE993FCA79BBCAF;
template <typename T1, typename T2> class __f__AnonymousType1_2;
template <typename T1, typename T2> class __f__AnonymousType2_2;
template <typename T1, typename T2> class __f__AnonymousType3_2;

#define CLASS_1_BCE993FCA79BBCAF___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5728F0)
#define CLASS_1_BCE993FCA79BBCAF___C__DISPLAYCLASS13_0___ITERATESORTEDACTIVETALENTEFFECTSOFTYPE_B__6_OFFSET UNITYSDK_OFFSET(0x1C572BD0)
#define CLASS_1_BCE993FCA79BBCAF___C__DISPLAYCLASS13_0___ITERATESORTEDACTIVETALENTEFFECTSOFTYPE_B__7_OFFSET UNITYSDK_OFFSET(0x1C572C90)

inline static constexpr unsigned int Class_1_BCE993FCA79BBCAF___c__DisplayClass13_0_TypeDefinitionIndex = 41880;

class Class_1_BCE993FCA79BBCAF___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_BCE993FCA79BBCAF* __4__this; // 0x10
	::RPG::Client::MechCraft::MechCraftEffectType type; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::__f__AnonymousType3_2<::__f__AnonymousType2_2<::__f__AnonymousType1_2<::Class_1_52E21E813AA435A9*, ::Class_1_59F064CC78086962*>*, ::System::UInt32>*, ::Class_0_16E4307DCC419505_113*>* __IterateSortedActiveTalentEffectsOfType_b__6(::__f__AnonymousType2_2<::__f__AnonymousType1_2<::Class_1_52E21E813AA435A9*, ::Class_1_59F064CC78086962*>*, ::System::UInt32>* a1)
	{
		return ((::__f__AnonymousType3_2<::__f__AnonymousType2_2<::__f__AnonymousType1_2<::Class_1_52E21E813AA435A9*, ::Class_1_59F064CC78086962*>*, ::System::UInt32>*, ::Class_0_16E4307DCC419505_113*>*(*)(::PVOID, ::__f__AnonymousType2_2<::__f__AnonymousType1_2<::Class_1_52E21E813AA435A9*, ::Class_1_59F064CC78086962*>*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF___C__DISPLAYCLASS13_0___ITERATESORTEDACTIVETALENTEFFECTSOFTYPE_B__6_OFFSET))(this, a1);
	}

	::System::Boolean __IterateSortedActiveTalentEffectsOfType_b__7(::__f__AnonymousType3_2<::__f__AnonymousType2_2<::__f__AnonymousType1_2<::Class_1_52E21E813AA435A9*, ::Class_1_59F064CC78086962*>*, ::System::UInt32>*, ::Class_0_16E4307DCC419505_113*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType3_2<::__f__AnonymousType2_2<::__f__AnonymousType1_2<::Class_1_52E21E813AA435A9*, ::Class_1_59F064CC78086962*>*, ::System::UInt32>*, ::Class_0_16E4307DCC419505_113*>*))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF___C__DISPLAYCLASS13_0___ITERATESORTEDACTIVETALENTEFFECTSOFTYPE_B__7_OFFSET))(this, a1);
	}
};
