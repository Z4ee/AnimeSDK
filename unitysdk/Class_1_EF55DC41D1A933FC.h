#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_57DC80FD7B2B919F.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/Struct_2_0EA61705E6C719A1.h"
#include "unitysdk/Struct_2_2B6FA625C20F556D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1487A3F820CB8361;
class Class_1_1CDA382D823F8E80;
class Class_1_55FB143FAD52FF89;
class Class_1_EA1FEF8121ADE963;
class Class_2_013DB5EBD89922B2;
class Class_2_9329E687B3EB29E0_1;
class Class_2_F6579EDC26D1BFF1;
class Class_3_61318B8F3165489C;
class Class_3_98C806684F7CC372_4;
class Class_3_E85F004AD455EAA0;
class Class_3_F25445702F7D8455;
class Class_3_F41D242A20F8FE06;
class Class_3_F97B015544BE936B;
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigAttackActiveFrameDynamicProp; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EF55DC41D1A933FC_METHOD_1_07FA5311A21363BC_OFFSET UNITYSDK_OFFSET(0x13241A80)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_09DA5ED950396F79_1_OFFSET UNITYSDK_OFFSET(0x1323B3B0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_09DA5ED950396F79_OFFSET UNITYSDK_OFFSET(0x1323B1C0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_1_OFFSET UNITYSDK_OFFSET(0x13238450)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_2_OFFSET UNITYSDK_OFFSET(0x13241D70)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_3_OFFSET UNITYSDK_OFFSET(0x132402B0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_OFFSET UNITYSDK_OFFSET(0x132383C0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_1_OFFSET UNITYSDK_OFFSET(0x1323AD60)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_2_OFFSET UNITYSDK_OFFSET(0x1323B0B0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_3_OFFSET UNITYSDK_OFFSET(0x13241E00)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_OFFSET UNITYSDK_OFFSET(0x132381C0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0D011244ED0E3A69_OFFSET UNITYSDK_OFFSET(0x13241BC0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_0D1EEED0116AE65A_OFFSET UNITYSDK_OFFSET(0x1323B840)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_14BA803570D5318A_OFFSET UNITYSDK_OFFSET(0x13240F60)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_2061B8D48CB2A59E_OFFSET UNITYSDK_OFFSET(0x1323AC20)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_28FC3681795BD87F_OFFSET UNITYSDK_OFFSET(0x132401D0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_38E9DF23C32D38CD_OFFSET UNITYSDK_OFFSET(0x13241B40)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_391E583FCD358D55_OFFSET UNITYSDK_OFFSET(0x13237CB0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_3F24DD29F13CF97A_OFFSET UNITYSDK_OFFSET(0x13237B40)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_450A5338099E7516_OFFSET UNITYSDK_OFFSET(0x13241AE0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_45F25BAC21D2CA9C_1_OFFSET UNITYSDK_OFFSET(0x1323ADD0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_45F25BAC21D2CA9C_OFFSET UNITYSDK_OFFSET(0x13238230)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_46C99CF4A5866072_OFFSET UNITYSDK_OFFSET(0x13237BB0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_48AAF5DE1FAB3338_OFFSET UNITYSDK_OFFSET(0x1323ECD0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_4E1A41DD99A098BA_OFFSET UNITYSDK_OFFSET(0x13241E70)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_54DD4FAD47BAA0FA_OFFSET UNITYSDK_OFFSET(0x1323B2C0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_574E978F212BDA80_1_OFFSET UNITYSDK_OFFSET(0x1323B240)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_574E978F212BDA80_OFFSET UNITYSDK_OFFSET(0x13238140)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_5CB4651F3D5EBF22_1_OFFSET UNITYSDK_OFFSET(0x13241C20)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_5CB4651F3D5EBF22_OFFSET UNITYSDK_OFFSET(0x1323AF60)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_640BBBFEAF45D251_OFFSET UNITYSDK_OFFSET(0x1323E800)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_679ED564F392040E_OFFSET UNITYSDK_OFFSET(0x13240C50)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_68F0B74C711E5235_OFFSET UNITYSDK_OFFSET(0x1323E0C0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_6C2C0C3F7824A2E4_OFFSET UNITYSDK_OFFSET(0x13240340)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_73F8D016EAB35889_OFFSET UNITYSDK_OFFSET(0x13240720)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_7C6D4D27DE14490F_1_OFFSET UNITYSDK_OFFSET(0x1323EC30)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_7C6D4D27DE14490F_OFFSET UNITYSDK_OFFSET(0x1323B120)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_945A625955E094B1_OFFSET UNITYSDK_OFFSET(0x1323AA60)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_AD36C9A582039D71_1_OFFSET UNITYSDK_OFFSET(0x13237FA0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_AD36C9A582039D71_OFFSET UNITYSDK_OFFSET(0x11DF5010)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_B57AA5C2B2D63B8A_OFFSET UNITYSDK_OFFSET(0x1323BF70)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_C20EF91D22125575_OFFSET UNITYSDK_OFFSET(0x1323B430)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_C6737057133F501E_OFFSET UNITYSDK_OFFSET(0x13241490)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_CC193233F0A07840_OFFSET UNITYSDK_OFFSET(0x1323DC50)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_CD492C43FD93432B_OFFSET UNITYSDK_OFFSET(0x13238920)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_D09854902071CA93_OFFSET UNITYSDK_OFFSET(0x1323E4F0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_D2792EAECC18E5FB_OFFSET UNITYSDK_OFFSET(0x132416C0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_D3C5FD65E9848582_OFFSET UNITYSDK_OFFSET(0x1323EB00)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_DA0472D07BD798BF_OFFSET UNITYSDK_OFFSET(0x13237880)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_DFD870BCD1B01411_OFFSET UNITYSDK_OFFSET(0x11DF4FA0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_E01859F5A9463F1B_OFFSET UNITYSDK_OFFSET(0x13235840)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_FB2EF955CBD34588_OFFSET UNITYSDK_OFFSET(0x132384E0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_FE34AA911BE905B9_OFFSET UNITYSDK_OFFSET(0x1323D9F0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_FE7F9E31AF252F20_OFFSET UNITYSDK_OFFSET(0x1323EDD0)
#define CLASS_1_EF55DC41D1A933FC_METHOD_1_FF09B1E1FD6B35B5_OFFSET UNITYSDK_OFFSET(0x13238600)

inline static constexpr unsigned int Class_1_EF55DC41D1A933FC_TypeDefinitionIndex = 59030;

class Class_1_EF55DC41D1A933FC : public ::System::Object
{
public:
	static ::Class_3_98C806684F7CC372_4** StaticGet_Field_1_0()
	{
		return (::Class_3_98C806684F7CC372_4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF55DC41D1A933FC_TypeDefinitionIndex)->GetStaticField(0x4AC00);
	}

	static ::System::Boolean Method_1_DFD870BCD1B01411(::Struct_2_2B6FA625C20F556D a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::Struct_2_2B6FA625C20F556D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_DFD870BCD1B01411_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AD36C9A582039D71(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_1487A3F820CB8361* a2, ::Class_3_F41D242A20F8FE06* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_1487A3F820CB8361*, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_AD36C9A582039D71_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E01859F5A9463F1B(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Class_1_EA1FEF8121ADE963* a3, ::Class_3_F97B015544BE936B* a4, ::Class_1_1487A3F820CB8361* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::Class_1_1487A3F820CB8361*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_E01859F5A9463F1B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_AD36C9A582039D71_1(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_1487A3F820CB8361* a2, ::Class_3_F41D242A20F8FE06* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_1487A3F820CB8361*, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_AD36C9A582039D71_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_574E978F212BDA80(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_574E978F212BDA80_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C2A81E31EAC9289(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0B74D8D975246B1E(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0B74D8D975246B1E_1(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FB2EF955CBD34588(::MoleMole::Battle::Entity* a1, ::Class_3_F97B015544BE936B* a2, ::Struct_2_0EA61705E6C719A1 a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_F97B015544BE936B*, ::Struct_2_0EA61705E6C719A1))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_FB2EF955CBD34588_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_FF09B1E1FD6B35B5(::Class_3_F97B015544BE936B* a1, ::MoleMole::SkillCharacterScriptConfig* a2, ::Class_1_1CDA382D823F8E80* a3, ::Struct_2_2B6FA625C20F556D a4)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::Class_3_F97B015544BE936B*, ::MoleMole::SkillCharacterScriptConfig*, ::Class_1_1CDA382D823F8E80*, ::Struct_2_2B6FA625C20F556D))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_FF09B1E1FD6B35B5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_945A625955E094B1(::MoleMole::Config::DamageElementType a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Single(*)(::MoleMole::Config::DamageElementType, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_945A625955E094B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C2A81E31EAC9289_1(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5CB4651F3D5EBF22(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_5CB4651F3D5EBF22_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7C6D4D27DE14490F(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_7C6D4D27DE14490F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09DA5ED950396F79(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_09DA5ED950396F79_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_574E978F212BDA80_1(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_574E978F212BDA80_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_54DD4FAD47BAA0FA(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_54DD4FAD47BAA0FA_OFFSET))(a1, a2);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_C20EF91D22125575(::MoleMole::Battle::Entity* a1, ::Class_3_F97B015544BE936B* a2, ::Class_1_EA1FEF8121ADE963* a3, ::System::Boolean a4)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::MoleMole::Battle::Entity*, ::Class_3_F97B015544BE936B*, ::Class_1_EA1FEF8121ADE963*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_C20EF91D22125575_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0D1EEED0116AE65A(::System::Collections::Generic::List_1<::System::Single>*& a1, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Single>*&, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0D1EEED0116AE65A_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_B57AA5C2B2D63B8A(::Class_1_55FB143FAD52FF89* a1, ::System::UInt32 a2, ::MoleMole::Config::EntityType a3, ::MoleMole::Config::ConfigEntityAttackProperty* a4, ::Class_1_1CDA382D823F8E80* a5, ::Struct_2_2B6FA625C20F556D a6, ::MoleMole::Config::ConfigEntityAnimEvent* a7)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::Class_1_55FB143FAD52FF89*, ::System::UInt32, ::MoleMole::Config::EntityType, ::MoleMole::Config::ConfigEntityAttackProperty*, ::Class_1_1CDA382D823F8E80*, ::Struct_2_2B6FA625C20F556D, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_B57AA5C2B2D63B8A_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_D09854902071CA93(::System::Single& a1, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_D09854902071CA93_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C2A81E31EAC9289_2(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D3C5FD65E9848582(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_D3C5FD65E9848582_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_3F24DD29F13CF97A(::Class_3_61318B8F3165489C* a1)
	{
		return ((::System::Single(*)(::Class_3_61318B8F3165489C*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_3F24DD29F13CF97A_OFFSET))(a1);
	}

	static ::MoleMole::Config::DamageElementType Method_1_FE34AA911BE905B9(::MoleMole::Config::ConfigEntityAttackProperty* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::MoleMole::Config::DamageElementType(*)(::MoleMole::Config::ConfigEntityAttackProperty*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_FE34AA911BE905B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_48AAF5DE1FAB3338(::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_48AAF5DE1FAB3338_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_68F0B74C711E5235(::System::String*& a1, ::System::UInt32 a2, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a3)
	{
		return ((::System::Void(*)(::System::String*&, ::System::UInt32, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_68F0B74C711E5235_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FE7F9E31AF252F20(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_FE7F9E31AF252F20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_45F25BAC21D2CA9C(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_45F25BAC21D2CA9C_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_46C99CF4A5866072(::Class_3_61318B8F3165489C* a1, ::Class_1_EA1FEF8121ADE963* a2)
	{
		return ((::System::Single(*)(::Class_3_61318B8F3165489C*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_46C99CF4A5866072_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_391E583FCD358D55(::MoleMole::Config::DamageElementType a1, ::MoleMole::Battle::Entity* a2, ::Class_3_F41D242A20F8FE06* a3, ::Class_1_EA1FEF8121ADE963* a4)
	{
		return ((::System::Single(*)(::MoleMole::Config::DamageElementType, ::MoleMole::Battle::Entity*, ::Class_3_F41D242A20F8FE06*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_391E583FCD358D55_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_2061B8D48CB2A59E(::MoleMole::Config::DamageElementType a1, ::Class_2_013DB5EBD89922B2* a2)
	{
		return ((::System::Single(*)(::MoleMole::Config::DamageElementType, ::Class_2_013DB5EBD89922B2*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_2061B8D48CB2A59E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6C2C0C3F7824A2E4(::MoleMole::Battle::Entity* a1, ::Class_1_EA1FEF8121ADE963* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_6C2C0C3F7824A2E4_OFFSET))(a1, a2);
	}

	static ::Class_2_9329E687B3EB29E0_1* Method_1_679ED564F392040E(::MoleMole::Battle::Entity* a1, ::Class_1_EA1FEF8121ADE963* a2, ::Class_3_F25445702F7D8455* a3)
	{
		return ((::Class_2_9329E687B3EB29E0_1*(*)(::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*, ::Class_3_F25445702F7D8455*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_679ED564F392040E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_28FC3681795BD87F(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_1487A3F820CB8361* a2, ::Class_3_F41D242A20F8FE06* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_1487A3F820CB8361*, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_28FC3681795BD87F_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_14BA803570D5318A(::MoleMole::Battle::Entity* a1, ::Class_1_EA1FEF8121ADE963* a2, ::System::Boolean a3)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_14BA803570D5318A_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_C6737057133F501E(::MoleMole::Battle::Entity* a1, ::Class_2_F6579EDC26D1BFF1* a2, ::Class_3_F25445702F7D8455* a3)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::MoleMole::Battle::Entity*, ::Class_2_F6579EDC26D1BFF1*, ::Class_3_F25445702F7D8455*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_C6737057133F501E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_640BBBFEAF45D251(::System::Single& a1, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_640BBBFEAF45D251_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CC193233F0A07840(::System::Single& a1, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_CC193233F0A07840_OFFSET))(a1, a2, a3);
	}

	static ::System::Double Method_1_73F8D016EAB35889(::MoleMole::Battle::Entity* a1, ::Enum_3_57DC80FD7B2B919F a2)
	{
		return ((::System::Double(*)(::MoleMole::Battle::Entity*, ::Enum_3_57DC80FD7B2B919F))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_73F8D016EAB35889_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_07FA5311A21363BC(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_E85F004AD455EAA0* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_E85F004AD455EAA0*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_07FA5311A21363BC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_450A5338099E7516(::Class_3_F97B015544BE936B* a1, ::Class_1_EA1FEF8121ADE963* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_450A5338099E7516_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38E9DF23C32D38CD(::Class_1_EA1FEF8121ADE963* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_38E9DF23C32D38CD_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_09DA5ED950396F79_1(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_09DA5ED950396F79_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0D011244ED0E3A69(::Class_1_EA1FEF8121ADE963* a1, ::MoleMole::Config::SpecialDamageTextType a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0D011244ED0E3A69_OFFSET))(a1, a2);
	}

	static ::Class_1_EA1FEF8121ADE963* Method_1_CD492C43FD93432B(::Class_3_F97B015544BE936B* a1, ::MoleMole::Config::ConfigEntityAttackProperty* a2, ::Class_1_1CDA382D823F8E80* a3, ::Struct_2_2B6FA625C20F556D a4, ::MoleMole::Config::ConfigEntityAnimEvent* a5)
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAttackProperty*, ::Class_1_1CDA382D823F8E80*, ::Struct_2_2B6FA625C20F556D, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_CD492C43FD93432B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_DA0472D07BD798BF(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F41D242A20F8FE06* a2)
	{
		return ((::System::Single(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_DA0472D07BD798BF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_45F25BAC21D2CA9C_1(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_45F25BAC21D2CA9C_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7C6D4D27DE14490F_1(::Class_1_EA1FEF8121ADE963* a1, ::Class_1_55FB143FAD52FF89* a2)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_1_55FB143FAD52FF89*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_7C6D4D27DE14490F_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5CB4651F3D5EBF22_1(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_5CB4651F3D5EBF22_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_D2792EAECC18E5FB(::MoleMole::Battle::Entity* a1, ::Enum_3_57DC80FD7B2B919F a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Enum_3_57DC80FD7B2B919F, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_D2792EAECC18E5FB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0B74D8D975246B1E_2(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_4E1A41DD99A098BA(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_4E1A41DD99A098BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0B74D8D975246B1E_3(::System::Single& a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::System::Single&, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0B74D8D975246B1E_3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C2A81E31EAC9289_3(::Class_1_EA1FEF8121ADE963* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::ConfigEntityAnimEvent* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::ConfigEntityAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_1_EF55DC41D1A933FC_METHOD_1_0C2A81E31EAC9289_3_OFFSET))(a1, a2, a3);
	}
};
