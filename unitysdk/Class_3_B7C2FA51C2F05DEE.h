#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_D93F8AE271D8A728;
namespace RPG::Client::LittleGameShare { class ST_Main_LittleGameShare_DoNothing; }

#define CLASS_3_B7C2FA51C2F05DEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18AEDF40)
#define CLASS_3_B7C2FA51C2F05DEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18AEE030)
#define CLASS_3_B7C2FA51C2F05DEE_TICK_OFFSET UNITYSDK_OFFSET(0x18AEE080)
#define CLASS_3_B7C2FA51C2F05DEE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEDF30)
#define CLASS_3_B7C2FA51C2F05DEE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x18AEE100)

inline static constexpr unsigned int Class_3_B7C2FA51C2F05DEE_TypeDefinitionIndex = 34785;

class Class_3_B7C2FA51C2F05DEE : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing*>
{
public:
	::System::Int32 Field_3_0; // 0x28

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing*))((::PBYTE)hIl2Cpp + CLASS_3_B7C2FA51C2F05DEE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B7C2FA51C2F05DEE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B7C2FA51C2F05DEE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B7C2FA51C2F05DEE_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B7C2FA51C2F05DEE___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
