#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Line.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_METHOD_2_527527A45EAD8A25_OFFSET UNITYSDK_OFFSET(0x18E18F00)
#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_METHOD_2_A93CA8A3372168B2_OFFSET UNITYSDK_OFFSET(0x18E19110)
#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E15560)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int StraightLine_TypeDefinitionIndex = 70194;

	class StraightLine : public ::RPG::Client::ElectricChainV2::Line
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_527527A45EAD8A25(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_METHOD_2_527527A45EAD8A25_OFFSET))(this, a1);
		}

		::System::Single Method_2_A93CA8A3372168B2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_METHOD_2_A93CA8A3372168B2_OFFSET))(this);
		}
	};
}
