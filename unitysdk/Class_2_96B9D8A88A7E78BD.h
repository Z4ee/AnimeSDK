#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_3_A2BC57CDDA246645_Mode.h"

class Class_1_AB817CB39E494C61;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_4835C9A345E71E46;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0xC425BC0)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_5857FF99C65608F5_OFFSET UNITYSDK_OFFSET(0xC425FE0)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_6CB1D198EE7238C6_OFFSET UNITYSDK_OFFSET(0xC425F60)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC425B10)
#define CLASS_2_96B9D8A88A7E78BD_METHOD_2_C27BA6BD7BDCF785_OFFSET UNITYSDK_OFFSET(0xC425DA0)
#define CLASS_2_96B9D8A88A7E78BD__CTOR_OFFSET UNITYSDK_OFFSET(0xC426080)
#define CLASS_2_96B9D8A88A7E78BD__ONBIND_OFFSET UNITYSDK_OFFSET(0xC425840)
#define CLASS_2_96B9D8A88A7E78BD__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC425D50)

inline static constexpr unsigned int Class_2_96B9D8A88A7E78BD_TypeDefinitionIndex = 71258;

class Class_2_96B9D8A88A7E78BD : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* NFENFKACJNL; // 0x0
	::UnityEngine::Transform* PGLBOIHNJPJ; // 0x60
	::UnityEngine::Transform* MDBBPBBMCEG; // 0x68
	::UnityEngine::Transform* AMJPKCBOLEK; // 0x70
	::UnityEngine::Transform* KMHLHECIMOF; // 0x78
	::UnityEngine::Animation* MBONPFHGDFB; // 0x80
	::Class_1_AB817CB39E494C61* PKIGHMIMJLF; // 0x88
	::UnityEngine::Transform* DFKPFBCFOJJ; // 0x90
	::UnityEngine::Transform* HLADPKLGPEI; // 0x98
	::Class_2_4835C9A345E71E46* FGPADGFFLIC; // 0xA0
	::Class_3_A2BC57CDDA246645_Mode BHJDJDPLCLP; // 0xA8
	::System::Boolean JIEJLKLFJOL; // 0xAC
	::System::Single DPLDFNFHAJL; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6CB1D198EE7238C6(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_6CB1D198EE7238C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C27BA6BD7BDCF785(::System::Boolean a1, ::Class_3_A2BC57CDDA246645_Mode a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_A2BC57CDDA246645_Mode))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_C27BA6BD7BDCF785_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5857FF99C65608F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_96B9D8A88A7E78BD_METHOD_2_5857FF99C65608F5_OFFSET))(this, a1);
	}
};
