#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"

namespace RPG::Client { class ActivityFeverTimePileToast; }
namespace RPG::Client { class ProgressBar; }
namespace RPG::GameCore { class FeverTimeInfoChangeParam; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_D1390195BD020876_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1211ABC0)
#define CLASS_2_D1390195BD020876_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1211ADD0)
#define CLASS_2_D1390195BD020876_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x12119370)
#define CLASS_2_D1390195BD020876_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1211B3B0)
#define CLASS_2_D1390195BD020876_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x1211B410)
#define CLASS_2_D1390195BD020876_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1211B350)
#define CLASS_2_D1390195BD020876_METHOD_2_6F90F99189EFF687_OFFSET UNITYSDK_OFFSET(0x12119EF0)
#define CLASS_2_D1390195BD020876_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x121194E0)
#define CLASS_2_D1390195BD020876_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x121190B0)
#define CLASS_2_D1390195BD020876_METHOD_2_D8E44F7C510402BB_1_OFFSET UNITYSDK_OFFSET(0x1211A8F0)
#define CLASS_2_D1390195BD020876_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0x1211A730)
#define CLASS_2_D1390195BD020876_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1211A6B0)
#define CLASS_2_D1390195BD020876_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1211AAB0)
#define CLASS_2_D1390195BD020876_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1211A630)
#define CLASS_2_D1390195BD020876__CTOR_OFFSET UNITYSDK_OFFSET(0x1211AFB0)
#define CLASS_2_D1390195BD020876__ONBIND_OFFSET UNITYSDK_OFFSET(0x12118740)
#define CLASS_2_D1390195BD020876___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1211B470)
#define CLASS_2_D1390195BD020876___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1211B4D0)
#define CLASS_2_D1390195BD020876___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1211B2F0)

inline static constexpr unsigned int Class_2_D1390195BD020876_TypeDefinitionIndex = 66426;

class Class_2_D1390195BD020876 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_8; // 0x60
	::UnityEngine::UI::Button* Field_2_0; // 0x68
	::UnityEngine::UI::Text* Field_2_12; // 0x70
	::UnityEngine::Transform* Field_2_10; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* Field_2_16; // 0x80
	::UnityEngine::UI::Text* Field_2_11; // 0x88
	::System::String* Field_2_22; // 0x90
	::UnityEngine::UI::Button* Field_2_1; // 0x98
	::UnityEngine::Animator* Field_2_4; // 0xA0
	::RPG::Client::ActivityFeverTimePileToast* Field_2_9; // 0xA8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* Field_2_13; // 0xB0
	::System::String* Field_2_23; // 0xB8
	::UnityEngine::UI::Button* Field_2_2; // 0xC0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* Field_2_14; // 0xC8
	::RPG::GameCore::LevelUIComponent* Field_2_24; // 0xD0
	::UnityEngine::UI::Text* Field_2_5; // 0xD8
	::UnityEngine::UI::Button* Field_2_3; // 0xE0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* Field_2_15; // 0xE8
	::UnityEngine::Animation* Field_2_7; // 0xF0
	::UnityEngine::Transform* Field_2_6; // 0xF8
	::System::UInt32 Field_2_18; // 0x100
	::RPG::GameCore::FeverTimePeriodType Field_2_21; // 0x104
	::System::Int32 Field_2_17; // 0x108
	::System::Boolean Field_2_20; // 0x10C
	::System::UInt32 Field_2_19; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_D8E44F7C510402BB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F90F99189EFF687(::RPG::GameCore::FeverTimeInfoChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_6F90F99189EFF687_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1390195BD020876___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
