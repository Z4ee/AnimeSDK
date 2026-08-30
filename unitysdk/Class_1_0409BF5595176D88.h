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

#define CLASS_1_0409BF5595176D88_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CC49090)
#define CLASS_1_0409BF5595176D88_METHOD_1_3B916FB644E128A4_OFFSET UNITYSDK_OFFSET(0x1CC490E0)
#define CLASS_1_0409BF5595176D88_METHOD_1_431952036F435463_OFFSET UNITYSDK_OFFSET(0x1CC48B00)
#define CLASS_1_0409BF5595176D88_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CC48EC0)
#define CLASS_1_0409BF5595176D88_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CC48F50)
#define CLASS_1_0409BF5595176D88_METHOD_1_B7A15EF02ED2759D_OFFSET UNITYSDK_OFFSET(0x1CC48C70)
#define CLASS_1_0409BF5595176D88_METHOD_1_C96885177CC954BA_OFFSET UNITYSDK_OFFSET(0x1CC487F0)
#define CLASS_1_0409BF5595176D88_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CC48AA0)
#define CLASS_1_0409BF5595176D88_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CC48870)
#define CLASS_1_0409BF5595176D88_METHOD_1_E8CEA10F96FA29AD_OFFSET UNITYSDK_OFFSET(0x1CC48CF0)
#define CLASS_1_0409BF5595176D88_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CC48E80)
#define CLASS_1_0409BF5595176D88_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CC48FF0)
#define CLASS_1_0409BF5595176D88__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC49450)

inline static constexpr unsigned int Class_1_0409BF5595176D88_TypeDefinitionIndex = 11248;

class Class_1_0409BF5595176D88 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0409BF5595176D88_TypeDefinitionIndex)->GetStaticField(0x2F6F0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0409BF5595176D88_TypeDefinitionIndex)->GetStaticField(0x2F6F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0409BF5595176D88_TypeDefinitionIndex)->GetStaticField(0x2F700);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0409BF5595176D88_TypeDefinitionIndex)->GetStaticField(0xD330);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0409BF5595176D88_TypeDefinitionIndex)->GetStaticField(0xD331);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*> Method_1_431952036F435463()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_431952036F435463_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*> Method_1_B7A15EF02ED2759D()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_B7A15EF02ED2759D_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatAIGroupRow* Method_1_E8CEA10F96FA29AD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatAIGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_E8CEA10F96FA29AD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0409BF5595176D88_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
