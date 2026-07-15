#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7E3538A12F3E2A1D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16FAF110)
#define CLASS_2_7E3538A12F3E2A1D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16FAF350)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0x16FAED50)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x16FAEC50)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16FAEFC0)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_54159DE35EB23B4F_OFFSET UNITYSDK_OFFSET(0x16FAEBD0)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16FAEA40)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_B41DC260337975FD_OFFSET UNITYSDK_OFFSET(0x16FAED00)
#define CLASS_2_7E3538A12F3E2A1D_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16FAF000)
#define CLASS_2_7E3538A12F3E2A1D__CTOR_OFFSET UNITYSDK_OFFSET(0x16FAF550)
#define CLASS_2_7E3538A12F3E2A1D__ONBIND_OFFSET UNITYSDK_OFFSET(0x16FAE990)

inline static constexpr unsigned int Class_2_7E3538A12F3E2A1D_TypeDefinitionIndex = 68580;

class Class_2_7E3538A12F3E2A1D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::UI::Text* Field_2_2; // 0x60
	::UnityEngine::UI::Button* Field_2_3; // 0x68
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
