#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_ARTNODECONFIG_GETASSETPATHWITHLOD_OFFSET UNITYSDK_OFFSET(0x9D39DC0)
#define RPG_CLIENT_ARTNODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9D39E70)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtNodeConfig_TypeDefinitionIndex = 62988;

	class ArtNodeConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* ArtNodeRootHierarchyPath; // 0x0
		// static const ::System::String* ArtNodeHierarchyPath; // 0x0
		::Il2CppArray<::System::String*>* ArtAssetPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNODECONFIG__CTOR_OFFSET))(this);
		}

		::System::String* GetAssetPathWithLod(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNODECONFIG_GETASSETPATHWITHLOD_OFFSET))(this, a1);
		}
	};
}
