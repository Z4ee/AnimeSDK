#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BF31F3092BDFD9E.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayPuzzleBoard_RoadTimeline.h"

class Class_1_2BF31F3092BDFD9E_Class_1_F782B6A96B30E68B;
namespace RPG::Client { class WolfBroGunPlayEndLess; }
namespace RPG::Client { class WolfBroGunPlayPuzzleBoard; }

#define CLASS_2_A5A58AA7F41F72B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157C7B90)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x157C8990)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_1F561E248FEF8127_OFFSET UNITYSDK_OFFSET(0x157C7CE0)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x157C88E0)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x157C7CA0)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x157C89F0)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_8137AFDB6C7DC992_OFFSET UNITYSDK_OFFSET(0x157C86D0)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x157C87E0)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x157C7C00)
#define CLASS_2_A5A58AA7F41F72B4_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x157C8880)
#define CLASS_2_A5A58AA7F41F72B4__CTOR_OFFSET UNITYSDK_OFFSET(0x157C7BE0)

inline static constexpr unsigned int Class_2_A5A58AA7F41F72B4_TypeDefinitionIndex = 65668;

class Class_2_A5A58AA7F41F72B4 : public ::Class_1_2BF31F3092BDFD9E
{
public:
	::RPG::Client::WolfBroGunPlayEndLess* Field_2_0; // 0x80
	::Class_1_2BF31F3092BDFD9E_Class_1_F782B6A96B30E68B* Field_2_1; // 0x88
	::System::Boolean Field_2_2; // 0x90

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
