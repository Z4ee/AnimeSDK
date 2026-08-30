#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7E3538A12F3E2A1D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF3F0340)
#define CLASS_2_7E3538A12F3E2A1D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF3F0580)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0xF3EFF80)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xF3EFE80)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xF3F01F0)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_54159DE35EB23B4F_OFFSET UNITYSDK_OFFSET(0xF3EFE00)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xF3EFC70)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_B41DC260337975FD_OFFSET UNITYSDK_OFFSET(0xF3EFF30)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xF3F0230)
#define CLASS_2_7E3538A12F3E2A1D__CTOR_OFFSET UNITYSDK_OFFSET(0xF3F0780)
#define CLASS_2_7E3538A12F3E2A1D__ONBIND_OFFSET UNITYSDK_OFFSET(0xF3EFBC0)

inline static constexpr unsigned int Class_2_7E3538A12F3E2A1D_TypeDefinitionIndex = 71778;

class Class_2_7E3538A12F3E2A1D : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* KDODNCFEJFD; // 0x0
	// static const ::System::String* NMHICHPNEHN; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::UnityEngine::UI::Button* FIOKDNAFFBF; // 0x68
	::UnityEngine::UI::Text* HNKGKMAIIJC; // 0x70
	::System::Boolean AKBPNMEFGAO; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_54159DE35EB23B4F(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_METHOD_2_54159DE35EB23B4F_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B41DC260337975FD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_METHOD_2_B41DC260337975FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B3D8773D1869301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_METHOD_2_1B3D8773D1869301_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
