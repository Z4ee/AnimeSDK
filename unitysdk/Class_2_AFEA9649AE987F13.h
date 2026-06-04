#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client { class Effect_WorldWireFrame; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_AFEA9649AE987F13_METHOD_2_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0xA68DE50)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_2E772D39299981DF_OFFSET UNITYSDK_OFFSET(0xA68B720)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xA68E590)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0xA68CC10)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_49359CA8B919527C_OFFSET UNITYSDK_OFFSET(0xA68C6C0)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_4BAE91CE930BB524_OFFSET UNITYSDK_OFFSET(0xA68CE60)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_78037B64B814568E_OFFSET UNITYSDK_OFFSET(0xA68D300)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0xA68DC90)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_AFF29A1C453C49C4_OFFSET UNITYSDK_OFFSET(0xA68C730)
#define CLASS_2_AFEA9649AE987F13_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xA68E970)
#define CLASS_2_AFEA9649AE987F13__CTOR_OFFSET UNITYSDK_OFFSET(0xA68E910)

inline static constexpr unsigned int Class_2_AFEA9649AE987F13_TypeDefinitionIndex = 65794;

class Class_2_AFEA9649AE987F13 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single Field_2_0; // 0x18
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::UnityEngine::Vector3 Field_2_2; // 0x28
	::UnityEngine::Vector3 Field_2_3; // 0x34
	::System::Single Field_2_4; // 0x40
	::UnityEngine::Vector3Int Field_2_5; // 0x44
	::System::Single Field_2_6; // 0x50
	::UnityEngine::Color Field_2_7; // 0x54
	::System::Single Field_2_8; // 0x64

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

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_AFEA9649AE987F13_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}
};
