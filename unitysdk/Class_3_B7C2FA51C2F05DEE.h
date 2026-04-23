#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_8A3C2FE068793E61;
namespace RPG::Client::LittleGameShare { class ST_Main_LittleGameShare_DoNothing; }

#define CLASS_3_B7C2FA51C2F05DEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C25A90)
#define CLASS_3_B7C2FA51C2F05DEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C25B80)
#define CLASS_3_B7C2FA51C2F05DEE_TICK_OFFSET UNITYSDK_OFFSET(0x17C25BD0)
#define CLASS_3_B7C2FA51C2F05DEE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C25A80)
#define CLASS_3_B7C2FA51C2F05DEE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x17C25C50)

inline static constexpr unsigned int Class_3_B7C2FA51C2F05DEE_TypeDefinitionIndex = 34502;

class Class_3_B7C2FA51C2F05DEE : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing*>
{
public:
	::System::Int32 Field_3_0; // 0x28

	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing*))((::PBYTE)hIl2Cpp + CLASS_3_B7C2FA51C2F05DEE__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B7C2FA51C2F05DEE___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
