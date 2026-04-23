#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE27584A7A63E572_ReplayOldestResult.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingEffectRemoveReason.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleEffectLifeTimeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_25495098F569C629_2;
class Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79;
class Class_1_E3EC8A06BA0E94D6;
class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BE27584A7A63E572_METHOD_1_037B8DF93C1D4AA3_OFFSET UNITYSDK_OFFSET(0xA5570D0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_072AAC29C3B8FC1A_OFFSET UNITYSDK_OFFSET(0xA555E30)
#define CLASS_1_BE27584A7A63E572_METHOD_1_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0xA554D10)
#define CLASS_1_BE27584A7A63E572_METHOD_1_0F4C1A652C52CE85_OFFSET UNITYSDK_OFFSET(0xA5561A0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_1308E254FCA7A667_OFFSET UNITYSDK_OFFSET(0xA559A40)
#define CLASS_1_BE27584A7A63E572_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0xA555A10)
#define CLASS_1_BE27584A7A63E572_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xA554690)
#define CLASS_1_BE27584A7A63E572_METHOD_1_285C0AA90F3B655D_OFFSET UNITYSDK_OFFSET(0xA557E80)
#define CLASS_1_BE27584A7A63E572_METHOD_1_4A8728ED97D76536_OFFSET UNITYSDK_OFFSET(0xA558390)
#define CLASS_1_BE27584A7A63E572_METHOD_1_528C605CC7F64100_OFFSET UNITYSDK_OFFSET(0xA556980)
#define CLASS_1_BE27584A7A63E572_METHOD_1_8981EF868B608292_OFFSET UNITYSDK_OFFSET(0xA5546A0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_AAE62CCE22BF6DE4_OFFSET UNITYSDK_OFFSET(0xA5586A0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_B05A1A28B78AFF14_OFFSET UNITYSDK_OFFSET(0xA557390)
#define CLASS_1_BE27584A7A63E572_METHOD_1_BE74C7C22318A58D_OFFSET UNITYSDK_OFFSET(0xA5565C0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_BE8444B3EC2BEC2C_OFFSET UNITYSDK_OFFSET(0xA559720)
#define CLASS_1_BE27584A7A63E572_METHOD_1_C5E3C86643578B7D_OFFSET UNITYSDK_OFFSET(0xA5584E0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_C873D971818BE8B2_OFFSET UNITYSDK_OFFSET(0xA555BF0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_CA61377C4070A4F6_OFFSET UNITYSDK_OFFSET(0xA555BA0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_CD076E188DEE5884_OFFSET UNITYSDK_OFFSET(0xA557B20)
#define CLASS_1_BE27584A7A63E572_METHOD_1_D038EA8E86EC5AE1_OFFSET UNITYSDK_OFFSET(0xA558880)
#define CLASS_1_BE27584A7A63E572_METHOD_1_DD629DE2B9F126B4_OFFSET UNITYSDK_OFFSET(0xA558D70)
#define CLASS_1_BE27584A7A63E572_METHOD_1_DF6CD281E04CBC42_OFFSET UNITYSDK_OFFSET(0xA559980)
#define CLASS_1_BE27584A7A63E572_METHOD_1_F71ABDCE0839D91B_OFFSET UNITYSDK_OFFSET(0xA558F80)
#define CLASS_1_BE27584A7A63E572_METHOD_1_FB84D7D4BE1FD558_OFFSET UNITYSDK_OFFSET(0xA556D90)
#define CLASS_1_BE27584A7A63E572__CTOR_OFFSET UNITYSDK_OFFSET(0xA554700)

inline static constexpr unsigned int Class_1_BE27584A7A63E572_TypeDefinitionIndex = 71307;

class Class_1_BE27584A7A63E572 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TriggerEffectParamsRef>* Field_1_10; // 0x10
	::Class_1_E3EC8A06BA0E94D6* Field_1_12; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::RPG::GameCore::ChenLingBattleEffectConfig*, ::System::Int32>>* Field_1_9; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>*>* Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::MonoEffect*, ::System::UInt32>* Field_1_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::LinkedListNode_1<::RPG::Client::MonoEffect*>*>* Field_1_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*>* Field_1_0; // 0x40
	::Class_2_E9C9AAD7C711B3E3* Field_1_8; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason>* Field_1_11; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* Field_1_2; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::Int32, ::System::String*>>* Field_1_4; // 0x68
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_7; // 0x70
	::System::Boolean Field_1_13; // 0x78

	::System::Void _ctor(::Class_2_E9C9AAD7C711B3E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572__CTOR_OFFSET))(this, a1);
	}

	::Class_1_E3EC8A06BA0E94D6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E3EC8A06BA0E94D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_25495098F569C629_2* Method_1_8981EF868B608292(::System::Int32 a1)
	{
		return ((::Class_1_25495098F569C629_2*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_8981EF868B608292_OFFSET))(this, a1);
	}

	::System::Void Method_1_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_1_CA61377C4070A4F6(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_CA61377C4070A4F6_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffect* Method_1_C873D971818BE8B2(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79* a3)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_C873D971818BE8B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FB84D7D4BE1FD558(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::MonoEffect* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_FB84D7D4BE1FD558_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CD076E188DEE5884(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_CD076E188DEE5884_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_285C0AA90F3B655D(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_285C0AA90F3B655D_OFFSET))(this, a1);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_072AAC29C3B8FC1A(::Class_2_181A7F9409C60DBC* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_072AAC29C3B8FC1A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C5E3C86643578B7D(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_C5E3C86643578B7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AAE62CCE22BF6DE4(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_AAE62CCE22BF6DE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A8728ED97D76536(::System::UInt32 a1, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_4A8728ED97D76536_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_528C605CC7F64100(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_528C605CC7F64100_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_037B8DF93C1D4AA3(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::MonoEffect* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_037B8DF93C1D4AA3_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::TriggerEffectParamsRef Method_1_0F4C1A652C52CE85(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79* a3)
	{
		return ((::RPG::Client::TriggerEffectParamsRef(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_0F4C1A652C52CE85_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BE8444B3EC2BEC2C(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_BE8444B3EC2BEC2C_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Int32, ::System::String*> Method_1_DD629DE2B9F126B4(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::String*>(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_DD629DE2B9F126B4_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Int32, ::System::String*> Method_1_DF6CD281E04CBC42(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::String*>(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_DF6CD281E04CBC42_OFFSET))(this, a1, a2);
	}

	::Class_1_BE27584A7A63E572_ReplayOldestResult Method_1_BE74C7C22318A58D(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::TriggerEffectParams* a3, ::RPG::Client::MonoEffect*& a4)
	{
		return ((::Class_1_BE27584A7A63E572_ReplayOldestResult(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::TriggerEffectParams*, ::RPG::Client::MonoEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_BE74C7C22318A58D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_1308E254FCA7A667(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_1308E254FCA7A667_OFFSET))(this, a1);
	}

	::System::Void Method_1_B05A1A28B78AFF14(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::MonoEffect* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_B05A1A28B78AFF14_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D038EA8E86EC5AE1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_D038EA8E86EC5AE1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F71ABDCE0839D91B(::System::ValueTuple_2<::System::Int32, ::System::String*> a1, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_F71ABDCE0839D91B_OFFSET))(this, a1, a2);
	}
};
