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

#define CLASS_2_4835C9A345E71E46_METHOD_2_4B4F1EFFB5ED5DCB_OFFSET UNITYSDK_OFFSET(0x12CE6900)
#define CLASS_2_4835C9A345E71E46_METHOD_2_532795DE13579A51_OFFSET UNITYSDK_OFFSET(0x12CE6850)
#define CLASS_2_4835C9A345E71E46_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x12CE65E0)
#define CLASS_2_4835C9A345E71E46_METHOD_2_880CDC91FBB7BE89_OFFSET UNITYSDK_OFFSET(0x12CE72E0)
#define CLASS_2_4835C9A345E71E46_METHOD_2_A455E3B9C7451749_OFFSET UNITYSDK_OFFSET(0x12CE69A0)
#define CLASS_2_4835C9A345E71E46_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x12CE6670)
#define CLASS_2_4835C9A345E71E46__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE7620)
#define CLASS_2_4835C9A345E71E46__ONBIND_OFFSET UNITYSDK_OFFSET(0x12CE6130)

inline static constexpr unsigned int Class_2_4835C9A345E71E46_TypeDefinitionIndex = 71280;

class Class_2_4835C9A345E71E46 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* NFENFKACJNL; // 0x0
	::UnityEngine::UI::Image* NNOFBCONNJB; // 0x60
	::UnityEngine::Transform* NJFPFGJBLMK; // 0x68
	::UnityEngine::Transform* ACINICIHNBP; // 0x70
	::UnityEngine::Transform* OCJAAFKJCNL; // 0x78
	::UnityEngine::Animation* JEPJPCFCNED; // 0x80
	::UnityEngine::Transform* LCOCMEGDCJP; // 0x88
	::UnityEngine::Transform* FFGCALGHHEI; // 0x90
	::UnityEngine::Transform* EMIPBGCMPIA; // 0x98
	::UnityEngine::Transform* ADEHCLGMPJN; // 0xA0
	::UnityEngine::Transform* KLGICMFOPMB; // 0xA8
	::Class_1_AB817CB39E494C61* PKIGHMIMJLF; // 0xB0
	::UnityEngine::Animation* GDEKNJJAIDF; // 0xB8
	::UnityEngine::UI::Text* PCLBOPLDNDI; // 0xC0
	::UnityEngine::UI::Text* OEDDILBGNBF; // 0xC8
	::UnityEngine::UI::Image* ACGAIFJHJOO; // 0xD0
	::System::Boolean JIEJLKLFJOL; // 0xD8
	::UnityEngine::Color ABMKBPJEJDC; // 0xDC
	::System::Single DPLDFNFHAJL; // 0xEC
	::UnityEngine::Color DAOFNJALEOL; // 0xF0

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
