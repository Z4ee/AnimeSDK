#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client { class Effect_WorldWireFrame; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_AFEA9649AE987F13_METHOD_2_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0xB8772D0)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xB877A10)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0xB875F00)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_49359CA8B919527C_OFFSET UNITYSDK_OFFSET(0xB8759A0)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_4BAE91CE930BB524_OFFSET UNITYSDK_OFFSET(0xB876150)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_884EBA569E8237DC_OFFSET UNITYSDK_OFFSET(0xB874890)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0xB877110)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_AFF29A1C453C49C4_OFFSET UNITYSDK_OFFSET(0xB875A10)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0xB8765F0)
#define CLASS_2_AFEA9649AE987F13__CTOR_OFFSET UNITYSDK_OFFSET(0xB877D90)

inline static constexpr unsigned int Class_2_AFEA9649AE987F13_TypeDefinitionIndex = 70366;

class Class_2_AFEA9649AE987F13 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single AHIPPLMCPOE; // 0x18
	::System::Single OKDIMGDEHME; // 0x1C
	::UnityEngine::Vector3Int BNAOJHPIJOE; // 0x20
	::System::Single PCCOABHBGDE; // 0x2C
	::UnityEngine::Color PEDKKNCOHDE; // 0x30
	::UnityEngine::Vector3 OBOJFILDNNK; // 0x40
	::UnityEngine::Vector3 EGLJEGLNHNC; // 0x4C
	::System::Single OLBDMLEMLOM; // 0x58
	::UnityEngine::Vector3 IOBODKKALPM; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_884EBA569E8237DC(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_884EBA569E8237DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BAE91CE930BB524()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_4BAE91CE930BB524_OFFSET))(this);
	}

	::System::Void Method_2_EEED34E9AAC26D51()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_EEED34E9AAC26D51_OFFSET))(this);
	}

	::System::Void Method_2_AFF29A1C453C49C4(::UnityEngine::LineRenderer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_AFF29A1C453C49C4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_20E8013D4AB67E17()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_20E8013D4AB67E17_OFFSET))(this);
	}

	::RPG::Client::Effect_WorldWireFrame* Method_2_49359CA8B919527C()
	{
		return ((::RPG::Client::Effect_WorldWireFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_49359CA8B919527C_OFFSET))(this);
	}
};
