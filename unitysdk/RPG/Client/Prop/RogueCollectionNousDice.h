#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_4A90D78D94DB1347;
namespace System { class String; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_METHOD_5_8A9E4FD6EC45F453_OFFSET UNITYSDK_OFFSET(0x14F3B690)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14F3B790)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14F3B740)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_SETNOUSDICEBRANCH_OFFSET UNITYSDK_OFFSET(0x14F3B290)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE__CTOR_OFFSET UNITYSDK_OFFSET(0x14F3B860)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueCollectionNousDice_TypeDefinitionIndex = 74992;

	class RogueCollectionNousDice : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 BranchID; // 0x18
		::UnityEngine::MeshRenderer* Field_5_1; // 0x20
		::UnityEngine::MeshRenderer* Field_5_2; // 0x28
		::Class_1_4A90D78D94DB1347* Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE__CTOR_OFFSET))(this);
		}

		::System::Void SetNousDiceBranch(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_SETNOUSDICEBRANCH_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* Method_5_8A9E4FD6EC45F453(::System::String* a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_METHOD_5_8A9E4FD6EC45F453_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONNOUSDICE_ONDESTROY_OFFSET))(this);
		}
	};
}
