#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"

class Class_1_5E4C21FA3C948472;
class Class_1_8289F2785D9AA990;
class Class_1_C7C8DAC9B7F55F6A;
class Class_2_0206DD479BB5C906;
class Class_2_208CC9941471731A_1184;
class Class_2_2B5C3D9688202862;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_710CD2A9B301B56D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15454910)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_189F9CB95A61B428_OFFSET UNITYSDK_OFFSET(0x15454A80)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15455010)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x154550A0)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15455200)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154551B0)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_D94FC80CD0C7479E_OFFSET UNITYSDK_OFFSET(0x15454E70)
#define CLASS_3_710CD2A9B301B56D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15453BB0)
#define CLASS_3_710CD2A9B301B56D__CCTOR_OFFSET UNITYSDK_OFFSET(0x15454960)
#define CLASS_3_710CD2A9B301B56D__CTOR_OFFSET UNITYSDK_OFFSET(0x154549E0)

inline static constexpr unsigned int Class_3_710CD2A9B301B56D_TypeDefinitionIndex = 83764;

class Class_3_710CD2A9B301B56D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_19 = 0x9E; // 0x0
	::Class_1_8289F2785D9AA990* Field_3_14; // 0x48
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::Class_1_8289F2785D9AA990*>* Field_3_15; // 0x50
	::Class_1_8289F2785D9AA990* Field_3_10; // 0x58
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::Class_1_5E4C21FA3C948472*>* Field_3_6; // 0x60
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::Class_1_C7C8DAC9B7F55F6A*>* Field_3_3; // 0x68
	::Class_1_8289F2785D9AA990* Field_3_9; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_11; // 0x78
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::Class_2_2B5C3D9688202862*>* Field_3_2; // 0x80
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::Class_2_0206DD479BB5C906*>* Field_3_8; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_1; // 0x90
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_3_7; // 0x98
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_0; // 0xA0
	::System::Single Field_3_12; // 0xA8
	::System::Boolean Field_3_13; // 0xAC
	::System::Boolean Field_3_5; // 0xAD
	::System::Boolean Field_3_4; // 0xAE

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_189F9CB95A61B428(::Class_2_208CC9941471731A_1184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1184*))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_189F9CB95A61B428_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_D94FC80CD0C7479E(::MoleMole::Config::DamageElementType a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_1184* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::System::Int32, ::Class_2_208CC9941471731A_1184*))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_D94FC80CD0C7479E_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_710CD2A9B301B56D* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_710CD2A9B301B56D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};
