#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_487;
class Class_1_0E0403D2B5AD79E8;
class Class_1_E754E66360B8422F;
class Class_3_C22B3EED69F1AB77;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ILBattleAvatarConfigRow; }
namespace RPG::GameCore { class ILBattleAvatarPromotionConfigRow; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C3479ABE12B5ED9B_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x175FEBA0)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x175FE3C0)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x175FE3E0)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x175FE3A0)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_181A405363C9A19F_OFFSET UNITYSDK_OFFSET(0x175FEB90)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_2439C7815990B9DD_OFFSET UNITYSDK_OFFSET(0x175FE400)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_2DF74066DD3D92E2_OFFSET UNITYSDK_OFFSET(0x175FEBD0)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_30B19D9DA8C0DCB9_OFFSET UNITYSDK_OFFSET(0x17600050)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_591D1D0926CC1684_OFFSET UNITYSDK_OFFSET(0x175FEE80)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_5DF95F1F69FA3997_OFFSET UNITYSDK_OFFSET(0x17600340)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_67B250B744475F12_OFFSET UNITYSDK_OFFSET(0x17600210)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_742794713E14EC25_OFFSET UNITYSDK_OFFSET(0x175FEF90)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_8CEAB4B365735B82_OFFSET UNITYSDK_OFFSET(0x175FE390)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_9216B801ACD0B564_OFFSET UNITYSDK_OFFSET(0x175FE460)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_9DD597417197010B_OFFSET UNITYSDK_OFFSET(0x175FEF30)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x175FE320)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_AF2DF7DB76141392_OFFSET UNITYSDK_OFFSET(0x175FF5D0)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x175FE380)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_CD9FE9B72670C13A_OFFSET UNITYSDK_OFFSET(0x17600740)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_D8A7A5265A7DC1FF_OFFSET UNITYSDK_OFFSET(0x175FF4E0)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_E82B049A4C803AA5_OFFSET UNITYSDK_OFFSET(0x175FEB70)
#define CLASS_1_C3479ABE12B5ED9B_METHOD_1_EC48DF3597FAAB18_OFFSET UNITYSDK_OFFSET(0x17600810)
#define CLASS_1_C3479ABE12B5ED9B__CTOR_OFFSET UNITYSDK_OFFSET(0x17600900)

inline static constexpr unsigned int Class_1_C3479ABE12B5ED9B_TypeDefinitionIndex = 51735;

class Class_1_C3479ABE12B5ED9B : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* Field_1_0; // 0x10
	::RPG::GameCore::ILBattleAvatarConfigRow* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_487*>* Field_1_2; // 0x20
	::Class_1_0E0403D2B5AD79E8* Field_1_3; // 0x28
	::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* Field_1_4; // 0x30
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_1_5; // 0x38
	::RPG::GameCore::RtCharacterConfig* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>* Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x50
	::System::UInt32 Field_1_9; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtCharacterConfig* Method_1_8CEAB4B365735B82()
	{
		return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_8CEAB4B365735B82_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_128774387667156B_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_487*>* Method_1_2439C7815990B9DD()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_487*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_2439C7815990B9DD_OFFSET))(this);
	}

	::RPG::GameCore::ILBattleCharacterLocation Method_1_E82B049A4C803AA5()
	{
		return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_E82B049A4C803AA5_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Method_1_181A405363C9A19F()
	{
		return ((::Il2CppArray<::RPG::GameCore::JsonEnum*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_181A405363C9A19F_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_GET_CHARACTERNAME_OFFSET))(this);
	}

	::Class_1_C3479ABE12B5ED9B* Method_1_2DF74066DD3D92E2(::RPG::GameCore::ILBattleAvatarConfigRow* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a4, ::Class_1_E754E66360B8422F* a5, ::Class_1_0E0403D2B5AD79E8* a6)
	{
		return ((::Class_1_C3479ABE12B5ED9B*(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarConfigRow*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Class_1_E754E66360B8422F*, ::Class_1_0E0403D2B5AD79E8*))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_2DF74066DD3D92E2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_591D1D0926CC1684(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_591D1D0926CC1684_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DD597417197010B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_9DD597417197010B_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF2DF7DB76141392(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_AF2DF7DB76141392_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D8A7A5265A7DC1FF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_D8A7A5265A7DC1FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_742794713E14EC25(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_742794713E14EC25_OFFSET))(this, a1);
	}

	::System::Void Method_1_30B19D9DA8C0DCB9(::Class_3_C22B3EED69F1AB77* a1, ::RPG::GameCore::RtAbilityProperty a2, ::Class_3_C22B3EED69F1AB77* a3, ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C22B3EED69F1AB77*, ::RPG::GameCore::RtAbilityProperty, ::Class_3_C22B3EED69F1AB77*, ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>*))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_30B19D9DA8C0DCB9_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_67B250B744475F12(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_67B250B744475F12_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_5DF95F1F69FA3997(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_5DF95F1F69FA3997_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_CD9FE9B72670C13A(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_CD9FE9B72670C13A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9216B801ACD0B564()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_9216B801ACD0B564_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_EC48DF3597FAAB18()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3479ABE12B5ED9B_METHOD_1_EC48DF3597FAAB18_OFFSET))(this);
	}
};
