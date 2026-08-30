#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE27584A7A63E572_ReplayOldestResult.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingEffectRemoveReason.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleEffectLifeTimeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_AA3647312B318D6B;
class Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79;
class Class_1_E3EC8A06BA0E94D6;
class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
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

#define CLASS_1_BE27584A7A63E572_METHOD_1_037B8DF93C1D4AA3_OFFSET UNITYSDK_OFFSET(0x16CA9200)
#define CLASS_1_BE27584A7A63E572_METHOD_1_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x16CA6EF0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_0F4C1A652C52CE85_OFFSET UNITYSDK_OFFSET(0x16CA8370)
#define CLASS_1_BE27584A7A63E572_METHOD_1_1308E254FCA7A667_OFFSET UNITYSDK_OFFSET(0x16CAB830)
#define CLASS_1_BE27584A7A63E572_METHOD_1_24681ACAB63286CB_OFFSET UNITYSDK_OFFSET(0x16CA94B0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x16CA6840)
#define CLASS_1_BE27584A7A63E572_METHOD_1_254BE84F18F77681_OFFSET UNITYSDK_OFFSET(0x16CA8F30)
#define CLASS_1_BE27584A7A63E572_METHOD_1_285C0AA90F3B655D_OFFSET UNITYSDK_OFFSET(0x16CA9EB0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_3E57985EFE74CB15_OFFSET UNITYSDK_OFFSET(0x16CAB580)
#define CLASS_1_BE27584A7A63E572_METHOD_1_4CFC5F9F40A751DF_OFFSET UNITYSDK_OFFSET(0x16CAA650)
#define CLASS_1_BE27584A7A63E572_METHOD_1_528C605CC7F64100_OFFSET UNITYSDK_OFFSET(0x16CA8B40)
#define CLASS_1_BE27584A7A63E572_METHOD_1_85709A4C92AC0666_OFFSET UNITYSDK_OFFSET(0x16CA7D90)
#define CLASS_1_BE27584A7A63E572_METHOD_1_8ACC1324909FD20B_OFFSET UNITYSDK_OFFSET(0x16CAB790)
#define CLASS_1_BE27584A7A63E572_METHOD_1_8E1158F0941AAA1F_OFFSET UNITYSDK_OFFSET(0x16CAA3C0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_94D5B2EA0DF0911E_OFFSET UNITYSDK_OFFSET(0x16CA8020)
#define CLASS_1_BE27584A7A63E572_METHOD_1_9649D3A43F21DC0C_OFFSET UNITYSDK_OFFSET(0x16CA6850)
#define CLASS_1_BE27584A7A63E572_METHOD_1_A8736581D3B57A97_OFFSET UNITYSDK_OFFSET(0x16CAA510)
#define CLASS_1_BE27584A7A63E572_METHOD_1_BE74C7C22318A58D_OFFSET UNITYSDK_OFFSET(0x16CA8790)
#define CLASS_1_BE27584A7A63E572_METHOD_1_C873D971818BE8B2_OFFSET UNITYSDK_OFFSET(0x16CA7DE0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_CD076E188DEE5884_OFFSET UNITYSDK_OFFSET(0x16CA9B50)
#define CLASS_1_BE27584A7A63E572_METHOD_1_CE944E12A64032F6_OFFSET UNITYSDK_OFFSET(0x16CAA7C0)
#define CLASS_1_BE27584A7A63E572_METHOD_1_F71ABDCE0839D91B_OFFSET UNITYSDK_OFFSET(0x16CAAE10)
#define CLASS_1_BE27584A7A63E572_METHOD_1_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x16CA7C30)
#define CLASS_1_BE27584A7A63E572_METHOD_1_FDA000EFD9B5576B_OFFSET UNITYSDK_OFFSET(0x16CAAC20)
#define CLASS_1_BE27584A7A63E572__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA68B0)

inline static constexpr unsigned int Class_1_BE27584A7A63E572_TypeDefinitionIndex = 77338;

