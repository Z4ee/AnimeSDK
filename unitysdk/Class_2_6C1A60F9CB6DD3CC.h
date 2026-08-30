#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_DC9C477547B15CC2;
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }

#define CLASS_2_6C1A60F9CB6DD3CC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17BDA3B0)
#define CLASS_2_6C1A60F9CB6DD3CC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17BDA510)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_018BA1AE137EB2E2_OFFSET UNITYSDK_OFFSET(0x17BDA070)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_709598DAF47EF6D3_OFFSET UNITYSDK_OFFSET(0x17BDA000)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_801C7146EF5473DD_OFFSET UNITYSDK_OFFSET(0x17BD9FA0)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x17BD9F40)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x17BDA1C0)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x17BDA2C0)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17BDA0D0)
#define CLASS_2_6C1A60F9CB6DD3CC__CTOR_OFFSET UNITYSDK_OFFSET(0x17BDA640)
#define CLASS_2_6C1A60F9CB6DD3CC__ONBIND_OFFSET UNITYSDK_OFFSET(0x17BD9E10)

inline static constexpr unsigned int Class_2_6C1A60F9CB6DD3CC_TypeDefinitionIndex = 71562;

class Class_2_6C1A60F9CB6DD3CC : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
	::Class_2_DC9C477547B15CC2* NHNHKBJJKPP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_801C7146EF5473DD(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_801C7146EF5473DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_709598DAF47EF6D3(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_709598DAF47EF6D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_018BA1AE137EB2E2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_018BA1AE137EB2E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
