#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client { class Effect_WorldWireFrame; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_5C900C6F2A01479C_METHOD_2_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0x15E351B0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_2218F186729D7675_OFFSET UNITYSDK_OFFSET(0x15E33770)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x15E358F0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x15E33CA0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_49359CA8B919527C_OFFSET UNITYSDK_OFFSET(0x15E33700)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_4BAE91CE930BB524_OFFSET UNITYSDK_OFFSET(0x15E33EF0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_884EBA569E8237DC_OFFSET UNITYSDK_OFFSET(0x15E325B0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x15E34FF0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x15E34390)
#define CLASS_2_5C900C6F2A01479C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E35C70)

inline static constexpr unsigned int Class_2_5C900C6F2A01479C_TypeDefinitionIndex = 67211;

class Class_2_5C900C6F2A01479C : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x18
	::UnityEngine::Vector3 Field_2_1; // 0x24
	::System::Single Field_2_2; // 0x30
	::System::Single Field_2_3; // 0x34
	::System::Single Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x3C
	::UnityEngine::Vector3 Field_2_6; // 0x40
	::UnityEngine::Color Field_2_7; // 0x4C
	::UnityEngine::Vector3Int Field_2_8; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_884EBA569E8237DC(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_884EBA569E8237DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BAE91CE930BB524()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_4BAE91CE930BB524_OFFSET))(this);
	}

	::System::Void Method_2_EEED34E9AAC26D51()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_EEED34E9AAC26D51_OFFSET))(this);
	}

	::System::Void Method_2_2218F186729D7675(::UnityEngine::LineRenderer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_2218F186729D7675_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_20E8013D4AB67E17()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_20E8013D4AB67E17_OFFSET))(this);
	}

	::RPG::Client::Effect_WorldWireFrame* Method_2_49359CA8B919527C()
	{
		return ((::RPG::Client::Effect_WorldWireFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_49359CA8B919527C_OFFSET))(this);
	}
};
