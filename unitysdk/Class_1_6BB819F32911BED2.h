#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournAdventureRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6BB819F32911BED2_METHOD_1_033ABC6C92BDF5FA_OFFSET UNITYSDK_OFFSET(0x1BBB5D50)
#define CLASS_1_6BB819F32911BED2_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1BBB6570)
#define CLASS_1_6BB819F32911BED2_METHOD_1_36F597B9BB75E143_OFFSET UNITYSDK_OFFSET(0x1BBB61D0)
#define CLASS_1_6BB819F32911BED2_METHOD_1_68DD57FA44138D16_OFFSET UNITYSDK_OFFSET(0x1BBB65C0)
#define CLASS_1_6BB819F32911BED2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1BBB63A0)
#define CLASS_1_6BB819F32911BED2_METHOD_1_9BAF01CFD77135EB_OFFSET UNITYSDK_OFFSET(0x1BBB6060)
#define CLASS_1_6BB819F32911BED2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1BBB6430)
#define CLASS_1_6BB819F32911BED2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BBB6000)
#define CLASS_1_6BB819F32911BED2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1BBB5DD0)
#define CLASS_1_6BB819F32911BED2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1BBB6360)
#define CLASS_1_6BB819F32911BED2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1BBB64D0)
#define CLASS_1_6BB819F32911BED2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBB6930)

inline static constexpr unsigned int Class_1_6BB819F32911BED2_TypeDefinitionIndex = 14380;

class Class_1_6BB819F32911BED2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BB819F32911BED2_TypeDefinitionIndex)->GetStaticField(0xE9C0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BB819F32911BED2_TypeDefinitionIndex)->GetStaticField(0xE9C8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BB819F32911BED2_TypeDefinitionIndex)->GetStaticField(0xE9D0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BB819F32911BED2_TypeDefinitionIndex)->GetStaticField(0x5000);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BB819F32911BED2_TypeDefinitionIndex)->GetStaticField(0x5001);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*>* Method_1_033ABC6C92BDF5FA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2_METHOD_1_033ABC6C92BDF5FA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*> Method_1_9BAF01CFD77135EB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAdventureRoomRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2_METHOD_1_9BAF01CFD77135EB_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournAdventureRoomRow* Method_1_36F597B9BB75E143(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournAdventureRoomRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2_METHOD_1_36F597B9BB75E143_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_68DD57FA44138D16(::RPG::GameCore::RogueTournAdventureRoomRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournAdventureRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_6BB819F32911BED2_METHOD_1_68DD57FA44138D16_OFFSET))(a1);
	}
};
