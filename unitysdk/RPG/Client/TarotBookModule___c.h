#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookCharacter; }
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::Client { class TarotBookReadReward; }
namespace RPG::Client { class TarotBookStory; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_TAROTBOOKMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE17BC40)
#define RPG_CLIENT_TAROTBOOKMODULE___C__CHECKCANTAKEREADREWARD_B__92_0_OFFSET UNITYSDK_OFFSET(0xE17BDD0)
#define RPG_CLIENT_TAROTBOOKMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE17BC70)
#define RPG_CLIENT_TAROTBOOKMODULE___C__GET_HASNEWSTORY_B__26_0_OFFSET UNITYSDK_OFFSET(0xE17BC80)
#define RPG_CLIENT_TAROTBOOKMODULE___C__GET_UNLOCKEDCHARACTERCOUNT_B__56_0_OFFSET UNITYSDK_OFFSET(0xE17BD70)
#define RPG_CLIENT_TAROTBOOKMODULE___C___INITINTERACTIONS_B__168_0_OFFSET UNITYSDK_OFFSET(0xE17BE90)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookModule___c_TypeDefinitionIndex = 68063;

	class TarotBookModule___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::TarotBookReadReward*>** StaticGet___9__92_0()
		{
			return (::System::Predicate_1<::RPG::Client::TarotBookReadReward*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookModule___c_TypeDefinitionIndex)->GetStaticField(0x3EFB0);
		}
		static ::System::Func_2<::RPG::Client::TarotBookCharacter*, ::System::Boolean>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::RPG::Client::TarotBookCharacter*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookModule___c_TypeDefinitionIndex)->GetStaticField(0x3EFB8);
		}
		static ::System::Comparison_1<::RPG::Client::TarotBookInteraction*>** StaticGet___9__168_0()
		{
			return (::System::Comparison_1<::RPG::Client::TarotBookInteraction*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookModule___c_TypeDefinitionIndex)->GetStaticField(0x3EFC0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TarotBookStory*>, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TarotBookStory*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookModule___c_TypeDefinitionIndex)->GetStaticField(0x3EFC8);
		}
		static ::RPG::Client::TarotBookModule___c** StaticGet___9()
		{
			return (::RPG::Client::TarotBookModule___c**)Il2CppClass::FromTypeDefinitionIndex(TarotBookModule___c_TypeDefinitionIndex)->GetStaticField(0x3EFD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HasNewStory_b__26_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TarotBookStory*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TarotBookStory*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C__GET_HASNEWSTORY_B__26_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_UnlockedCharacterCount_b__56_0(::RPG::Client::TarotBookCharacter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C__GET_UNLOCKEDCHARACTERCOUNT_B__56_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckCanTakeReadReward_b__92_0(::RPG::Client::TarotBookReadReward* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C__CHECKCANTAKEREADREWARD_B__92_0_OFFSET))(this, a1);
		}

		::System::Int32 __InitInteractions_b__168_0(::RPG::Client::TarotBookInteraction* a1, ::RPG::Client::TarotBookInteraction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C___INITINTERACTIONS_B__168_0_OFFSET))(this, a1, a2);
		}
	};
}
