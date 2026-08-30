#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class GridLayoutGroup; }

#define CLASS_2_BE08DC2864834108_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B9FE60)
#define CLASS_2_BE08DC2864834108_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18B9FF80)
#define CLASS_2_BE08DC2864834108_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x18B9F860)
#define CLASS_2_BE08DC2864834108_METHOD_2_1F0134B562731ABF_OFFSET UNITYSDK_OFFSET(0x18B9FC20)
#define CLASS_2_BE08DC2864834108_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x18B9FB90)
#define CLASS_2_BE08DC2864834108_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18B9FB00)
#define CLASS_2_BE08DC2864834108_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18B9F700)
#define CLASS_2_BE08DC2864834108_METHOD_2_BE961BCE0BEF3FB1_OFFSET UNITYSDK_OFFSET(0x18B9FC80)
#define CLASS_2_BE08DC2864834108_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x18B9F8F0)
#define CLASS_2_BE08DC2864834108_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0x18B9F780)
#define CLASS_2_BE08DC2864834108_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x18B9FDD0)
#define CLASS_2_BE08DC2864834108_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x18B9FD40)
#define CLASS_2_BE08DC2864834108__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA0070)
#define CLASS_2_BE08DC2864834108__ONBIND_OFFSET UNITYSDK_OFFSET(0x18B9F640)
#define CLASS_2_BE08DC2864834108__ONTICK_OFFSET UNITYSDK_OFFSET(0x18B9FA30)

inline static constexpr unsigned int Class_2_BE08DC2864834108_TypeDefinitionIndex = 71374;

class Class_2_BE08DC2864834108 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Single GLDOGCMJFLP; // 0x0
	::UnityEngine::UI::Button* KJIOINOOIHP; // 0x60
	::UnityEngine::UI::GridLayoutGroup* BMLLEFLGKMG; // 0x68
	::UnityEngine::Transform* OENNKFPNCKE; // 0x70
	::UnityEngine::Vector2 GGBAIMNJPHN; // 0x78
	::System::Boolean IILOLKBHJBJ; // 0x80
	::System::Single JFHFAHDEACB; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_1F0134B562731ABF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_METHOD_2_1F0134B562731ABF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_BE961BCE0BEF3FB1(::UnityEngine::Transform* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_METHOD_2_BE961BCE0BEF3FB1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE08DC2864834108_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
