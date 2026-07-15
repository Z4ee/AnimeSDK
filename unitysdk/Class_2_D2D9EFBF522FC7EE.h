#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_027C0429C2F768FD;
namespace System { class String; }

#define CLASS_2_D2D9EFBF522FC7EE_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x14691CB0)
#define CLASS_2_D2D9EFBF522FC7EE_METHOD_2_3D6DC7786836E627_OFFSET UNITYSDK_OFFSET(0x14691BD0)
#define CLASS_2_D2D9EFBF522FC7EE__CTOR_OFFSET UNITYSDK_OFFSET(0x14691B60)
#define CLASS_2_D2D9EFBF522FC7EE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x14691D40)

inline static constexpr unsigned int Class_2_D2D9EFBF522FC7EE_TypeDefinitionIndex = 68466;

class Class_2_D2D9EFBF522FC7EE : public ::RPG::Client::UIController
{
public:
	::System::String* Field_2_0; // 0x180

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D9EFBF522FC7EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3D6DC7786836E627(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D2D9EFBF522FC7EE_METHOD_2_3D6DC7786836E627_OFFSET))(this, a1);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D9EFBF522FC7EE__SETUPVIEW_OFFSET))(this);
	}

	::Class_2_027C0429C2F768FD* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_027C0429C2F768FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D9EFBF522FC7EE_METHOD_2_08A44229CA25E941_OFFSET))(this);
	}
};
