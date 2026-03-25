#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerCheersTypeTextmapRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_484E1189A6F14D94_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16CA3B00)
#define CLASS_1_484E1189A6F14D94_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16CA3920)
#define CLASS_1_484E1189A6F14D94_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16CA3270)
#define CLASS_1_484E1189A6F14D94_METHOD_1_799168CC21CA9F90_OFFSET UNITYSDK_OFFSET(0x16CA31F0)
#define CLASS_1_484E1189A6F14D94_METHOD_1_8865BD5E25D4CFE4_OFFSET UNITYSDK_OFFSET(0x16CA3B50)
#define CLASS_1_484E1189A6F14D94_METHOD_1_AC8B436C6493056D_OFFSET UNITYSDK_OFFSET(0x16CA3520)
#define CLASS_1_484E1189A6F14D94_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16CA39C0)
#define CLASS_1_484E1189A6F14D94_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16CA34C0)
#define CLASS_1_484E1189A6F14D94_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16CA38E0)
#define CLASS_1_484E1189A6F14D94_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16CA3A60)
#define CLASS_1_484E1189A6F14D94_METHOD_1_F651BE5177370699_OFFSET UNITYSDK_OFFSET(0x16CA36D0)
#define CLASS_1_484E1189A6F14D94__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CA3F00)

inline static constexpr unsigned int Class_1_484E1189A6F14D94_TypeDefinitionIndex = 12051;

class Class_1_484E1189A6F14D94 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_484E1189A6F14D94_TypeDefinitionIndex)->GetStaticField(0x56D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_484E1189A6F14D94_TypeDefinitionIndex)->GetStaticField(0x56D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_484E1189A6F14D94_TypeDefinitionIndex)->GetStaticField(0x56E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_484E1189A6F14D94_TypeDefinitionIndex)->GetStaticField(0x2DB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_484E1189A6F14D94_TypeDefinitionIndex)->GetStaticField(0x2DB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>* Method_1_799168CC21CA9F90()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_799168CC21CA9F90_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*> Method_1_AC8B436C6493056D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_AC8B436C6493056D_OFFSET))();
	}

	static ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow* Method_1_F651BE5177370699(::System::UInt32 a1, ::RPG::GameCore::DrinkMakerQuantifyTagType a2)
	{
		return ((::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*(*)(::System::UInt32, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_F651BE5177370699_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8865BD5E25D4CFE4(::RPG::GameCore::DrinkMakerCheersTypeTextmapRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*))((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_8865BD5E25D4CFE4_OFFSET))(a1);
	}
};
