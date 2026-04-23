#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class NpcBodySizeInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NPCBODYSIZECONFIG_METHOD_3_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xABDEE50)
#define RPG_CLIENT_NPCBODYSIZECONFIG_METHOD_3_A79C59C7B8291CFC_OFFSET UNITYSDK_OFFSET(0xABDF0D0)
#define RPG_CLIENT_NPCBODYSIZECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xABDF1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int NpcBodySizeConfig_TypeDefinitionIndex = 55397;

	class NpcBodySizeConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::NpcBodySizeInfo*>* NpcBodySizeInfos; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::RPG::Client::NpcBodySizeInfo*>* _dicNpcBodySizeConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCBODYSIZECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_8F7825DAFFB9B517()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCBODYSIZECONFIG_METHOD_3_8F7825DAFFB9B517_OFFSET))(this);
		}

		::RPG::Client::NpcBodySizeInfo* Method_3_A79C59C7B8291CFC(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::RPG::Client::NpcBodySizeInfo*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCBODYSIZECONFIG_METHOD_3_A79C59C7B8291CFC_OFFSET))(this, a1);
		}
	};
}
