#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9DFEED9E47A49175.h"
#include "unitysdk/RPG/GameCore/AttackType.h"

class Class_1_DF472CB3F2039D5D;
class Class_3_795ECCED069014FF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_051430E9BBCE067D_OFFSET UNITYSDK_OFFSET(0xA53B7F0)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA53BAA0)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_68A897BB14FCBE65_OFFSET UNITYSDK_OFFSET(0xA53B550)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_695B2C8FB56C2CD1_OFFSET UNITYSDK_OFFSET(0xA53B3A0)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_CDAAA88825EA8FA3_OFFSET UNITYSDK_OFFSET(0xA53B740)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xA53B170)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_D8C8308F63396DDD_OFFSET UNITYSDK_OFFSET(0xA53B910)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0xA53B250)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xA53B0D0)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_FFF239BDEBAA6843_OFFSET UNITYSDK_OFFSET(0xA53B2E0)
#define CLASS_2_4D2D35656E2FF2AA__CTOR_OFFSET UNITYSDK_OFFSET(0xA53BA50)

inline static constexpr unsigned int Class_2_4D2D35656E2FF2AA_TypeDefinitionIndex = 50183;

class Class_2_4D2D35656E2FF2AA : public ::Class_1_9DFEED9E47A49175
{
public:
	::System::Collections::Generic::List_1<::Class_1_DF472CB3F2039D5D*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_DF472CB3F2039D5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DF472CB3F2039D5D*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E83C86A203FAF2A6(::Class_1_DF472CB3F2039D5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DF472CB3F2039D5D*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FFF239BDEBAA6843(::RPG::GameCore::AttackType a1, ::RPG::GameCore::AttackType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_FFF239BDEBAA6843_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_695B2C8FB56C2CD1(::RPG::GameCore::AttackType a1, ::Il2CppArray<::RPG::GameCore::AttackType>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackType, ::Il2CppArray<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_695B2C8FB56C2CD1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_68A897BB14FCBE65(::RPG::GameCore::AttackType a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_68A897BB14FCBE65_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_CDAAA88825EA8FA3(::Class_3_795ECCED069014FF* a1, ::RPG::GameCore::AttackType a2, ::RPG::GameCore::AttackType a3)
	{
		return ((::System::Boolean(*)(::Class_3_795ECCED069014FF*, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_CDAAA88825EA8FA3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_051430E9BBCE067D(::Class_3_795ECCED069014FF* a1, ::RPG::GameCore::AttackType a2, ::Il2CppArray<::RPG::GameCore::AttackType>* a3)
	{
		return ((::System::Boolean(*)(::Class_3_795ECCED069014FF*, ::RPG::GameCore::AttackType, ::Il2CppArray<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_051430E9BBCE067D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_D8C8308F63396DDD(::Class_3_795ECCED069014FF* a1, ::RPG::GameCore::AttackType a2, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackType>* a3)
	{
		return ((::System::Void(*)(::Class_3_795ECCED069014FF*, ::RPG::GameCore::AttackType, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_D8C8308F63396DDD_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
