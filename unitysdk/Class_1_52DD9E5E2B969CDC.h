#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_52DD9E5E2B969CDC_EPose.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_EPositionPoseType.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6B7F9A1269220FA8;
class Class_1_E85115A4C331A9DA;
namespace RPG::Client { class AssemNPCRandomCombinationCollection; }
namespace RPG::Client { class AudienceGroupInstance; }
namespace RPG::Client { class AudienceMoodMapConfig; }
namespace RPG::Client { class AudiencePrefabConfig; }
namespace RPG::Client { class AudiencePrefabSpecialTag_Blink; }
namespace RPG::Client::CrowdAnimator { class CrowdInstance; }
namespace RPG::Client::CrowdAnimator { class CrowdVariant; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class CharacterAtlasFaceSet; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class ScriptableObject; }

#define CLASS_1_52DD9E5E2B969CDC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1379A6C0)
#define CLASS_1_52DD9E5E2B969CDC_GET_AUDIENCEMOODMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1379A530)
#define CLASS_1_52DD9E5E2B969CDC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1379A570)
#define CLASS_1_52DD9E5E2B969CDC_GET_CROWDVARIANTPATH_OFFSET UNITYSDK_OFFSET(0x1379A510)
#define CLASS_1_52DD9E5E2B969CDC_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1379A590)
#define CLASS_1_52DD9E5E2B969CDC_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x1379A550)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_083EFC24EE1811E3_OFFSET UNITYSDK_OFFSET(0x13799740)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x1379B420)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0x13799E70)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x13799C70)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_13263CB5FCEC31EC_OFFSET UNITYSDK_OFFSET(0x1379AD40)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_17773E5AAC0D5C9C_OFFSET UNITYSDK_OFFSET(0x1379A4A0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x1379A7D0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1379ADF0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_279FA27EC5CC6ADB_OFFSET UNITYSDK_OFFSET(0x1379A5B0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_2F46EF9FA91E7517_OFFSET UNITYSDK_OFFSET(0x1379AF00)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x1379AC70)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_6130BC24956B5935_OFFSET UNITYSDK_OFFSET(0x1379AC20)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_6A264EE8243CFA05_OFFSET UNITYSDK_OFFSET(0x137998E0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_83F4F6CFBC2434C6_OFFSET UNITYSDK_OFFSET(0x1379A780)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_8D595942D57F40CD_OFFSET UNITYSDK_OFFSET(0x1379A420)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_954D0A030E5BF9D8_OFFSET UNITYSDK_OFFSET(0x13799FA0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_9968CD0165DD7DC7_OFFSET UNITYSDK_OFFSET(0x1379AFF0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x1379AE50)
#define CLASS_1_52DD9E5E2B969CDC_SET_AUDIENCEMOODMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1379A540)
#define CLASS_1_52DD9E5E2B969CDC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1379A580)
#define CLASS_1_52DD9E5E2B969CDC_SET_CROWDVARIANTPATH_OFFSET UNITYSDK_OFFSET(0x1379A520)
#define CLASS_1_52DD9E5E2B969CDC_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1379A5A0)
#define CLASS_1_52DD9E5E2B969CDC_SET_PREFAB_OFFSET UNITYSDK_OFFSET(0x1379A560)
#define CLASS_1_52DD9E5E2B969CDC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1379B4A0)
#define CLASS_1_52DD9E5E2B969CDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1379B490)

inline static constexpr unsigned int Class_1_52DD9E5E2B969CDC_TypeDefinitionIndex = 64660;

