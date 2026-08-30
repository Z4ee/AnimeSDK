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

#define CLASS_2_A051915CA8942909_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB20B40)
#define CLASS_2_A051915CA8942909_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBB20CA0)
#define CLASS_2_A051915CA8942909_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xBB20310)
#define CLASS_2_A051915CA8942909_METHOD_2_1AD3069986C9EC47_OFFSET UNITYSDK_OFFSET(0xBB20710)
#define CLASS_2_A051915CA8942909_METHOD_2_26F2ADE6CF3F0469_OFFSET UNITYSDK_OFFSET(0xBB201C0)
#define CLASS_2_A051915CA8942909_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xBB20410)
#define CLASS_2_A051915CA8942909_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xBB1FF30)
#define CLASS_2_A051915CA8942909_METHOD_2_6E26D7E65873E2FB_OFFSET UNITYSDK_OFFSET(0xBB20550)
#define CLASS_2_A051915CA8942909_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBB200C0)
#define CLASS_2_A051915CA8942909_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xBB208D0)
#define CLASS_2_A051915CA8942909_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xBB20A80)
#define CLASS_2_A051915CA8942909_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xBB209C0)
#define CLASS_2_A051915CA8942909_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBB1FFD0)
#define CLASS_2_A051915CA8942909_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBB20020)
#define CLASS_2_A051915CA8942909__CTOR_OFFSET UNITYSDK_OFFSET(0xBB20DD0)
#define CLASS_2_A051915CA8942909__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBB20130)

inline static constexpr unsigned int Class_2_A051915CA8942909_TypeDefinitionIndex = 71540;

class Class_2_A051915CA8942909 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* OGKGCJNDABA; // 0x0
	::UnityEngine::UI::Slider* JGOJFHEEAOG; // 0x60
	::UnityEngine::Transform* PPGKFCHILBE; // 0x68
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
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
