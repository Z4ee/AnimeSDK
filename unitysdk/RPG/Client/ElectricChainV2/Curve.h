#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Line.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BezierCurve; }

#define RPG_CLIENT_ELECTRICCHAINV2_CURVE_METHOD_2_0A99B5F334D75624_OFFSET UNITYSDK_OFFSET(0xCE2BA00)
#define RPG_CLIENT_ELECTRICCHAINV2_CURVE_METHOD_2_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0xCE2BD40)
#define RPG_CLIENT_ELECTRICCHAINV2_CURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE2BDC0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Curve_TypeDefinitionIndex = 73496;

	class Curve : public ::RPG::Client::ElectricChainV2::Line
	{
	public:
		::RPG::Client::BezierCurve* curve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_0A99B5F334D75624(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CURVE_METHOD_2_0A99B5F334D75624_OFFSET))(this, a1);
		}

		::System::Single Method_2_124E7DAB85EAFECD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CURVE_METHOD_2_124E7DAB85EAFECD_OFFSET))(this);
		}
	};
}