class Class_1_52DD9E5E2B969CDC : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52DD9E5E2B969CDC_TypeDefinitionIndex)->GetStaticField(0x57080);
	}
	// static const ::System::Single Field_1_1; // 0x0
	::System::String* _CrowdVariantPath_k__BackingField; // 0x10
	::Class_1_6B7F9A1269220FA8* Field_1_3; // 0x18
	::UnityEngine::CapsuleCollider* Field_1_4; // 0x20
	::RPG::Client::CrowdAnimator::CrowdInstance* _Instance_k__BackingField; // 0x28
	::System::String* _AudienceMoodMapConfigPath_k__BackingField; // 0x30
	::RPG::Client::AudienceMoodMapConfig* _Config_k__BackingField; // 0x38
	::RPG::Client::CrowdAnimator::CrowdVariant* _Prefab_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::Class_1_E85115A4C331A9DA*>* Field_1_9; // 0x48
	::System::String* Field_1_10; // 0x50
	::System::String* Field_1_11; // 0x58
	::RPG::Client::AudienceGroupInstance* Field_1_12; // 0x60
	::Class_1_52DD9E5E2B969CDC_EPose Field_1_13; // 0x68
	::UnityEngine::Quaternion Field_1_14; // 0x6C
	::RPG::GameCore::NPCBodySize Field_1_15; // 0x7C
	::System::Single Field_1_16; // 0x80
	::System::Boolean Field_1_17; // 0x84
	::RPG::Client::AudienceStanceConfig_EPositionPoseType Field_1_18; // 0x88
	::UnityEngine::Vector3 Field_1_19; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC__CCTOR_OFFSET))();
	}

	::System::Void Method_1_083EFC24EE1811E3(::System::String* a1, ::RPG::Client::AudiencePrefabConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AudiencePrefabConfig*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_083EFC24EE1811E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_1_0D3455A2B8A3E6D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_0D3455A2B8A3E6D4_OFFSET))(this);
	}

	::System::Void Method_1_6A264EE8243CFA05(::System::String* a1, ::RPG::Client::AudiencePrefabSpecialTag_Blink* a2, ::RPG::GameCore::AdventureCharacterConfig* a3, ::UnityEngine::ScriptableObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AudiencePrefabSpecialTag_Blink*, ::RPG::GameCore::AdventureCharacterConfig*, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_6A264EE8243CFA05_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8D595942D57F40CD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_8D595942D57F40CD_OFFSET))(this, a1);
	}

	static ::System::ValueTuple_2<::Il2CppArray<::System::String*>*, ::RPG::GameCore::CharacterAtlasFaceSet*> Method_1_954D0A030E5BF9D8(::System::String* a1, ::RPG::Client::AssemNPCRandomCombinationCollection* a2, ::RPG::GameCore::AdventureCharacterConfig* a3)
	{
		return ((::System::ValueTuple_2<::Il2CppArray<::System::String*>*, ::RPG::GameCore::CharacterAtlasFaceSet*>(*)(::System::String*, ::RPG::Client::AssemNPCRandomCombinationCollection*, ::RPG::GameCore::AdventureCharacterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_954D0A030E5BF9D8_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_17773E5AAC0D5C9C(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_17773E5AAC0D5C9C_OFFSET))(a1);
	}

	::System::String* get_CrowdVariantPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_GET_CROWDVARIANTPATH_OFFSET))(this);
	}

	::System::Void set_CrowdVariantPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_SET_CROWDVARIANTPATH_OFFSET))(this, a1);
	}

	::System::String* get_AudienceMoodMapConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_GET_AUDIENCEMOODMAPCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_AudienceMoodMapConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_SET_AUDIENCEMOODMAPCONFIGPATH_OFFSET))(this, a1);
	}

	::RPG::Client::CrowdAnimator::CrowdVariant* get_Prefab()
	{
		return ((::RPG::Client::CrowdAnimator::CrowdVariant*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_GET_PREFAB_OFFSET))(this);
	}

	::System::Void set_Prefab(::RPG::Client::CrowdAnimator::CrowdVariant* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_SET_PREFAB_OFFSET))(this, a1);
	}

	::RPG::Client::AudienceMoodMapConfig* get_Config()
	{
		return ((::RPG::Client::AudienceMoodMapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::AudienceMoodMapConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceMoodMapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_SET_CONFIG_OFFSET))(this, a1);
	}

	::RPG::Client::CrowdAnimator::CrowdInstance* get_Instance()
	{
		return ((::RPG::Client::CrowdAnimator::CrowdInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_GET_INSTANCE_OFFSET))(this);
	}

	::System::Void set_Instance(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_SET_INSTANCE_OFFSET))(this, a1);
	}

	::System::Void Method_1_279FA27EC5CC6ADB(::System::String* a1, ::RPG::Client::AudienceGroupInstance* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::RPG::GameCore::NPCBodySize a5, ::RPG::Client::AudienceStanceConfig_EPositionPoseType a6, ::System::String* a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AudienceGroupInstance*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::GameCore::NPCBodySize, ::RPG::Client::AudienceStanceConfig_EPositionPoseType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_279FA27EC5CC6ADB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_83F4F6CFBC2434C6(::RPG::Client::CrowdAnimator::CrowdVariant* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_83F4F6CFBC2434C6_OFFSET))(this, a1);
	}

	::System::Void Method_1_6130BC24956B5935(::RPG::Client::AudienceMoodMapConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceMoodMapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_6130BC24956B5935_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Single Method_1_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_570C5557A774C69E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF2CFBAAD2629B3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_AF2CFBAAD2629B3B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2F46EF9FA91E7517(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_2F46EF9FA91E7517_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_13263CB5FCEC31EC(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_13263CB5FCEC31EC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9968CD0165DD7DC7(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_9968CD0165DD7DC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}
};
