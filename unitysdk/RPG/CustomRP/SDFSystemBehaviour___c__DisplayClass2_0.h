#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SDFSectorCoord.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::CustomRP { class SDFSystemBehaviour; }

#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE44CDF0)
#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR___C__DISPLAYCLASS2_0__ONSDFSTREAMING_B__0_OFFSET UNITYSDK_OFFSET(0xE44D310)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SDFSystemBehaviour___c__DisplayClass2_0_TypeDefinitionIndex = 52164;

	class SDFSystemBehaviour___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::CustomRP::SDFSystemBehaviour* __4__this; // 0x10
		::UnityEngine::SDFSectorCoord coord; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnSDFStreaming_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR___C__DISPLAYCLASS2_0__ONSDFSTREAMING_B__0_OFFSET))(this, a1);
		}
	};
}
