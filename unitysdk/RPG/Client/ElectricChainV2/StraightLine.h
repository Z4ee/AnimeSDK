#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Line.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x959A1B0)
#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_METHOD_2_DF64B90BA25AAE64_OFFSET UNITYSDK_OFFSET(0x959A080)
#define RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x9596AE0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int StraightLine_TypeDefinitionIndex = 60320;

	class StraightLine : public ::RPG::Client::ElectricChainV2::Line
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_DF64B90BA25AAE64(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_METHOD_2_DF64B90BA25AAE64_OFFSET))(this, a1);
		}

		::System::Single Method_2_3422201382CE593B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_STRAIGHTLINE_METHOD_2_3422201382CE593B_OFFSET))(this);
		}
	};
}
