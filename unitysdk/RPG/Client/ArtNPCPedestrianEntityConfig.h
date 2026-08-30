#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_METHOD_3_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x1B32C130)
#define RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_METHOD_3_FFBBF9E1E02C75F2_OFFSET UNITYSDK_OFFSET(0x1B32BCE0)
#define RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32C7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtNPCPedestrianEntityConfig_TypeDefinitionIndex = 69198;

	class ArtNPCPedestrianEntityConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* IndependentQuality; // 0x18
		::Il2CppArray<::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*>* EntityInfos; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*>* _EntityMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* Method_3_FFBBF9E1E02C75F2(::System::String* a1)
		{
			return ((::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_METHOD_3_FFBBF9E1E02C75F2_OFFSET))(this, a1);
		}

		::System::Void Method_3_DA37DFE3A5BDA9F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_METHOD_3_DA37DFE3A5BDA9F4_OFFSET))(this);
		}
	};
}
