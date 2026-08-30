#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_EBD13AA6C54D68C4;
namespace RPG::Client { class HeartDialScriptInfo; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameLevelHeartDialNPCConfig; }
namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3D08C5705ACF17C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0469F0)
#define CLASS_1_3D08C5705ACF17C7_GET_CURRENTSCRIPT_OFFSET UNITYSDK_OFFSET(0xC046740)
#define CLASS_1_3D08C5705ACF17C7_GET_EMOBLACKLIST_OFFSET UNITYSDK_OFFSET(0xC046760)
#define CLASS_1_3D08C5705ACF17C7_GET_NPCSERVERID_OFFSET UNITYSDK_OFFSET(0xC046720)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0xC046D00)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_39F4A4A411885283_OFFSET UNITYSDK_OFFSET(0xC046FB0)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_3CD70A3F80BAB045_OFFSET UNITYSDK_OFFSET(0xC047080)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_58B8F0DC35B146B1_OFFSET UNITYSDK_OFFSET(0xC0467C0)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_614288621F812149_OFFSET UNITYSDK_OFFSET(0xC046780)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_765568A9798FAB5B_OFFSET UNITYSDK_OFFSET(0xC046F60)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_7A708E07ACCF55CC_OFFSET UNITYSDK_OFFSET(0xC047990)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_7BB9E3890718A48D_OFFSET UNITYSDK_OFFSET(0xC046830)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xC046B40)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_8BDE9AA6B337DB42_OFFSET UNITYSDK_OFFSET(0xC047580)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_8F60F8EA8A4B6E2F_OFFSET UNITYSDK_OFFSET(0xC047240)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0xC0477E0)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_B37E1EEE95BB5119_OFFSET UNITYSDK_OFFSET(0xC046BD0)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_B7B6AAB90DC2EF2C_OFFSET UNITYSDK_OFFSET(0xC047480)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_BF54DDA0178478C7_OFFSET UNITYSDK_OFFSET(0xC047940)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC047B60)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_DFD8FD4BA7D3ACA8_OFFSET UNITYSDK_OFFSET(0xC0478D0)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0xC047390)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xC047290)
#define CLASS_1_3D08C5705ACF17C7_METHOD_1_FADBDF6B666E37DE_OFFSET UNITYSDK_OFFSET(0xC047600)
#define CLASS_1_3D08C5705ACF17C7_SET_CURRENTSCRIPT_OFFSET UNITYSDK_OFFSET(0xC046750)
#define CLASS_1_3D08C5705ACF17C7_SET_EMOBLACKLIST_OFFSET UNITYSDK_OFFSET(0xC046770)
#define CLASS_1_3D08C5705ACF17C7_SET_NPCSERVERID_OFFSET UNITYSDK_OFFSET(0xC046730)
#define CLASS_1_3D08C5705ACF17C7__CTOR_OFFSET UNITYSDK_OFFSET(0xC046800)

inline static constexpr unsigned int Class_1_3D08C5705ACF17C7_TypeDefinitionIndex = 65723;

class Class_1_3D08C5705ACF17C7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* _EmoBlackList_k__BackingField; // 0x10
	::RPG::GameCore::GameLevelHeartDialNPCConfig* OLMHBMPGAKC; // 0x18
	::RPG::Client::MapNpcDef* IIFECJIKIKN; // 0x20
	::RPG::GameCore::GameEntity* AFIMBNIENJM; // 0x28
	::Class_1_EBD13AA6C54D68C4* IPJLCHPGFKM; // 0x30
	::RPG::Client::HeartDialScriptInfo* _currentScript_k__BackingField; // 0x38
	::System::Boolean GEEIKIACBBE; // 0x40
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> KBPOHLKBJFJ; // 0x44
	::System::UInt32 _NpcServerID_k__BackingField; // 0x4C

	::System::Void _ctor(::RPG::GameCore::GameLevelHeartDialNPCConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialNPCConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_NpcServerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_GET_NPCSERVERID_OFFSET))(this);
	}

	::System::Void set_NpcServerID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_SET_NPCSERVERID_OFFSET))(this, a1);
	}

	::RPG::Client::HeartDialScriptInfo* get_currentScript()
	{
		return ((::RPG::Client::HeartDialScriptInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_GET_CURRENTSCRIPT_OFFSET))(this);
	}

	::System::Void set_currentScript(::RPG::Client::HeartDialScriptInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::HeartDialScriptInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_SET_CURRENTSCRIPT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* get_EmoBlackList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_GET_EMOBLACKLIST_OFFSET))(this);
	}

	::System::Void set_EmoBlackList(::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_SET_EMOBLACKLIST_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_614288621F812149_OFFSET))(this);
	}

	::RPG::Client::MapNpcDef* Method_1_58B8F0DC35B146B1()
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_58B8F0DC35B146B1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B37E1EEE95BB5119(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_B37E1EEE95BB5119_OFFSET))(this, a1);
	}

	::System::Void Method_1_765568A9798FAB5B(::RPG::Client::HeartDialScriptInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::HeartDialScriptInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_765568A9798FAB5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_39F4A4A411885283(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_39F4A4A411885283_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::RPG::Client::MapNpcDef* Method_1_3CD70A3F80BAB045()
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_3CD70A3F80BAB045_OFFSET))(this);
	}

	::System::Void Method_1_8F60F8EA8A4B6E2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_8F60F8EA8A4B6E2F_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_1_8BDE9AA6B337DB42(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_8BDE9AA6B337DB42_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFD8FD4BA7D3ACA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_DFD8FD4BA7D3ACA8_OFFSET))(this);
	}

	::System::Void Method_1_FADBDF6B666E37DE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_FADBDF6B666E37DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_9D455FE4693966A8_OFFSET))(this);
	}

	::RPG::GameCore::LevelNPCInfoOverride* Method_1_B7B6AAB90DC2EF2C(::RPG::Client::MapNpcDef* a1)
	{
		return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_B7B6AAB90DC2EF2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BB9E3890718A48D(::RPG::GameCore::GameLevelHeartDialNPCConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialNPCConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_7BB9E3890718A48D_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF54DDA0178478C7(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_BF54DDA0178478C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Void Method_1_7A708E07ACCF55CC(::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_7A708E07ACCF55CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D08C5705ACF17C7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
