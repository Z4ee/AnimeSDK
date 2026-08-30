#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client { class Effect_WorldWireFrame; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_AFEA9649AE987F13_METHOD_2_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0x17A99200)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_2E772D39299981DF_OFFSET UNITYSDK_OFFSET(0x17A96AC0)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x17A99940)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x17A97FC0)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_49359CA8B919527C_OFFSET UNITYSDK_OFFSET(0x17A97A60)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_4BAE91CE930BB524_OFFSET UNITYSDK_OFFSET(0x17A98210)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_78037B64B814568E_OFFSET UNITYSDK_OFFSET(0x17A986B0)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x17A99040)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_AFF29A1C453C49C4_OFFSET UNITYSDK_OFFSET(0x17A97AD0)
#define CLASS_2_AFEA9649AE987F13__CTOR_OFFSET UNITYSDK_OFFSET(0x17A99CC0)

inline static constexpr unsigned int Class_2_AFEA9649AE987F13_TypeDefinitionIndex = 70330;

class Class_2_AFEA9649AE987F13 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Vector3 OBOJFILDNNK; // 0x18
	::UnityEngine::Vector3 EGLJEGLNHNC; // 0x24
	::System::Single OKDIMGDEHME; // 0x30
	::UnityEngine::Vector3 IOBODKKALPM; // 0x34
	::System::Single AHIPPLMCPOE; // 0x40
	::System::Single OLBDMLEMLOM; // 0x44
	::UnityEngine::Color PEDKKNCOHDE; // 0x48
	::UnityEngine::Vector3Int BNAOJHPIJOE; // 0x58
	::System::Single PCCOABHBGDE; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2E772D39299981DF(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_2E772D39299981DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BAE91CE930BB524()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_4BAE91CE930BB524_OFFSET))(this);
	}

	::System::Void Method_2_78037B64B814568E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_78037B64B814568E_OFFSET))(this);
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
