#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_8FD88AEFE1E689CC;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_A051915CA8942909_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB9A6B00)
#define CLASS_2_A051915CA8942909_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB9A6C60)
#define CLASS_2_A051915CA8942909_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB9A62D0)
#define CLASS_2_A051915CA8942909_METHOD_2_1AD3069986C9EC47_OFFSET UNITYSDK_OFFSET(0xB9A66D0)
#define CLASS_2_A051915CA8942909_METHOD_2_26F2ADE6CF3F0469_OFFSET UNITYSDK_OFFSET(0xB9A6180)
#define CLASS_2_A051915CA8942909_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xB9A63D0)
#define CLASS_2_A051915CA8942909_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xB9A5EF0)
#define CLASS_2_A051915CA8942909_METHOD_2_6E26D7E65873E2FB_OFFSET UNITYSDK_OFFSET(0xB9A6510)
#define CLASS_2_A051915CA8942909_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB9A6080)
#define CLASS_2_A051915CA8942909_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xB9A6890)
#define CLASS_2_A051915CA8942909_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xB9A6A40)
#define CLASS_2_A051915CA8942909_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB9A6980)
#define CLASS_2_A051915CA8942909_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB9A5F90)
#define CLASS_2_A051915CA8942909_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB9A5FE0)
#define CLASS_2_A051915CA8942909__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A6D90)
#define CLASS_2_A051915CA8942909__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB9A60F0)

inline static constexpr unsigned int Class_2_A051915CA8942909_TypeDefinitionIndex = 71591;

class Class_2_A051915CA8942909 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* OGKGCJNDABA; // 0x0
	::UnityEngine::UI::Slider* JGOJFHEEAOG; // 0x60
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
	::UnityEngine::Transform* PPGKFCHILBE; // 0x70
	::RPG::GameCore::FixPoint BMFOCMPIPGD; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_ONRETURN_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_26F2ADE6CF3F0469(::Class_1_8FD88AEFE1E689CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FD88AEFE1E689CC*))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_26F2ADE6CF3F0469_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E26D7E65873E2FB(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_6E26D7E65873E2FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AD3069986C9EC47(::RPG::GameCore::AbilityMaxHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_1AD3069986C9EC47_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
