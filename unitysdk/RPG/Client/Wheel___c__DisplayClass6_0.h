#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { class Wheel; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_WHEEL___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17417140)
#define RPG_CLIENT_WHEEL___C__DISPLAYCLASS6_0__SETWHEELSICON_B__0_OFFSET UNITYSDK_OFFSET(0x17417340)

namespace RPG::Client
{
	inline static constexpr unsigned int Wheel___c__DisplayClass6_0_TypeDefinitionIndex = 67604;

	class Wheel___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::OnAssetOperationDelegate* __9__0; // 0x10
		::UnityEngine::MeshRenderer* meshRenderer; // 0x18
		::RPG::Client::Wheel* __4__this; // 0x20
		::System::Int32 i; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetWheelsIcon_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL___C__DISPLAYCLASS6_0__SETWHEELSICON_B__0_OFFSET))(this, a1);
		}
	};
}
