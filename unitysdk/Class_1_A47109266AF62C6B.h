#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TreasureDungeonBuffConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A47109266AF62C6B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x184690D0)
#define CLASS_1_A47109266AF62C6B_METHOD_1_1929FA6EDE46268B_OFFSET UNITYSDK_OFFSET(0x18468800)
#define CLASS_1_A47109266AF62C6B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18468EF0)
#define CLASS_1_A47109266AF62C6B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18468880)
#define CLASS_1_A47109266AF62C6B_METHOD_1_7E54C1B29F923D39_OFFSET UNITYSDK_OFFSET(0x18469120)
#define CLASS_1_A47109266AF62C6B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18468F90)
#define CLASS_1_A47109266AF62C6B_METHOD_1_C17F9337E299549D_OFFSET UNITYSDK_OFFSET(0x18468CE0)
#define CLASS_1_A47109266AF62C6B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18468AD0)
#define CLASS_1_A47109266AF62C6B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18468EB0)
#define CLASS_1_A47109266AF62C6B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18469030)
#define CLASS_1_A47109266AF62C6B_METHOD_1_FC03E1F5DF9C6718_OFFSET UNITYSDK_OFFSET(0x18468B30)
#define CLASS_1_A47109266AF62C6B__CCTOR_OFFSET UNITYSDK_OFFSET(0x18469480)

inline static constexpr unsigned int Class_1_A47109266AF62C6B_TypeDefinitionIndex = 11835;

class Class_1_A47109266AF62C6B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A47109266AF62C6B_TypeDefinitionIndex)->GetStaticField(0x2EC20);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A47109266AF62C6B_TypeDefinitionIndex)->GetStaticField(0x2EC28);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A47109266AF62C6B_TypeDefinitionIndex)->GetStaticField(0x2EC30);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A47109266AF62C6B_TypeDefinitionIndex)->GetStaticField(0xB9A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A47109266AF62C6B_TypeDefinitionIndex)->GetStaticField(0xB9A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*>* Method_1_1929FA6EDE46268B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B_METHOD_1_1929FA6EDE46268B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*> Method_1_FC03E1F5DF9C6718()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B_METHOD_1_FC03E1F5DF9C6718_OFFSET))();
	}

	static ::RPG::GameCore::TreasureDungeonBuffConfigRow* Method_1_C17F9337E299549D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TreasureDungeonBuffConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B_METHOD_1_C17F9337E299549D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_7E54C1B29F923D39(::RPG::GameCore::TreasureDungeonBuffConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonBuffConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_A47109266AF62C6B_METHOD_1_7E54C1B29F923D39_OFFSET))(a1);
	}
};
