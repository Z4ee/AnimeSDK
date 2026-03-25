#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournContentExhibitionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_0374C0CC6D89C7D0_OFFSET UNITYSDK_OFFSET(0x16DDCBF0)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_064ADA6013369EC6_OFFSET UNITYSDK_OFFSET(0x16DDC760)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16DDCBA0)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DDC9C0)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_607419911EA07167_OFFSET UNITYSDK_OFFSET(0x16DDC5E0)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16DDC330)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_9183AAFF282E32EB_OFFSET UNITYSDK_OFFSET(0x16DDC2B0)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_9566803EA5A79444_OFFSET UNITYSDK_OFFSET(0x16DDC800)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16DDCA60)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16DDC580)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16DDC980)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16DDCB00)
#define CLASS_1_00E5ABCF7CE97C1B__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DDCF00)

inline static constexpr unsigned int Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex = 13775;

class Class_1_00E5ABCF7CE97C1B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex)->GetStaticField(0x176D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex)->GetStaticField(0x176D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex)->GetStaticField(0x176E0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex)->GetStaticField(0x6AC0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex)->GetStaticField(0x6AC1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>* Method_1_9183AAFF282E32EB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_9183AAFF282E32EB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*> Method_1_607419911EA07167()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_607419911EA07167_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>, ::RPG::GameCore::RogueTournContentExhibitionRow*> Method_1_064ADA6013369EC6()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>, ::RPG::GameCore::RogueTournContentExhibitionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_064ADA6013369EC6_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournContentExhibitionRow* Method_1_9566803EA5A79444(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournContentExhibitionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_9566803EA5A79444_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_0374C0CC6D89C7D0(::RPG::GameCore::RogueTournContentExhibitionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournContentExhibitionRow*))((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_0374C0CC6D89C7D0_OFFSET))(a1);
	}
};
