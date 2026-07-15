#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_F3494824EE6E19ED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16587340)
#define CLASS_1_F3494824EE6E19ED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16587380)
#define CLASS_1_F3494824EE6E19ED___C__GETPLAYERINDEX_B__19_0_OFFSET UNITYSDK_OFFSET(0x16587520)
#define CLASS_1_F3494824EE6E19ED___C___REFRESHCHATMESSAGEDATALIST_B__1_0_OFFSET UNITYSDK_OFFSET(0x16587390)
#define CLASS_1_F3494824EE6E19ED___C___REFRESHCHATMESSAGEDATALIST_B__1_1_OFFSET UNITYSDK_OFFSET(0x165873D0)

inline static constexpr unsigned int Class_1_F3494824EE6E19ED___c_TypeDefinitionIndex = 63457;

class Class_1_F3494824EE6E19ED___c : public ::System::Object
{
public:
	static ::Class_1_F3494824EE6E19ED___c** StaticGet___9()
	{
		return (::Class_1_F3494824EE6E19ED___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3494824EE6E19ED___c_TypeDefinitionIndex)->GetStaticField(0x669B0);
	}
	static ::System::Predicate_1<::RPG::Client::ChatMessageData*>** StaticGet___9__1_1()
	{
		return (::System::Predicate_1<::RPG::Client::ChatMessageData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3494824EE6E19ED___c_TypeDefinitionIndex)->GetStaticField(0x669B8);
	}
	static ::System::Comparison_1<::RPG::Client::ChatMessageData*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::RPG::Client::ChatMessageData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3494824EE6E19ED___c_TypeDefinitionIndex)->GetStaticField(0x669C0);
	}
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3494824EE6E19ED___c_TypeDefinitionIndex)->GetStaticField(0x669C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3494824EE6E19ED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3494824EE6E19ED___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __RefreshChatMessageDataList_b__1_0(::RPG::Client::ChatMessageData* a1, ::RPG::Client::ChatMessageData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChatMessageData*, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_F3494824EE6E19ED___C___REFRESHCHATMESSAGEDATALIST_B__1_0_OFFSET))(this, a1, a2);
	}

	::System::Boolean __RefreshChatMessageDataList_b__1_1(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_F3494824EE6E19ED___C___REFRESHCHATMESSAGEDATALIST_B__1_1_OFFSET))(this, a1);
	}

	::System::Int32 _GetPlayerIndex_b__19_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64> a1, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>))((::PBYTE)hIl2Cpp + CLASS_1_F3494824EE6E19ED___C__GETPLAYERINDEX_B__19_0_OFFSET))(this, a1, a2);
	}
};
