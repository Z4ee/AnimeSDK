#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"

class Class_1_8289F2785D9AA990;
class Class_1_C7C8DAC9B7F55F6A;
class Class_2_0206DD479BB5C906;
class Class_2_208CC9941471731A_1117;
class Class_2_2B5C3D9688202862;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_710CD2A9B301B56D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15201BA0)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_189F9CB95A61B428_OFFSET UNITYSDK_OFFSET(0x15201D60)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15202450)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x15202340)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x152022F0)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15201D10)
#define CLASS_3_710CD2A9B301B56D_METHOD_3_D94FC80CD0C7479E_OFFSET UNITYSDK_OFFSET(0x15202160)
#define CLASS_3_710CD2A9B301B56D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15200EB0)
#define CLASS_3_710CD2A9B301B56D__CCTOR_OFFSET UNITYSDK_OFFSET(0x15201BF0)
#define CLASS_3_710CD2A9B301B56D__CTOR_OFFSET UNITYSDK_OFFSET(0x15201C70)

inline static constexpr unsigned int Class_3_710CD2A9B301B56D_TypeDefinitionIndex = 82370;

class Class_3_710CD2A9B301B56D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_15 = 0x9D; // 0x0
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::Class_1_8289F2785D9AA990*>* Field_3_11; // 0x48
	::Class_1_8289F2785D9AA990* Field_3_12; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_3_4; // 0x58
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_3; // 0x60
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::Class_2_0206DD479BB5C906*>* Field_3_10; // 0x68
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::Class_2_2B5C3D9688202862*>* Field_3_1; // 0x70
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::Class_1_C7C8DAC9B7F55F6A*>* Field_3_0; // 0x78
	::Class_1_8289F2785D9AA990* Field_3_9; // 0x80
	::Class_1_8289F2785D9AA990* Field_3_8; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_2; // 0x90
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_7; // 0x98
	::System::Boolean Field_3_5; // 0xA0
	::System::Boolean Field_3_6; // 0xA1
	::System::Boolean Field_3_13; // 0xA2
	::System::Single Field_3_14; // 0xA4

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

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_189F9CB95A61B428(::Class_2_208CC9941471731A_1117* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1117*))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_189F9CB95A61B428_OFFSET))(this, a1);
	}

	::System::Void Method_3_D94FC80CD0C7479E(::MoleMole::Config::DamageElementType a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_1117* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::System::Int32, ::Class_2_208CC9941471731A_1117*))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_D94FC80CD0C7479E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::Class_3_710CD2A9B301B56D* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_710CD2A9B301B56D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_710CD2A9B301B56D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
