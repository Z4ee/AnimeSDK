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

#define CLASS_1_52DD9E5E2B969CDC_CLEAR_OFFSET UNITYSDK_OFFSET(0xD159D70)
#define CLASS_1_52DD9E5E2B969CDC_GET_AUDIENCEMOODMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xD159BE0)
#define CLASS_1_52DD9E5E2B969CDC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD159C20)
#define CLASS_1_52DD9E5E2B969CDC_GET_CROWDVARIANTPATH_OFFSET UNITYSDK_OFFSET(0xD159BC0)
#define CLASS_1_52DD9E5E2B969CDC_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD159C40)
#define CLASS_1_52DD9E5E2B969CDC_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0xD159C00)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xD15ACD0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_13263CB5FCEC31EC_OFFSET UNITYSDK_OFFSET(0xD15A3F0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_17773E5AAC0D5C9C_OFFSET UNITYSDK_OFFSET(0xD159B50)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xD159E80)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xD15A4A0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_279FA27EC5CC6ADB_OFFSET UNITYSDK_OFFSET(0xD159C60)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_2F46EF9FA91E7517_OFFSET UNITYSDK_OFFSET(0xD15A5B0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_498371003099FBD4_OFFSET UNITYSDK_OFFSET(0xD159020)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0xD15A320)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_6130BC24956B5935_OFFSET UNITYSDK_OFFSET(0xD15A2D0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0xD159550)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_83F4F6CFBC2434C6_OFFSET UNITYSDK_OFFSET(0xD159E30)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_8D595942D57F40CD_OFFSET UNITYSDK_OFFSET(0xD159AD0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_9968CD0165DD7DC7_OFFSET UNITYSDK_OFFSET(0xD15A6A0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_A7836646989A4215_OFFSET UNITYSDK_OFFSET(0xD159350)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0xD15A500)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_C5E8E8BC88564F4A_OFFSET UNITYSDK_OFFSET(0xD1596B0)
#define CLASS_1_52DD9E5E2B969CDC_METHOD_1_DBBCAD768C3A9030_OFFSET UNITYSDK_OFFSET(0xD158E80)
#define CLASS_1_52DD9E5E2B969CDC_SET_AUDIENCEMOODMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xD159BF0)
#define CLASS_1_52DD9E5E2B969CDC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD159C30)
#define CLASS_1_52DD9E5E2B969CDC_SET_CROWDVARIANTPATH_OFFSET UNITYSDK_OFFSET(0xD159BD0)
#define CLASS_1_52DD9E5E2B969CDC_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD159C50)
#define CLASS_1_52DD9E5E2B969CDC_SET_PREFAB_OFFSET UNITYSDK_OFFSET(0xD159C10)
#define CLASS_1_52DD9E5E2B969CDC__CCTOR_OFFSET UNITYSDK_OFFSET(0xD15AD50)
#define CLASS_1_52DD9E5E2B969CDC__CTOR_OFFSET UNITYSDK_OFFSET(0xD15AD40)

inline static constexpr unsigned int Class_1_52DD9E5E2B969CDC_TypeDefinitionIndex = 56495;

