#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_6CE70F4211D79CD5_5;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_0768C54531906C87_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x188F5790)
#define CLASS_2_0768C54531906C87_METHOD_2_2A38E69140BEF946_OFFSET UNITYSDK_OFFSET(0x188F5880)
#define CLASS_2_0768C54531906C87_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x188F5A70)
#define CLASS_2_0768C54531906C87__CTOR_OFFSET UNITYSDK_OFFSET(0x188F5B60)
#define CLASS_2_0768C54531906C87__ONBIND_OFFSET UNITYSDK_OFFSET(0x188F56D0)

inline static constexpr unsigned int Class_2_0768C54531906C87_TypeDefinitionIndex = 71548;

class Class_2_0768C54531906C87 : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::UIValueChangeAnimation* CGJKPIEFBKB; // 0x60
	::UnityEngine::UI::Image* JLHDCKNHDJH; // 0x68
	::RPG::Client::LocalizedText* PKANBKHJHNP; // 0x70
	::System::Boolean IDBEBIDMHME; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0768C54531906C87__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0768C54531906C87__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0768C54531906C87_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_2A38E69140BEF946(::Class_1_6CE70F4211D79CD5_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_5*))((::PBYTE)hIl2Cpp + CLASS_2_0768C54531906C87_METHOD_2_2A38E69140BEF946_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0768C54531906C87_METHOD_2_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}
};
