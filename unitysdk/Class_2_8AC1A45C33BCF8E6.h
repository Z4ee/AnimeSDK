#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_8AC1A45C33BCF8E6_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x183E83F0)
#define CLASS_2_8AC1A45C33BCF8E6_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x183E8510)
#define CLASS_2_8AC1A45C33BCF8E6_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x183E80C0)
#define CLASS_2_8AC1A45C33BCF8E6_METHOD_2_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0x183E8110)
#define CLASS_2_8AC1A45C33BCF8E6_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x183E7F50)
#define CLASS_2_8AC1A45C33BCF8E6_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x183E82F0)
#define CLASS_2_8AC1A45C33BCF8E6_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x183E8230)
#define CLASS_2_8AC1A45C33BCF8E6_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x183E7C00)
#define CLASS_2_8AC1A45C33BCF8E6__CTOR_OFFSET UNITYSDK_OFFSET(0x183E7BC0)
#define CLASS_2_8AC1A45C33BCF8E6__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x183E7C50)
#define CLASS_2_8AC1A45C33BCF8E6__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x183E7F00)
#define CLASS_2_8AC1A45C33BCF8E6__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x183E7EC0)

inline static constexpr unsigned int Class_2_8AC1A45C33BCF8E6_TypeDefinitionIndex = 68464;

class Class_2_8AC1A45C33BCF8E6 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	::UnityEngine::UI::Image* Field_2_2; // 0x180
	::RPG::GameCore::LevelUIComponent* Field_2_3; // 0x188
	::UnityEngine::Transform* Field_2_4; // 0x190

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6__CTOR_OFFSET))(this);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6__SETUPVIEW_OFFSET))(this);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_28F3459B67DFCFFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_METHOD_2_28F3459B67DFCFFF_OFFSET))(this, a1);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
