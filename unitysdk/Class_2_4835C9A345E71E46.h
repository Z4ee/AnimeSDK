#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_AB817CB39E494C61;
class Class_1_DDDB57AA67C3A9EA;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_4835C9A345E71E46_METHOD_2_4B4F1EFFB5ED5DCB_OFFSET UNITYSDK_OFFSET(0x12CEB660)
#define CLASS_2_4835C9A345E71E46_METHOD_2_532795DE13579A51_OFFSET UNITYSDK_OFFSET(0x12CEB5B0)
#define CLASS_2_4835C9A345E71E46_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x12CEB340)
#define CLASS_2_4835C9A345E71E46_METHOD_2_880CDC91FBB7BE89_OFFSET UNITYSDK_OFFSET(0x12CEC040)
#define CLASS_2_4835C9A345E71E46_METHOD_2_A455E3B9C7451749_OFFSET UNITYSDK_OFFSET(0x12CEB700)
#define CLASS_2_4835C9A345E71E46_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x12CEB3D0)
#define CLASS_2_4835C9A345E71E46__CTOR_OFFSET UNITYSDK_OFFSET(0x12CEC380)
#define CLASS_2_4835C9A345E71E46__ONBIND_OFFSET UNITYSDK_OFFSET(0x12CEB070)

inline static constexpr unsigned int Class_2_4835C9A345E71E46_TypeDefinitionIndex = 71281;

class Class_2_4835C9A345E71E46 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* NFENFKACJNL; // 0x0
	::UnityEngine::UI::Image* NNOFBCONNJB; // 0x60
	::UnityEngine::Animation* GDEKNJJAIDF; // 0x68
	::UnityEngine::Transform* KLGICMFOPMB; // 0x70
	::UnityEngine::Transform* NJFPFGJBLMK; // 0x78
	::UnityEngine::UI::Text* OEDDILBGNBF; // 0x80
	::UnityEngine::Transform* LCOCMEGDCJP; // 0x88
	::UnityEngine::Transform* FFGCALGHHEI; // 0x90
	::UnityEngine::Animation* JEPJPCFCNED; // 0x98
	::UnityEngine::UI::Text* PCLBOPLDNDI; // 0xA0
	::UnityEngine::Transform* ACINICIHNBP; // 0xA8
	::UnityEngine::UI::Image* ACGAIFJHJOO; // 0xB0
	::Class_1_AB817CB39E494C61* PKIGHMIMJLF; // 0xB8
	::UnityEngine::Transform* ADEHCLGMPJN; // 0xC0
	::UnityEngine::Transform* EMIPBGCMPIA; // 0xC8
	::UnityEngine::Transform* OCJAAFKJCNL; // 0xD0
	::System::Single DPLDFNFHAJL; // 0xD8
	::UnityEngine::Color DAOFNJALEOL; // 0xDC
	::System::Boolean JIEJLKLFJOL; // 0xEC
	::UnityEngine::Color ABMKBPJEJDC; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4835C9A345E71E46__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4835C9A345E71E46__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4835C9A345E71E46_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4835C9A345E71E46_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Void Method_2_532795DE13579A51(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_4835C9A345E71E46_METHOD_2_532795DE13579A51_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B4F1EFFB5ED5DCB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4835C9A345E71E46_METHOD_2_4B4F1EFFB5ED5DCB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A455E3B9C7451749(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_4835C9A345E71E46_METHOD_2_A455E3B9C7451749_OFFSET))(this, a1);
	}

	::System::Void Method_2_880CDC91FBB7BE89(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4835C9A345E71E46_METHOD_2_880CDC91FBB7BE89_OFFSET))(this, a1, a2);
	}
};
