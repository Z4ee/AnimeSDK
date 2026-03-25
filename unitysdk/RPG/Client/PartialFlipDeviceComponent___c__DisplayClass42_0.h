#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client { class PartialFlipDeviceComponent; }

#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F19370)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS42_0___ONREFRESHSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x9F19900)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS42_0___ONREFRESHSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x9F19930)

namespace RPG::Client
{
	inline static constexpr unsigned int PartialFlipDeviceComponent___c__DisplayClass42_0_TypeDefinitionIndex = 60089;

	class PartialFlipDeviceComponent___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::RPG::Client::PartialFlipDeviceComponent* __4__this; // 0x10
		::System::UInt32 runtimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnRefreshState_b__0(::RPG::Client::FlipDevicePoint* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FlipDevicePoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS42_0___ONREFRESHSTATE_B__0_OFFSET))(this, device);
		}

		::System::Boolean __OnRefreshState_b__1(::RPG::Client::FlipDevicePoint* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FlipDevicePoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS42_0___ONREFRESHSTATE_B__1_OFFSET))(this, device);
		}
	};
}
