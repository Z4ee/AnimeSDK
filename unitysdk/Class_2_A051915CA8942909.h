#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
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

#define CLASS_2_A051915CA8942909_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA7C87C0)
#define CLASS_2_A051915CA8942909_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA7C8920)
#define CLASS_2_A051915CA8942909_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA7C8080)
#define CLASS_2_A051915CA8942909_METHOD_2_1AD3069986C9EC47_OFFSET UNITYSDK_OFFSET(0xA7C8400)
#define CLASS_2_A051915CA8942909_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xA7C8180)
#define CLASS_2_A051915CA8942909_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xA7C8A80)
#define CLASS_2_A051915CA8942909_METHOD_2_6E26D7E65873E2FB_OFFSET UNITYSDK_OFFSET(0xA7C8240)
#define CLASS_2_A051915CA8942909_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA7C7D90)
#define CLASS_2_A051915CA8942909_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xA7C8720)
#define CLASS_2_A051915CA8942909_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA7C8680)
#define CLASS_2_A051915CA8942909_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xA7C7C30)
#define CLASS_2_A051915CA8942909_METHOD_2_CFE7513481148870_OFFSET UNITYSDK_OFFSET(0xA7C7E90)
#define CLASS_2_A051915CA8942909_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xA7C85C0)
#define CLASS_2_A051915CA8942909_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xA7C7CA0)
#define CLASS_2_A051915CA8942909_ONRETURN_OFFSET UNITYSDK_OFFSET(0xA7C7CF0)
#define CLASS_2_A051915CA8942909__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C8A50)
#define CLASS_2_A051915CA8942909__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C7E00)
#define CLASS_2_A051915CA8942909___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA7C8B40)
#define CLASS_2_A051915CA8942909___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA7C8BA0)
#define CLASS_2_A051915CA8942909___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C8AE0)

inline static constexpr unsigned int Class_2_A051915CA8942909_TypeDefinitionIndex = 66914;

class Class_2_A051915CA8942909 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Transform* Field_2_1; // 0x60
	::UnityEngine::UI::Slider* Field_2_2; // 0x68
	::RPG::GameCore::GameEntity* Field_2_3; // 0x70
	::RPG::GameCore::FixPoint Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
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

	::System::Void Method_2_CFE7513481148870(::Class_1_8FD88AEFE1E689CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FD88AEFE1E689CC*))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_CFE7513481148870_OFFSET))(this, a1);
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

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A051915CA8942909___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
