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

#define CLASS_1_34B28A5D6D3E2900_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129FABB0)
#define CLASS_1_34B28A5D6D3E2900_GET_CURRENTSCRIPT_OFFSET UNITYSDK_OFFSET(0x129FA960)
#define CLASS_1_34B28A5D6D3E2900_GET_EMOBLACKLIST_OFFSET UNITYSDK_OFFSET(0x129FA980)
#define CLASS_1_34B28A5D6D3E2900_GET_NPCSERVERID_OFFSET UNITYSDK_OFFSET(0x129FA940)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0x129FBB00)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_39F4A4A411885283_OFFSET UNITYSDK_OFFSET(0x129FB230)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_3A6BA667BEB66A7B_OFFSET UNITYSDK_OFFSET(0x129FB8B0)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_3CD70A3F80BAB045_OFFSET UNITYSDK_OFFSET(0x129FB300)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_426B16A68308076B_OFFSET UNITYSDK_OFFSET(0x129FBCB0)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_5DFDBEF4ABB3CC5E_OFFSET UNITYSDK_OFFSET(0x129FA9F0)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x129FAEC0)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_74B606B7F04F3BC3_OFFSET UNITYSDK_OFFSET(0x129FBBF0)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_765568A9798FAB5B_OFFSET UNITYSDK_OFFSET(0x129FB1E0)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_7D2BD1D8D2B63CC7_OFFSET UNITYSDK_OFFSET(0x129FB830)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x129FAD00)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_A51232E57FD58AD5_OFFSET UNITYSDK_OFFSET(0x129FA9B0)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x129FA9A0)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_B37E1EEE95BB5119_OFFSET UNITYSDK_OFFSET(0x129FAD90)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_B9999439DB2F3546_OFFSET UNITYSDK_OFFSET(0x129FB4C0)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x129FBDF0)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_DEBACABDD653DD12_OFFSET UNITYSDK_OFFSET(0x129FB6F0)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_E9FED4A3201638BA_OFFSET UNITYSDK_OFFSET(0x129FBC60)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x129FB600)
#define CLASS_1_34B28A5D6D3E2900_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x129FB510)
#define CLASS_1_34B28A5D6D3E2900_SET_CURRENTSCRIPT_OFFSET UNITYSDK_OFFSET(0x129FA970)
#define CLASS_1_34B28A5D6D3E2900_SET_EMOBLACKLIST_OFFSET UNITYSDK_OFFSET(0x129FA990)
#define CLASS_1_34B28A5D6D3E2900_SET_NPCSERVERID_OFFSET UNITYSDK_OFFSET(0x129FA950)
#define CLASS_1_34B28A5D6D3E2900__CTOR_OFFSET UNITYSDK_OFFSET(0x129FA9C0)

inline static constexpr unsigned int Class_1_34B28A5D6D3E2900_TypeDefinitionIndex = 60458;

class Class_1_34B28A5D6D3E2900 : public ::System::Object
{
public:
	::RPG::Client::MapNpcDef* Field_1_7; // 0x10
	::Class_1_EBD13AA6C54D68C4* Field_1_3; // 0x18
	::RPG::GameCore::GameLevelHeartDialNPCConfig* Field_1_4; // 0x20
	::RPG::Client::HeartDialScriptInfo* _currentScript_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* _EmoBlackList_k__BackingField; // 0x30
	::RPG::GameCore::GameEntity* Field_1_5; // 0x38
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_8; // 0x40
	::System::Boolean Field_1_6; // 0x48
	::System::UInt32 _NpcServerID_k__BackingField; // 0x4C

	::System::Void _ctor(::RPG::GameCore::GameLevelHeartDialNPCConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialNPCConfig*))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_NpcServerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_GET_NPCSERVERID_OFFSET))(this);
	}

	::System::Void set_NpcServerID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_SET_NPCSERVERID_OFFSET))(this, value);
	}

	::RPG::Client::HeartDialScriptInfo* get_currentScript()
	{
		return ((::RPG::Client::HeartDialScriptInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_GET_CURRENTSCRIPT_OFFSET))(this);
	}

	::System::Void set_currentScript(::RPG::Client::HeartDialScriptInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::HeartDialScriptInfo*))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_SET_CURRENTSCRIPT_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* get_EmoBlackList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_GET_EMOBLACKLIST_OFFSET))(this);
	}

	::System::Void set_EmoBlackList(::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_SET_EMOBLACKLIST_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::Client::MapNpcDef* Method_1_A51232E57FD58AD5()
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_A51232E57FD58AD5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B37E1EEE95BB5119(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_B37E1EEE95BB5119_OFFSET))(this, a1);
	}

	::System::Void Method_1_765568A9798FAB5B(::RPG::Client::HeartDialScriptInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::HeartDialScriptInfo*))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_765568A9798FAB5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_39F4A4A411885283(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_39F4A4A411885283_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::RPG::Client::MapNpcDef* Method_1_3CD70A3F80BAB045()
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_3CD70A3F80BAB045_OFFSET))(this);
	}

	::System::Void Method_1_B9999439DB2F3546()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_B9999439DB2F3546_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_1_7D2BD1D8D2B63CC7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_7D2BD1D8D2B63CC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_74B606B7F04F3BC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_74B606B7F04F3BC3_OFFSET))(this);
	}

	::System::Void Method_1_3A6BA667BEB66A7B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_3A6BA667BEB66A7B_OFFSET))(this, a1);
	}

	::System::Void Method_1_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_017C915772AE00E9_OFFSET))(this);
	}

	::RPG::GameCore::LevelNPCInfoOverride* Method_1_DEBACABDD653DD12(::RPG::Client::MapNpcDef* a1)
	{
		return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_DEBACABDD653DD12_OFFSET))(this, a1);
	}

	::System::Void Method_1_5DFDBEF4ABB3CC5E(::RPG::GameCore::GameLevelHeartDialNPCConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialNPCConfig*))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_5DFDBEF4ABB3CC5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9FED4A3201638BA(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_E9FED4A3201638BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_1_426B16A68308076B(::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_426B16A68308076B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B28A5D6D3E2900_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
