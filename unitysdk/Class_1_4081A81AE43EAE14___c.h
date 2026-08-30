#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_4081A81AE43EAE14___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F2E290)
#define CLASS_1_4081A81AE43EAE14___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2E2D0)
#define CLASS_1_4081A81AE43EAE14___C__GETPLAYERINDEX_B__20_0_OFFSET UNITYSDK_OFFSET(0x17F2E470)
#define CLASS_1_4081A81AE43EAE14___C___REFRESHCHATMESSAGEDATALIST_B__1_0_OFFSET UNITYSDK_OFFSET(0x17F2E2E0)
#define CLASS_1_4081A81AE43EAE14___C___REFRESHCHATMESSAGEDATALIST_B__1_1_OFFSET UNITYSDK_OFFSET(0x17F2E320)

inline static constexpr unsigned int Class_1_4081A81AE43EAE14___c_TypeDefinitionIndex = 66442;

class Class_1_4081A81AE43EAE14___c : public ::System::Object
{
public:
	static ::Class_1_4081A81AE43EAE14___c** StaticGet___9()
	{
		return (::Class_1_4081A81AE43EAE14___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4081A81AE43EAE14___c_TypeDefinitionIndex)->GetStaticField(0x64670);
	}
	static ::System::Predicate_1<::RPG::Client::ChatMessageData*>** StaticGet___9__1_1()
	{
		return (::System::Predicate_1<::RPG::Client::ChatMessageData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4081A81AE43EAE14___c_TypeDefinitionIndex)->GetStaticField(0x64678);
	}
	static ::System::Comparison_1<::RPG::Client::ChatMessageData*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::RPG::Client::ChatMessageData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4081A81AE43EAE14___c_TypeDefinitionIndex)->GetStaticField(0x64680);
	}
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4081A81AE43EAE14___c_TypeDefinitionIndex)->GetStaticField(0x64688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4081A81AE43EAE14___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4081A81AE43EAE14___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __RefreshChatMessageDataList_b__1_0(::RPG::Client::ChatMessageData* a1, ::RPG::Client::ChatMessageData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChatMessageData*, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_4081A81AE43EAE14___C___REFRESHCHATMESSAGEDATALIST_B__1_0_OFFSET))(this, a1, a2);
	}

	::System::Boolean __RefreshChatMessageDataList_b__1_1(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_4081A81AE43EAE14___C___REFRESHCHATMESSAGEDATALIST_B__1_1_OFFSET))(this, a1);
	}

	::System::Int32 _GetPlayerIndex_b__20_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64> a1, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>))((::PBYTE)hIl2Cpp + CLASS_1_4081A81AE43EAE14___C__GETPLAYERINDEX_B__20_0_OFFSET))(this, a1, a2);
	}
};
