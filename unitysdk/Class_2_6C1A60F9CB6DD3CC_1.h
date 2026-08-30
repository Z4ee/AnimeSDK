#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_DC9C477547B15CC2;
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }

#define CLASS_2_6C1A60F9CB6DD3CC_1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x158DFF30)
#define CLASS_2_6C1A60F9CB6DD3CC_1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x158E00B0)
#define CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_018BA1AE137EB2E2_OFFSET UNITYSDK_OFFSET(0x158DFB30)
#define CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_709598DAF47EF6D3_OFFSET UNITYSDK_OFFSET(0x158DFAC0)
#define CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_801C7146EF5473DD_OFFSET UNITYSDK_OFFSET(0x158DFA60)
#define CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x158DFB90)
#define CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0x158DFBF0)
#define CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x158DFD40)
#define CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x158DFE40)
#define CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x158DFC50)
#define CLASS_2_6C1A60F9CB6DD3CC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x158E0210)
#define CLASS_2_6C1A60F9CB6DD3CC_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x158DF940)

inline static constexpr unsigned int Class_2_6C1A60F9CB6DD3CC_1_TypeDefinitionIndex = 72176;

class Class_2_6C1A60F9CB6DD3CC_1 : public ::Class_1_34917908B7833130
{
public:
	::Class_2_DC9C477547B15CC2* NHNHKBJJKPP; // 0x60
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_801C7146EF5473DD(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_801C7146EF5473DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_709598DAF47EF6D3(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_709598DAF47EF6D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_018BA1AE137EB2E2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_018BA1AE137EB2E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A93E2DF739E86EB0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_A93E2DF739E86EB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1A60F9CB6DD3CC_1_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
