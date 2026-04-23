#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DCE0B4466338F1EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A0D3C0)
#define CLASS_2_DCE0B4466338F1EA_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12A0DDE0)
#define CLASS_2_DCE0B4466338F1EA_METHOD_2_5BDEEBE6AC23AC70_OFFSET UNITYSDK_OFFSET(0x12A0DD90)
#define CLASS_2_DCE0B4466338F1EA_METHOD_2_8649317719F42121_OFFSET UNITYSDK_OFFSET(0x12A0E150)
#define CLASS_2_DCE0B4466338F1EA_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x12A0E400)
#define CLASS_2_DCE0B4466338F1EA_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x12A0D430)
#define CLASS_2_DCE0B4466338F1EA_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x12A0D350)
#define CLASS_2_DCE0B4466338F1EA_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x12A0DFA0)
#define CLASS_2_DCE0B4466338F1EA_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x12A0DF30)
#define CLASS_2_DCE0B4466338F1EA_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12A0E0B0)
#define CLASS_2_DCE0B4466338F1EA__CTOR_OFFSET UNITYSDK_OFFSET(0x12A0E3F0)
#define CLASS_2_DCE0B4466338F1EA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A0E470)

inline static constexpr unsigned int Class_2_DCE0B4466338F1EA_TypeDefinitionIndex = 64416;

class Class_2_DCE0B4466338F1EA : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Transform* Field_2_4; // 0x18
	::UnityEngine::Transform* Field_2_3; // 0x20
	::UnityEngine::Vector4 Field_2_2; // 0x28
	::System::Boolean Field_2_0; // 0x38
	::UnityEngine::Vector4 Field_2_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_8649317719F42121(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA_METHOD_2_8649317719F42121_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginMahJongItem* Method_2_5BDEEBE6AC23AC70()
	{
		return ((::RPG::Client::MonoEffectPluginMahJongItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA_METHOD_2_5BDEEBE6AC23AC70_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCE0B4466338F1EA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
