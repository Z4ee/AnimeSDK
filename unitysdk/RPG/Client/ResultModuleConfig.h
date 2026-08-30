#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

namespace RPG::Client { class BlendCurveRange; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RESULTMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0x17987670)
#define RPG_CLIENT_RESULTMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x179876C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ResultModuleConfig_TypeDefinitionIndex = 69648;

	class ResultModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single CutShotAngle; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::BlendCurveRange*>* BlendRangeList; // 0x20
		::System::Single ResultShotAnimOffsetLerpRatio; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESULTMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESULTMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
