#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_6B41D5D37BA0605F;
namespace RPG::Client { class PreDownloadAsset; }

#define CLASS_3_F223B919256F932D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3CCDC0)
#define CLASS_3_F223B919256F932D_ENTER_OFFSET UNITYSDK_OFFSET(0xF3CCEC0)
#define CLASS_3_F223B919256F932D_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xF3CD010)
#define CLASS_3_F223B919256F932D_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF3CCF20)
#define CLASS_3_F223B919256F932D_LEAVE_OFFSET UNITYSDK_OFFSET(0xF3CCF80)
#define CLASS_3_F223B919256F932D_TICK_OFFSET UNITYSDK_OFFSET(0xF3CCE60)
#define CLASS_3_F223B919256F932D__CTOR_OFFSET UNITYSDK_OFFSET(0xF3CCCE0)

inline static constexpr unsigned int Class_3_F223B919256F932D_TypeDefinitionIndex = 61254;

class Class_3_F223B919256F932D : public ::RPG::Client::LoginPhase
{
public:
	::RPG::Client::PreDownloadAsset* JOGNPLJEMKB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F223B919256F932D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F223B919256F932D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F223B919256F932D_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F223B919256F932D_ENTER_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F223B919256F932D_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_3_F223B919256F932D_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F223B919256F932D_GETGAMEPHASETYPE_OFFSET))(this);
	}
};
