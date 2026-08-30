#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_FFE03FE61A5D4B1E;
namespace RPG::Client { class MonoCurveTriggerManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropInteractionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_BC84B87740DAFF4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177DCD80)
#define CLASS_2_BC84B87740DAFF4F_DOONENTER_OFFSET UNITYSDK_OFFSET(0x177DD000)
#define CLASS_2_BC84B87740DAFF4F_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x177DD5D0)
#define CLASS_2_BC84B87740DAFF4F_DOONTICK_OFFSET UNITYSDK_OFFSET(0x177DD640)
#define CLASS_2_BC84B87740DAFF4F_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x177DDA20)
#define CLASS_2_BC84B87740DAFF4F_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x177DD9E0)
#define CLASS_2_BC84B87740DAFF4F_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x177DDA00)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_1265AD26B9934ADC_OFFSET UNITYSDK_OFFSET(0x177DD950)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_1F130271093617A5_1_OFFSET UNITYSDK_OFFSET(0x177DCED0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x177DD6D0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x177DCFA0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x177DCE50)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_BF85224A16082717_OFFSET UNITYSDK_OFFSET(0x177DCB60)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_D1B8EDD075FF9494_OFFSET UNITYSDK_OFFSET(0x177DD7A0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_F7D9E881EE15AF45_OFFSET UNITYSDK_OFFSET(0x177DCC80)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x177DD060)
#define CLASS_2_BC84B87740DAFF4F_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x177DDA30)
#define CLASS_2_BC84B87740DAFF4F_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x177DD9F0)
#define CLASS_2_BC84B87740DAFF4F_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x177DDA10)
#define CLASS_2_BC84B87740DAFF4F__CTOR_OFFSET UNITYSDK_OFFSET(0x177DCB70)

inline static constexpr unsigned int Class_2_BC84B87740DAFF4F_TypeDefinitionIndex = 68520;

class Class_2_BC84B87740DAFF4F : public ::Class_1_29B23DDF98AF43AC
{
public:
	// static const ::System::Single JKOJMLHLCEL; // 0x0
	::RPG::GameCore::GameEntity* BOMFAKPMHMI; // 0x98
	::RPG::GameCore::PropInteractionTrigger_ButtonParam* EDNNMHBJOBK; // 0xA0
	::System::String* _IconPath_k__BackingField; // 0xA8
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xB0
	::RPG::Client::MonoCurveTriggerManager* KGCNPIEDOCA; // 0xB8
	::Class_1_FFE03FE61A5D4B1E* BGDDKFHKAKM; // 0xC0
	::RPG::Client::TextID _TextID_k__BackingField; // 0xC8
	::System::UInt32 _RuntimeID_k__BackingField; // 0xD8
	::System::Boolean EPBLHFIDDEI; // 0xDC
	::System::Boolean NEFHBJGFADL; // 0xDD
	::System::Boolean KIAFGDOOKHL; // 0xDE
	::System::Single EIDFFKGFFIO; // 0xE0

	::System::Void _ctor(::RPG::Client::MonoCurveTriggerManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::OptionTriggerInfo* a3, ::Class_1_FFE03FE61A5D4B1E* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveTriggerManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::OptionTriggerInfo*, ::Class_1_FFE03FE61A5D4B1E*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::PropInteractionTrigger_ButtonParam* Method_2_BF85224A16082717()
	{
		return ((::RPG::GameCore::PropInteractionTrigger_ButtonParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_BF85224A16082717_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7D9E881EE15AF45(::RPG::GameCore::OptionTriggerInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTriggerInfo*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_F7D9E881EE15AF45_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DOONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_1F130271093617A5_1_OFFSET))(this);
	}

	::System::Void Method_2_D1B8EDD075FF9494(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_D1B8EDD075FF9494_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1265AD26B9934ADC(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_1265AD26B9934ADC_OFFSET))(this, a1);
	}

	::System::UInt32 get_RuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_RUNTIMEID_OFFSET))(this);
	}

	::System::Void set_RuntimeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_RUNTIMEID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_TextID()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_TEXTID_OFFSET))(this);
	}

	::System::Void set_TextID(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_TEXTID_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_ICONPATH_OFFSET))(this, a1);
	}
};