class Class_1_BE27584A7A63E572 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* AJKKAKMLHND; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*>* DJKCDMJGLIP; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::Int32, ::System::String*>>* JFMJKAGKGPC; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason>* MOPAAKDPILE; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::MonoEffect*, ::System::UInt32>* IJEJEGFJACH; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* GIFBCMHFGFM; // 0x38
	::Class_1_E3EC8A06BA0E94D6* HMKJADKFFEF; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::RPG::GameCore::ChenLingBattleEffectConfig*, ::System::Int32>>* AHDCNHCPKAP; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* GGLCDLGHDLL; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::LinkedListNode_1<::RPG::Client::MonoEffect*>*>* CGHPJDOGGAG; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TriggerEffectParamsRef>* NEBGLFDCODO; // 0x60
	::Class_2_2090B77B5C7838F2* FKINCGODJEP; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>*>* NKDNNHIPHFF; // 0x70
	::System::Boolean PPIGLCIEIIM; // 0x78

	::System::Void _ctor(::Class_2_2090B77B5C7838F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572__CTOR_OFFSET))(this, a1);
	}

	::Class_1_E3EC8A06BA0E94D6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E3EC8A06BA0E94D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_AA3647312B318D6B* Method_1_9649D3A43F21DC0C(::System::Int32 a1)
	{
		return ((::Class_1_AA3647312B318D6B*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_9649D3A43F21DC0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_1_85709A4C92AC0666(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_85709A4C92AC0666_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffect* Method_1_C873D971818BE8B2(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79* a3)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_C873D971818BE8B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_254BE84F18F77681(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::MonoEffect* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_254BE84F18F77681_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CD076E188DEE5884(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_CD076E188DEE5884_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_285C0AA90F3B655D(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_285C0AA90F3B655D_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_FD647A48096EB173_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_94D5B2EA0DF0911E(::Class_2_6B60059019300BAD* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_94D5B2EA0DF0911E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A8736581D3B57A97(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_A8736581D3B57A97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4CFC5F9F40A751DF(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_4CFC5F9F40A751DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E1158F0941AAA1F(::System::UInt32 a1, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_8E1158F0941AAA1F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_528C605CC7F64100(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_528C605CC7F64100_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_037B8DF93C1D4AA3(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::MonoEffect* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_037B8DF93C1D4AA3_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::TriggerEffectParamsRef Method_1_0F4C1A652C52CE85(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79* a3)
	{
		return ((::RPG::Client::TriggerEffectParamsRef(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::Class_1_BE27584A7A63E572_Class_1_A87E183E78F1FA79*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_0F4C1A652C52CE85_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3E57985EFE74CB15(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_3E57985EFE74CB15_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Int32, ::System::String*> Method_1_FDA000EFD9B5576B(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::String*>(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_FDA000EFD9B5576B_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Int32, ::System::String*> Method_1_8ACC1324909FD20B(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::String*>(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_8ACC1324909FD20B_OFFSET))(this, a1, a2);
	}

	::Class_1_BE27584A7A63E572_ReplayOldestResult Method_1_BE74C7C22318A58D(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::TriggerEffectParams* a3, ::RPG::Client::MonoEffect*& a4)
	{
		return ((::Class_1_BE27584A7A63E572_ReplayOldestResult(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::TriggerEffectParams*, ::RPG::Client::MonoEffect*&))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_BE74C7C22318A58D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_1308E254FCA7A667(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_1308E254FCA7A667_OFFSET))(this, a1);
	}

	::System::Void Method_1_24681ACAB63286CB(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::MonoEffect* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_24681ACAB63286CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CE944E12A64032F6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_CE944E12A64032F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_F71ABDCE0839D91B(::System::ValueTuple_2<::System::Int32, ::System::String*> a1, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572_METHOD_1_F71ABDCE0839D91B_OFFSET))(this, a1, a2);
	}
};
