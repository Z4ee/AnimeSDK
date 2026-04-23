#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { class Wheel; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_WHEEL___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C7ED0)
#define RPG_CLIENT_WHEEL___C__DISPLAYCLASS6_0__SETWHEELSICON_B__0_OFFSET UNITYSDK_OFFSET(0xB4C80B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Wheel___c__DisplayClass6_0_TypeDefinitionIndex = 65252;

	class Wheel___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::UnityEngine::MeshRenderer* meshRenderer; // 0x10
		::RPG::Client::Wheel* __4__this; // 0x18
		::RPG::Client::OnAssetOperationDelegate* __9__0; // 0x20
		::System::Int32 i; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetWheelsIcon_b__0(::RPG::Client::IAssetOperation* assetOpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL___C__DISPLAYCLASS6_0__SETWHEELSICON_B__0_OFFSET))(this, assetOpt);
		}
	};
}
