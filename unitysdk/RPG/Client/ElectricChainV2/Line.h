#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ElectricChainV2 { class Shape; }

#define RPG_CLIENT_ELECTRICCHAINV2_LINE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AC5BEF0)
#define RPG_CLIENT_ELECTRICCHAINV2_LINE_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1AC5D5A0)
#define RPG_CLIENT_ELECTRICCHAINV2_LINE_METHOD_1_CA075F4B01D48113_OFFSET UNITYSDK_OFFSET(0x1AC5C780)
#define RPG_CLIENT_ELECTRICCHAINV2_LINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC57120)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Line_TypeDefinitionIndex = 73492;

	class Line : public ::System::Object
	{
	public:
		::RPG::Client::ElectricChainV2::Shape* emitter; // 0x10
		::RPG::Client::ElectricChainV2::Shape* receiver; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_LINE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_CA075F4B01D48113(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_LINE_METHOD_1_CA075F4B01D48113_OFFSET))(this, a1);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_LINE_GET_LENGTH_OFFSET))(this);
		}

		::System::Void Method_1_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_LINE_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
		}
	};
}
