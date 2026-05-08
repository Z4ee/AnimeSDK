#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC22F13312585645.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_916778923E38503B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1590FE40)
#define CLASS_1_916778923E38503B_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x15910090)
#define CLASS_1_916778923E38503B_METHOD_1_24B2CA816EFA1FA5_OFFSET UNITYSDK_OFFSET(0x159109C0)
#define CLASS_1_916778923E38503B_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x15910720)
#define CLASS_1_916778923E38503B_METHOD_1_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x15910C20)
#define CLASS_1_916778923E38503B_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x159106B0)
#define CLASS_1_916778923E38503B_METHOD_1_455E250D679F9642_1_OFFSET UNITYSDK_OFFSET(0x15910B00)
#define CLASS_1_916778923E38503B_METHOD_1_455E250D679F9642_2_OFFSET UNITYSDK_OFFSET(0x1590FFA0)
#define CLASS_1_916778923E38503B_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x15910A70)
#define CLASS_1_916778923E38503B_METHOD_1_4EDA4DE9A4097695_OFFSET UNITYSDK_OFFSET(0x159107B0)
#define CLASS_1_916778923E38503B_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x15910080)
#define CLASS_1_916778923E38503B_METHOD_1_5E9906D613ECF25F_OFFSET UNITYSDK_OFFSET(0x15910330)
#define CLASS_1_916778923E38503B_METHOD_1_77984DE08FE49DAE_OFFSET UNITYSDK_OFFSET(0x15910540)
#define CLASS_1_916778923E38503B_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x15910790)
#define CLASS_1_916778923E38503B_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x15910A60)
#define CLASS_1_916778923E38503B_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15910AC0)
#define CLASS_1_916778923E38503B_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x15910B50)
#define CLASS_1_916778923E38503B_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x15910B90)
#define CLASS_1_916778923E38503B_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x15910BD0)
#define CLASS_1_916778923E38503B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1590FFF0)
#define CLASS_1_916778923E38503B_METHOD_1_DA7D5FED1E10712C_OFFSET UNITYSDK_OFFSET(0x159100F0)
#define CLASS_1_916778923E38503B_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x159107A0)
#define CLASS_1_916778923E38503B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15910C10)
#define CLASS_1_916778923E38503B_METHOD_1_F5C37AB16571BB1A_OFFSET UNITYSDK_OFFSET(0x159102C0)
#define CLASS_1_916778923E38503B__CCTOR_OFFSET UNITYSDK_OFFSET(0x15910070)
#define CLASS_1_916778923E38503B__CTOR_OFFSET UNITYSDK_OFFSET(0x15910060)

inline static constexpr unsigned int Class_1_916778923E38503B_TypeDefinitionIndex = 72126;

class Class_1_916778923E38503B : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_22()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_916778923E38503B_TypeDefinitionIndex)->GetStaticField(0x101F0);
	}
	::MoleMole::Config::CharacterFadeDitheringDataV2 Field_1_6; // 0x10
	::System::Action* Field_1_20; // 0x38
	::System::String* Field_1_4; // 0x40
	::System::Action_1<::System::UInt32>* Field_1_19; // 0x48
	::UnityEngine::AnimationCurve* Field_1_8; // 0x50
	::UnityEngine::AnimationCurve* Field_1_7; // 0x58
	::System::String* Field_1_2; // 0x60
	::Enum_3_CC22F13312585645 Field_1_9; // 0x68
	::System::Single Field_1_13; // 0x6C
	::System::UInt32 Field_1_21; // 0x70
	::System::Single Field_1_15; // 0x74
	::System::Int32 Field_1_3; // 0x78
	::System::Single Field_1_0; // 0x7C
	::System::Boolean Field_1_11; // 0x80
	::System::Boolean Field_1_12; // 0x81
	::System::Single Field_1_17; // 0x84
	::System::UInt32 Field_1_5; // 0x88
	::System::Single Field_1_18; // 0x8C
	::System::Single Field_1_10; // 0x90
	::System::Single Field_1_14; // 0x94
	::System::Single Field_1_1; // 0x98
	::System::Single Field_1_16; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5C37AB16571BB1A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_F5C37AB16571BB1A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::Enum_3_CC22F13312585645 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_CC22F13312585645(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_4EDA4DE9A4097695(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::MoleMole::Config::CharacterFadeDitheringDataV2 a4, ::MoleMole::Battle::Entity* a5, ::System::Action_1<::System::UInt32>* a6, ::System::Action* a7, ::System::UInt32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::MoleMole::Config::CharacterFadeDitheringDataV2, ::MoleMole::Battle::Entity*, ::System::Action_1<::System::UInt32>*, ::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_4EDA4DE9A4097695_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_24B2CA816EFA1FA5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_24B2CA816EFA1FA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_1_DA7D5FED1E10712C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_DA7D5FED1E10712C_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_455E250D679F9642_1_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_455E250D679F9642_2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_77984DE08FE49DAE(::Enum_3_CC22F13312585645 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CC22F13312585645))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_77984DE08FE49DAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_5E9906D613ECF25F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_5E9906D613ECF25F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_2685B6183E614529_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916778923E38503B_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}
};
