#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BF31F3092BDFD9E.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayPuzzleBoard_RoadTimeline.h"

class Class_1_2BF31F3092BDFD9E_Class_1_F782B6A96B30E68B;
namespace RPG::Client { class WolfBroGunPlayEndLess; }
namespace RPG::Client { class WolfBroGunPlayPuzzleBoard; }

#define CLASS_2_A5A58AA7F41F72B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A298F0)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15A2A6F0)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_1F561E248FEF8127_OFFSET UNITYSDK_OFFSET(0x15A29A40)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x15A2A640)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15A29A00)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x15A2A750)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_8137AFDB6C7DC992_OFFSET UNITYSDK_OFFSET(0x15A2A430)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x15A2A540)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15A29960)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x15A2A5E0)
#define CLASS_2_A5A58AA7F41F72B4__CTOR_OFFSET UNITYSDK_OFFSET(0x15A29940)

inline static constexpr unsigned int Class_2_A5A58AA7F41F72B4_TypeDefinitionIndex = 68705;

class Class_2_A5A58AA7F41F72B4 : public ::Class_1_2BF31F3092BDFD9E
{
public:
	::Class_1_2BF31F3092BDFD9E_Class_1_F782B6A96B30E68B* FICPIGCICAO; // 0x80
	::RPG::Client::WolfBroGunPlayEndLess* MGCGDPGIAIP; // 0x88
	::System::Boolean FCEAICADJEN; // 0x90

	::System::Void _ctor(::RPG::Client::WolfBroGunPlayPuzzleBoard* a1, ::RPG::Client::WolfBroGunPlayEndLess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayPuzzleBoard*, ::RPG::Client::WolfBroGunPlayEndLess*))((::PBYTE)hIl2Cpp + CLASS_2_A5A58AA7F41F72B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5A58AA7F41F72B4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5A58AA7F41F72B4_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5A58AA7F41F72B4_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_1F561E248FEF8127(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A5A58AA7F41F72B4_METHOD_2_1F561E248FEF8127_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A5A58AA7F41F72B4_METHOD_2_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}

	::RPG::Client::WolfBroGunPlayPuzzleBoard_RoadTimeline Method_2_8137AFDB6C7DC992()
	{
		return ((::RPG::Client::WolfBroGunPlayPuzzleBoard_RoadTimeline(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5A58AA7F41F72B4_METHOD_2_8137AFDB6C7DC992_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5A58AA7F41F72B4_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5A58AA7F41F72B4_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5A58AA7F41F72B4_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5A58AA7F41F72B4_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}
};
