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

#define CLASS_2_9CCF2DE66246229E_METHOD_2_4B4F1EFFB5ED5DCB_OFFSET UNITYSDK_OFFSET(0x18702980)
#define CLASS_2_9CCF2DE66246229E_METHOD_2_532795DE13579A51_OFFSET UNITYSDK_OFFSET(0x187028D0)
#define CLASS_2_9CCF2DE66246229E_METHOD_2_6193BC2CF608CEB0_OFFSET UNITYSDK_OFFSET(0x18703360)
#define CLASS_2_9CCF2DE66246229E_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x18702660)
#define CLASS_2_9CCF2DE66246229E_METHOD_2_A455E3B9C7451749_OFFSET UNITYSDK_OFFSET(0x18702A20)
#define CLASS_2_9CCF2DE66246229E_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x187026F0)
#define CLASS_2_9CCF2DE66246229E__CTOR_OFFSET UNITYSDK_OFFSET(0x18703610)
#define CLASS_2_9CCF2DE66246229E__ONBIND_OFFSET UNITYSDK_OFFSET(0x187021B0)

inline static constexpr unsigned int Class_2_9CCF2DE66246229E_TypeDefinitionIndex = 71241;

class Class_2_9CCF2DE66246229E : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* NFENFKACJNL; // 0x0
	::UnityEngine::Animation* JEPJPCFCNED; // 0x60
	::UnityEngine::UI::Image* ACGAIFJHJOO; // 0x68
	::UnityEngine::UI::Text* PCLBOPLDNDI; // 0x70
	::UnityEngine::Transform* EMIPBGCMPIA; // 0x78
	::UnityEngine::Transform* NJFPFGJBLMK; // 0x80
	::UnityEngine::Transform* OCJAAFKJCNL; // 0x88
	::UnityEngine::UI::Text* OEDDILBGNBF; // 0x90
	::UnityEngine::Transform* LCOCMEGDCJP; // 0x98
	::UnityEngine::Animation* GDEKNJJAIDF; // 0xA0
	::UnityEngine::UI::Image* NNOFBCONNJB; // 0xA8
	::UnityEngine::Transform* FFGCALGHHEI; // 0xB0
	::UnityEngine::Transform* ADEHCLGMPJN; // 0xB8
	::Class_1_AB817CB39E494C61* PKIGHMIMJLF; // 0xC0
	::UnityEngine::Transform* ACINICIHNBP; // 0xC8
	::UnityEngine::Transform* KLGICMFOPMB; // 0xD0
	::System::Boolean JIEJLKLFJOL; // 0xD8
	::System::Single DPLDFNFHAJL; // 0xDC
	::UnityEngine::Color DAOFNJALEOL; // 0xE0
	::UnityEngine::Color ABMKBPJEJDC; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CCF2DE66246229E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CCF2DE66246229E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CCF2DE66246229E_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CCF2DE66246229E_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Void Method_2_532795DE13579A51(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_9CCF2DE66246229E_METHOD_2_532795DE13579A51_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B4F1EFFB5ED5DCB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9CCF2DE66246229E_METHOD_2_4B4F1EFFB5ED5DCB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A455E3B9C7451749(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_9CCF2DE66246229E_METHOD_2_A455E3B9C7451749_OFFSET))(this, a1);
	}

	::System::Void Method_2_6193BC2CF608CEB0(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9CCF2DE66246229E_METHOD_2_6193BC2CF608CEB0_OFFSET))(this, a1, a2);
	}
};