class Class_1_52DD9E5E2B969CDC : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52DD9E5E2B969CDC_TypeDefinitionIndex)->GetStaticField(0x24C20);
	}
	// static const ::System::Single Field_1_19; // 0x0
	::System::Collections::Generic::List_1<::Class_1_E85115A4C331A9DA*>* Field_1_3; // 0x10
	::System::String* Field_1_5; // 0x18
	::RPG::Client::AudienceMoodMapConfig* _Config_k__BackingField; // 0x20
	::RPG::Client::CrowdAnimator::CrowdInstance* _Instance_k__BackingField; // 0x28
	::System::String* _AudienceMoodMapConfigPath_k__BackingField; // 0x30
	::System::String* _CrowdVariantPath_k__BackingField; // 0x38
	::RPG::Client::AudienceGroupInstance* Field_1_6; // 0x40
	::UnityEngine::CapsuleCollider* Field_1_18; // 0x48
	::RPG::Client::CrowdAnimator::CrowdVariant* _Prefab_k__BackingField; // 0x50
	::Class_1_6B7F9A1269220FA8* Field_1_2; // 0x58
	::System::String* Field_1_0; // 0x60
	::Class_1_52DD9E5E2B969CDC_EPose Field_1_11; // 0x68
	::RPG::Client::AudienceStanceConfig_EPositionPoseType Field_1_10; // 0x6C
	::UnityEngine::Quaternion Field_1_8; // 0x70
	::RPG::GameCore::NPCBodySize Field_1_9; // 0x80
	::System::Boolean Field_1_1; // 0x84
	::System::Single Field_1_12; // 0x88
	::UnityEngine::Vector3 Field_1_7; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC__CCTOR_OFFSET))();
	}

	::System::Void Method_1_DBBCAD768C3A9030(::System::String* a1, ::RPG::Client::AudiencePrefabConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AudiencePrefabConfig*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_DBBCAD768C3A9030_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7836646989A4215()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_A7836646989A4215_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_1_498371003099FBD4(::System::String* a1, ::RPG::Client::AudiencePrefabSpecialTag_Blink* a2, ::RPG::GameCore::AdventureCharacterConfig* a3, ::UnityEngine::ScriptableObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AudiencePrefabSpecialTag_Blink*, ::RPG::GameCore::AdventureCharacterConfig*, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_498371003099FBD4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8D595942D57F40CD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_8D595942D57F40CD_OFFSET))(this, a1);
	}

	static ::System::ValueTuple_2<::Il2CppArray<::System::String*>*, ::RPG::GameCore::CharacterAtlasFaceSet*> Method_1_C5E8E8BC88564F4A(::System::String* a1, ::RPG::Client::AssemNPCRandomCombinationCollection* a2, ::RPG::GameCore::AdventureCharacterConfig* a3)
	{
		return ((::System::ValueTuple_2<::Il2CppArray<::System::String*>*, ::RPG::GameCore::CharacterAtlasFaceSet*>(*)(::System::String*, ::RPG::Client::AssemNPCRandomCombinationCollection*, ::RPG::GameCore::AdventureCharacterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_C5E8E8BC88564F4A_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_17773E5AAC0D5C9C(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_METHOD_1_17773E5AAC0D5C9C_OFFSET))(a1);
	}

	::System::String* get_CrowdVariantPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_GET_CROWDVARIANTPATH_OFFSET))(this);
	}

	::System::Void set_CrowdVariantPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_SET_CROWDVARIANTPATH_OFFSET))(this, value);
	}

	::System::String* get_AudienceMoodMapConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_GET_AUDIENCEMOODMAPCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_AudienceMoodMapConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_SET_AUDIENCEMOODMAPCONFIGPATH_OFFSET))(this, value);
	}

	::RPG::Client::CrowdAnimator::CrowdVariant* get_Prefab()
	{
		return ((::RPG::Client::CrowdAnimator::CrowdVariant*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_GET_PREFAB_OFFSET))(this);
	}

	::System::Void set_Prefab(::RPG::Client::CrowdAnimator::CrowdVariant* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_SET_PREFAB_OFFSET))(this, value);
	}

	::RPG::Client::AudienceMoodMapConfig* get_Config()
	{
		return ((::RPG::Client::AudienceMoodMapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::AudienceMoodMapConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceMoodMapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_SET_CONFIG_OFFSET))(this, value);
	}

	::RPG::Client::CrowdAnimator::CrowdInstance* get_Instance()
	{
		return ((::RPG::Client::CrowdAnimator::CrowdInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_GET_INSTANCE_OFFSET))(this);
	}

	::System::Void set_Instance(::RPG::Client::CrowdAnimator::CrowdInstance* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + CLASS_1_52DD9E5E2B969CDC_SET_INSTANCE_OFFSET))(this, value);
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
