#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_444;
class Class_1_0E0403D2B5AD79E8;
class Class_1_E754E66360B8422F;
class Class_3_709BBC1863417E95;
namespace RPG::Client { class AvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ILBattleAvatarConfigRow; }
namespace RPG::GameCore { class ILBattleAvatarPromotionConfigRow; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B6B5A6C41D7C342D_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x123FB220)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_016BE8D6A97AF8B4_OFFSET UNITYSDK_OFFSET(0x123FB250)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_01B0017134EADCC3_OFFSET UNITYSDK_OFFSET(0x123FC440)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_11071ED565E96CE7_OFFSET UNITYSDK_OFFSET(0x123FB4E0)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x123FABC0)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x123FABE0)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x123FABA0)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_12B3B9ABE1081C79_OFFSET UNITYSDK_OFFSET(0x123FB560)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_181A405363C9A19F_OFFSET UNITYSDK_OFFSET(0x123FB210)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_2439C7815990B9DD_OFFSET UNITYSDK_OFFSET(0x123FAC00)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x123FAC60)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_5DF95F1F69FA3997_OFFSET UNITYSDK_OFFSET(0x123FC690)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_64EEE3FEF87A70D8_OFFSET UNITYSDK_OFFSET(0x123FBB00)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_74AC27E26D00806E_OFFSET UNITYSDK_OFFSET(0x123FCA70)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_7D809A18C24A8D5B_OFFSET UNITYSDK_OFFSET(0x123FCB50)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_8CEAB4B365735B82_OFFSET UNITYSDK_OFFSET(0x123FAB90)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_A743210993038E07_OFFSET UNITYSDK_OFFSET(0x123FC5E0)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x123FAB20)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_AF2DF7DB76141392_OFFSET UNITYSDK_OFFSET(0x123FBBF0)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x123FAB80)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_D5386D9FEC9AEC59_OFFSET UNITYSDK_OFFSET(0x123FB5C0)
#define CLASS_1_B6B5A6C41D7C342D_METHOD_1_E82B049A4C803AA5_OFFSET UNITYSDK_OFFSET(0x123FB1F0)
#define CLASS_1_B6B5A6C41D7C342D__CTOR_OFFSET UNITYSDK_OFFSET(0x123FCDA0)

inline static constexpr unsigned int Class_1_B6B5A6C41D7C342D_TypeDefinitionIndex = 49986;

class Class_1_B6B5A6C41D7C342D : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>* Field_1_4; // 0x18
	::Class_1_0E0403D2B5AD79E8* Field_1_6; // 0x20
	::RPG::Client::AvatarData* Field_1_9; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>* Field_1_8; // 0x30
	::RPG::GameCore::ILBattleAvatarConfigRow* Field_1_0; // 0x38
	::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* Field_1_7; // 0x40
	::RPG::GameCore::RtCharacterConfig* Field_1_3; // 0x48
	::System::UInt32 Field_1_2; // 0x50
	::System::UInt32 Field_1_1; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtCharacterConfig* Method_1_8CEAB4B365735B82()
	{
		return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_8CEAB4B365735B82_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_128774387667156B_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>* Method_1_2439C7815990B9DD()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_2439C7815990B9DD_OFFSET))(this);
	}

	::RPG::GameCore::ILBattleCharacterLocation Method_1_E82B049A4C803AA5()
	{
		return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_E82B049A4C803AA5_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Method_1_181A405363C9A19F()
	{
		return ((::Il2CppArray<::RPG::GameCore::JsonEnum*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_181A405363C9A19F_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_GET_CHARACTERNAME_OFFSET))(this);
	}

	::Class_1_B6B5A6C41D7C342D* Method_1_016BE8D6A97AF8B4(::RPG::GameCore::ILBattleAvatarConfigRow* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a4, ::Class_1_E754E66360B8422F* a5, ::Class_1_0E0403D2B5AD79E8* a6)
	{
		return ((::Class_1_B6B5A6C41D7C342D*(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarConfigRow*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Class_1_E754E66360B8422F*, ::Class_1_0E0403D2B5AD79E8*))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_016BE8D6A97AF8B4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_11071ED565E96CE7(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_11071ED565E96CE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_12B3B9ABE1081C79(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_12B3B9ABE1081C79_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF2DF7DB76141392(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_AF2DF7DB76141392_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_64EEE3FEF87A70D8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_64EEE3FEF87A70D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_D5386D9FEC9AEC59(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_D5386D9FEC9AEC59_OFFSET))(this, a1);
	}

	::System::Void Method_1_01B0017134EADCC3(::Class_3_709BBC1863417E95* a1, ::RPG::GameCore::RtAbilityProperty a2, ::Class_3_709BBC1863417E95* a3, ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_709BBC1863417E95*, ::RPG::GameCore::RtAbilityProperty, ::Class_3_709BBC1863417E95*, ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>*))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_01B0017134EADCC3_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_A743210993038E07(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_A743210993038E07_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_5DF95F1F69FA3997(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_5DF95F1F69FA3997_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_74AC27E26D00806E(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_74AC27E26D00806E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_4679E7840A7526E1_OFFSET))(this);
	}

	::RPG::Client::AvatarData* Method_1_7D809A18C24A8D5B()
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B5A6C41D7C342D_METHOD_1_7D809A18C24A8D5B_OFFSET))(this);
	}
};
