#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceCombatAIGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0409BF5595176D88_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16EC89A0)
#define CLASS_1_0409BF5595176D88_METHOD_1_11C1C0DD7292F84F_OFFSET UNITYSDK_OFFSET(0x16EC8340)
#define CLASS_1_0409BF5595176D88_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16EC87C0)
#define CLASS_1_0409BF5595176D88_METHOD_1_3B916FB644E128A4_OFFSET UNITYSDK_OFFSET(0x16EC89F0)
#define CLASS_1_0409BF5595176D88_METHOD_1_61B220D1FB9B7424_OFFSET UNITYSDK_OFFSET(0x16EC84F0)
#define CLASS_1_0409BF5595176D88_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16EC8090)
#define CLASS_1_0409BF5595176D88_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16EC8860)
#define CLASS_1_0409BF5595176D88_METHOD_1_BE5E259BF742E5C6_OFFSET UNITYSDK_OFFSET(0x16EC85B0)
#define CLASS_1_0409BF5595176D88_METHOD_1_C96885177CC954BA_OFFSET UNITYSDK_OFFSET(0x16EC8010)
#define CLASS_1_0409BF5595176D88_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16EC82E0)
#define CLASS_1_0409BF5595176D88_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16EC8780)
#define CLASS_1_0409BF5595176D88_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16EC8900)
#define CLASS_1_0409BF5595176D88__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EC8D50)

inline static constexpr unsigned int Class_1_0409BF5595176D88_TypeDefinitionIndex = 10544;

class Class_1_0409BF5595176D88 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0409BF5595176D88_TypeDefinitionIndex)->GetStaticField(0x2CB80);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0409BF5595176D88_TypeDefinitionIndex)->GetStaticField(0x2CB88);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0409BF5595176D88_TypeDefinitionIndex)->GetStaticField(0x2CB90);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0409BF5595176D88_TypeDefinitionIndex)->GetStaticField(0xEE50);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0409BF5595176D88_TypeDefinitionIndex)->GetStaticField(0xEE51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>* Method_1_C96885177CC954BA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_C96885177CC954BA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*> Method_1_11C1C0DD7292F84F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_11C1C0DD7292F84F_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*> Method_1_61B220D1FB9B7424()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_61B220D1FB9B7424_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatAIGroupRow* Method_1_BE5E259BF742E5C6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatAIGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_BE5E259BF742E5C6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3B916FB644E128A4(::RPG::GameCore::ActivityDiceCombatAIGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatAIGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_3B916FB644E128A4_OFFSET))(a1);
	}
};
