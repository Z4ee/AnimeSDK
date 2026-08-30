#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAVariantRes_1.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_BAPARTVARIANTREF__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFFE00)

namespace RPG::Client
{
	inline static constexpr unsigned int BAPartVariantRef_TypeDefinitionIndex = 69482;

	class BAPartVariantRef : public ::System::Object
	{
	public:
		::RPG::Client::WeakAssetReference skinmesh; // 0x10
		::RPG::Client::BAVariantRes_1<::UnityEngine::Mesh*> meshRes; // 0x20
		::RPG::Client::IAssetOperation* meshLoadOperation; // 0x30
		::RPG::Client::WeakAssetReference material; // 0x38
		::RPG::Client::BAVariantRes_1<::UnityEngine::Material*> matRes; // 0x48
		::RPG::Client::IAssetOperation* matLoadOperation; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTREF__CTOR_OFFSET))(this);
		}
	};
}
