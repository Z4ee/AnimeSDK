#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_6CE70F4211D79CD5_5;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_0768C54531906C87_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x15063F80)
#define CLASS_2_0768C54531906C87_METHOD_2_2A38E69140BEF946_OFFSET UNITYSDK_OFFSET(0x15064070)
#define CLASS_2_0768C54531906C87_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x15064260)
#define CLASS_2_0768C54531906C87__CTOR_OFFSET UNITYSDK_OFFSET(0x15064350)
#define CLASS_2_0768C54531906C87__ONBIND_OFFSET UNITYSDK_OFFSET(0x15063EC0)

inline static constexpr unsigned int Class_2_0768C54531906C87_TypeDefinitionIndex = 68367;

class Class_2_0768C54531906C87 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x60
	::RPG::Client::LocalizedText* Field_2_1; // 0x68
	::RPG::Client::UIValueChangeAnimation* Field_2_2; // 0x70
	::System::Boolean Field_2_3; // 0x78

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
