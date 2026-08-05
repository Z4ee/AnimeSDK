#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_66C4D81440373C6E.h"
#include "unitysdk/Enum_3_9FBDB47166F97B2B.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/Struct_2_7D9908C3EA3882B7_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9B8A28A306558B7F;
class Class_1_A55DC9AE6705F8CA;
class Class_2_208CC9941471731A_1066;
class Class_2_208CC9941471731A_1193;
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_FBD588C94FE172F2_METHOD_2_011BA9072E3A3C70_OFFSET UNITYSDK_OFFSET(0x15993E90)
#define CLASS_2_FBD588C94FE172F2_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x15994660)
#define CLASS_2_FBD588C94FE172F2_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x15994720)
#define CLASS_2_FBD588C94FE172F2_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x15994740)
#define CLASS_2_FBD588C94FE172F2_METHOD_2_4C03EFAF5DBD0146_OFFSET UNITYSDK_OFFSET(0x15994550)
#define CLASS_2_FBD588C94FE172F2_METHOD_2_54BA4EA9B88A0E26_OFFSET UNITYSDK_OFFSET(0x15994560)
#define CLASS_2_FBD588C94FE172F2_METHOD_2_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x15993E80)
#define CLASS_2_FBD588C94FE172F2_METHOD_2_9F241237D442FF85_OFFSET UNITYSDK_OFFSET(0x15994730)
#define CLASS_2_FBD588C94FE172F2_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15993DD0)
#define CLASS_2_FBD588C94FE172F2_METHOD_2_B6C518F436E37E82_OFFSET UNITYSDK_OFFSET(0x15994650)
#define CLASS_2_FBD588C94FE172F2_METHOD_2_FEC62C5DC57138A1_OFFSET UNITYSDK_OFFSET(0x15994710)
#define CLASS_2_FBD588C94FE172F2__CTOR_OFFSET UNITYSDK_OFFSET(0x15993E70)

inline static constexpr unsigned int Class_2_FBD588C94FE172F2_TypeDefinitionIndex = 69947;

class Class_2_FBD588C94FE172F2 : public ::Class_1_66C4D81440373C6E
{
public:
	::MoleMole::InLevelBuddyDataItem* Field_2_6; // 0xE8
	::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>* Field_2_8; // 0xF0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_4; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A55DC9AE6705F8CA*>* Field_2_5; // 0x100
	::Class_2_208CC9941471731A_1193* Field_2_0; // 0x108
	::Class_2_208CC9941471731A_1066* Field_2_7; // 0x110
	::System::Boolean Field_2_15; // 0x118
	::Struct_2_7D9908C3EA3882B7_1 Field_2_10; // 0x11C
	::Struct_2_7D9908C3EA3882B7_1 Field_2_11; // 0x128
	::Struct_2_7D9908C3EA3882B7_1 Field_2_9; // 0x134

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_58BA0C8308C8127F(::Class_2_208CC9941471731A_1193* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1193*))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2_METHOD_2_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::System::Void Method_2_011BA9072E3A3C70(::System::UInt32 a1, ::Class_1_9B8A28A306558B7F* a2, ::MoleMole::InLevelBuddyDataItem* a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::MoleMole::Config::CampType a6, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a7, ::System::Collections::Generic::HashSet_1<::System::Int32>* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9B8A28A306558B7F*, ::MoleMole::InLevelBuddyDataItem*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2_METHOD_2_011BA9072E3A3C70_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::MoleMole::InLevelBuddyDataItem* Method_2_4C03EFAF5DBD0146()
	{
		return ((::MoleMole::InLevelBuddyDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2_METHOD_2_4C03EFAF5DBD0146_OFFSET))(this);
	}

	::System::Int32 Method_2_54BA4EA9B88A0E26(::Enum_3_9FBDB47166F97B2B a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_9FBDB47166F97B2B))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2_METHOD_2_54BA4EA9B88A0E26_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>* Method_2_B6C518F436E37E82()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2_METHOD_2_B6C518F436E37E82_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1066* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_208CC9941471731A_1066*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2_METHOD_2_08A44229CA25E941_OFFSET))(this);
	}

	::System::Void Method_2_FEC62C5DC57138A1(::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2_METHOD_2_FEC62C5DC57138A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_9F241237D442FF85(::MoleMole::InLevelBuddyDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelBuddyDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2_METHOD_2_9F241237D442FF85_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1193* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_208CC9941471731A_1193*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD588C94FE172F2_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}
};
