#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

class Class_1_47AACC0D1B9F3610;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_064E3E42E5FDBEE0_METHOD_2_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0xBF8FAA0)
#define CLASS_2_064E3E42E5FDBEE0_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0xBF8F560)
#define CLASS_2_064E3E42E5FDBEE0_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xBF8F9E0)
#define CLASS_2_064E3E42E5FDBEE0_METHOD_2_674D9307054D0ED0_OFFSET UNITYSDK_OFFSET(0xBF8F840)
#define CLASS_2_064E3E42E5FDBEE0_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xBF8F630)
#define CLASS_2_064E3E42E5FDBEE0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBF8FC10)
#define CLASS_2_064E3E42E5FDBEE0_METHOD_2_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xBF8FC70)
#define CLASS_2_064E3E42E5FDBEE0_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xBF8FB20)
#define CLASS_2_064E3E42E5FDBEE0__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBF8F400)
#define CLASS_2_064E3E42E5FDBEE0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF8F3F0)

inline static constexpr unsigned int Class_2_064E3E42E5FDBEE0_TypeDefinitionIndex = 69576;

class Class_2_064E3E42E5FDBEE0 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	::Class_1_47AACC0D1B9F3610* HPPFGAJLAFG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_064E3E42E5FDBEE0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_064E3E42E5FDBEE0__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30E134A2CEDB3A22(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_064E3E42E5FDBEE0_METHOD_2_30E134A2CEDB3A22_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_064E3E42E5FDBEE0_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Void Method_2_674D9307054D0ED0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_064E3E42E5FDBEE0_METHOD_2_674D9307054D0ED0_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_064E3E42E5FDBEE0_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_064E3E42E5FDBEE0_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Class_1_47AACC0D1B9F3610* Method_2_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_47AACC0D1B9F3610*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_064E3E42E5FDBEE0_METHOD_2_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_064E3E42E5FDBEE0_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::Class_1_47AACC0D1B9F3610* Method_2_1561BFA77991A03A()
	{
		return ((::Class_1_47AACC0D1B9F3610*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_064E3E42E5FDBEE0_METHOD_2_1561BFA77991A03A_OFFSET))(this);
	}
};
