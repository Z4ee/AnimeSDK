#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_Task_1.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_8A3C2FE068793E61;
class Class_2_3ABA989E5AECB261;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceTurn; }

#define CLASS_3_BF31CDCCDBD6CCC6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C3F220)
#define CLASS_3_BF31CDCCDBD6CCC6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C3FAC0)
#define CLASS_3_BF31CDCCDBD6CCC6_TICK_OFFSET UNITYSDK_OFFSET(0x17C3F980)
#define CLASS_3_BF31CDCCDBD6CCC6__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3F200)
#define CLASS_3_BF31CDCCDBD6CCC6___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x17C3FB10)

inline static constexpr unsigned int Class_3_BF31CDCCDBD6CCC6_TypeDefinitionIndex = 34492;

class Class_3_BF31CDCCDBD6CCC6 : public ::RPG::Client::LittleGameShare::ST_Task_1<::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn*>
{
public:
	::Class_2_3ABA989E5AECB261* Field_3_3; // 0x28
	::Class_2_FBC1E64DC5B2C441* Field_3_4; // 0x30
	::System::UInt32 Field_3_0; // 0x38
	::System::UInt32 Field_3_1; // 0x3C
	::RPG::MVector3 Field_3_2; // 0x40

	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn*))((::PBYTE)hIl2Cpp + CLASS_3_BF31CDCCDBD6CCC6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF31CDCCDBD6CCC6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BF31CDCCDBD6CCC6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF31CDCCDBD6CCC6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BF31CDCCDBD6CCC6___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
