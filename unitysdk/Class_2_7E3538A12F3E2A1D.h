#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7E3538A12F3E2A1D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE47E650)
#define CLASS_2_7E3538A12F3E2A1D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE47E890)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xE47E240)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_54159DE35EB23B4F_OFFSET UNITYSDK_OFFSET(0xE47E1C0)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xE47EB20)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0xE47E340)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xE47E580)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xE47E030)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_B41DC260337975FD_OFFSET UNITYSDK_OFFSET(0xE47E2F0)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE47E570)
#define CLASS_2_7E3538A12F3E2A1D__CTOR_OFFSET UNITYSDK_OFFSET(0xE47EA90)
#define CLASS_2_7E3538A12F3E2A1D__ONBIND_OFFSET UNITYSDK_OFFSET(0xE47DF80)
#define CLASS_2_7E3538A12F3E2A1D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE47EB80)
#define CLASS_2_7E3538A12F3E2A1D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE47EBE0)
#define CLASS_2_7E3538A12F3E2A1D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xE47EAC0)

inline static constexpr unsigned int Class_2_7E3538A12F3E2A1D_TypeDefinitionIndex = 67136;

class Class_2_7E3538A12F3E2A1D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::UI::Button* Field_2_2; // 0x60
	::UnityEngine::UI::Text* Field_2_3; // 0x68
	::UnityEngine::Animation* Field_2_4; // 0x70
	::System::Boolean Field_2_5; // 0x78

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

	::System::Void Method_2_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_METHOD_2_674F73509924BD16_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E3538A12F3E2A1D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
