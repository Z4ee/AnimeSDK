#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_DC9C477547B15CC2;
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }

#define CLASS_2_6C1A60F9CB6DD3CC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16203FF0)
#define CLASS_2_6C1A60F9CB6DD3CC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16204150)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_018BA1AE137EB2E2_OFFSET UNITYSDK_OFFSET(0x16203CB0)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_709598DAF47EF6D3_OFFSET UNITYSDK_OFFSET(0x16203C40)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_801C7146EF5473DD_OFFSET UNITYSDK_OFFSET(0x16203BE0)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x16203B80)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x16203E00)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x16203F00)
#define CLASS_2_6C1A60F9CB6DD3CC_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16203D10)
#define CLASS_2_6C1A60F9CB6DD3CC__CTOR_OFFSET UNITYSDK_OFFSET(0x16204280)
#define CLASS_2_6C1A60F9CB6DD3CC__ONBIND_OFFSET UNITYSDK_OFFSET(0x16203A50)

inline static constexpr unsigned int Class_2_6C1A60F9CB6DD3CC_TypeDefinitionIndex = 68381;

class Class_2_6C1A60F9CB6DD3CC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x60
	::Class_2_DC9C477547B15CC2* Field_2_1; // 0x68

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
