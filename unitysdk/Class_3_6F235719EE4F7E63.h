#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"

class Class_1_8A3C2FE068793E61;
class Class_2_3ABA989E5AECB261;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceTransfer; }

#define CLASS_3_6F235719EE4F7E63_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C20330)
#define CLASS_3_6F235719EE4F7E63_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C203F0)
#define CLASS_3_6F235719EE4F7E63_TICK_OFFSET UNITYSDK_OFFSET(0x17C20390)
#define CLASS_3_6F235719EE4F7E63__CTOR_OFFSET UNITYSDK_OFFSET(0x17C202B0)
#define CLASS_3_6F235719EE4F7E63___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x17C20440)

inline static constexpr unsigned int Class_3_6F235719EE4F7E63_TypeDefinitionIndex = 34491;

class Class_3_6F235719EE4F7E63 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer*>
{
public:
	::Class_2_3ABA989E5AECB261* Field_3_0; // 0x28

	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer*))((::PBYTE)hIl2Cpp + CLASS_3_6F235719EE4F7E63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F235719EE4F7E63_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F235719EE4F7E63_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F235719EE4F7E63_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F235719EE4F7E63___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
