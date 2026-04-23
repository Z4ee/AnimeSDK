#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client { class Effect_WorldWireFrame; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_5C900C6F2A01479C_METHOD_2_154D40D3FB77E960_OFFSET UNITYSDK_OFFSET(0x9A22900)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_2218F186729D7675_OFFSET UNITYSDK_OFFSET(0x9A238C0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x9A24370)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x9A24CB0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x9A258E0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x9A25510)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_C9F7E8FA6CB674C5_OFFSET UNITYSDK_OFFSET(0x9A23850)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x9A23CB0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_F70DC5473DF715AD_OFFSET UNITYSDK_OFFSET(0x9A23EF0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x9A24E30)
#define CLASS_2_5C900C6F2A01479C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A25880)

inline static constexpr unsigned int Class_2_5C900C6F2A01479C_TypeDefinitionIndex = 64868;

class Class_2_5C900C6F2A01479C : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single Field_2_6; // 0x18
	::UnityEngine::Vector3 Field_2_4; // 0x1C
	::System::Single Field_2_0; // 0x28
	::UnityEngine::Vector3Int Field_2_1; // 0x2C
	::UnityEngine::Color Field_2_5; // 0x38
	::UnityEngine::Vector3 Field_2_3; // 0x48
	::UnityEngine::Vector3 Field_2_2; // 0x54
	::System::Single Field_2_7; // 0x60
	::System::Single Field_2_8; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_154D40D3FB77E960(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_154D40D3FB77E960_OFFSET))(this, a1);
	}

	::System::Void Method_2_F70DC5473DF715AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_F70DC5473DF715AD_OFFSET))(this);
	}

	::System::Void Method_2_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_2_2218F186729D7675(::UnityEngine::LineRenderer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_2218F186729D7675_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_FFD65E4FEAD3C019_OFFSET))(this);
	}

	::RPG::Client::Effect_WorldWireFrame* Method_2_C9F7E8FA6CB674C5()
	{
		return ((::RPG::Client::Effect_WorldWireFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_C9F7E8FA6CB674C5_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
