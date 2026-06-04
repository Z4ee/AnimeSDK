#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/RPG/GameCore/AttackType.h"

class Class_1_DF472CB3F2039D5D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_827A4A36D36DE125_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xACA6290)
#define CLASS_2_827A4A36D36DE125_METHOD_2_72F5404DF61BA20B_OFFSET UNITYSDK_OFFSET(0xACA5EA0)
#define CLASS_2_827A4A36D36DE125_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0xACA59A0)
#define CLASS_2_827A4A36D36DE125_METHOD_2_C4421F13DAD2B22B_OFFSET UNITYSDK_OFFSET(0xACA5C50)
#define CLASS_2_827A4A36D36DE125__CTOR_OFFSET UNITYSDK_OFFSET(0xACA6240)

inline static constexpr unsigned int Class_2_827A4A36D36DE125_TypeDefinitionIndex = 50209;

class Class_2_827A4A36D36DE125 : public ::Class_1_8A0BE42C657CE107
{
public:
	::System::Collections::Generic::List_1<::Class_1_DF472CB3F2039D5D*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_827A4A36D36DE125__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_827A4A36D36DE125_METHOD_2_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_2_C4421F13DAD2B22B(::RPG::GameCore::AttackType a1, ::RPG::GameCore::AttackType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_827A4A36D36DE125_METHOD_2_C4421F13DAD2B22B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_72F5404DF61BA20B(::RPG::GameCore::AttackType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_827A4A36D36DE125_METHOD_2_72F5404DF61BA20B_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_827A4A36D36DE125_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
