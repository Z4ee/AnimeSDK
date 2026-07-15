#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ElfSpecialEventConfig; }
namespace RPG::GameCore { class ElfWaveOrder; }

#define CLASS_1_32B92D1867E3C418_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B163920)
#define CLASS_1_32B92D1867E3C418_METHOD_1_17AABD2931A13657_OFFSET UNITYSDK_OFFSET(0x1B1636C0)
#define CLASS_1_32B92D1867E3C418_METHOD_1_18718D3F1E94D72C_OFFSET UNITYSDK_OFFSET(0x1B163660)
#define CLASS_1_32B92D1867E3C418_METHOD_1_47992F195E01AA10_OFFSET UNITYSDK_OFFSET(0x1B163740)
#define CLASS_1_32B92D1867E3C418_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1B1635F0)
#define CLASS_1_32B92D1867E3C418_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0x1B1638B0)
#define CLASS_1_32B92D1867E3C418_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1B163840)
#define CLASS_1_32B92D1867E3C418_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1B1637D0)
#define CLASS_1_32B92D1867E3C418__CTOR_OFFSET UNITYSDK_OFFSET(0x1B163970)

inline static constexpr unsigned int Class_1_32B92D1867E3C418_TypeDefinitionIndex = 39642;

class Class_1_32B92D1867E3C418 : public ::System::Object
{
public:
	::RPG::GameCore::ElfSpecialEventConfig* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::System::Boolean Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32B92D1867E3C418__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32B92D1867E3C418_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_1_18718D3F1E94D72C(::RPG::GameCore::RestaurantNormalEventType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType))((::PBYTE)hIl2Cpp + CLASS_1_32B92D1867E3C418_METHOD_1_18718D3F1E94D72C_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElfWaveOrder* Method_1_17AABD2931A13657()
	{
		return ((::RPG::GameCore::ElfWaveOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32B92D1867E3C418_METHOD_1_17AABD2931A13657_OFFSET))(this);
	}

	::RPG::GameCore::ElfWaveOrder* Method_1_47992F195E01AA10()
	{
		return ((::RPG::GameCore::ElfWaveOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32B92D1867E3C418_METHOD_1_47992F195E01AA10_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32B92D1867E3C418_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32B92D1867E3C418_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32B92D1867E3C418_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32B92D1867E3C418_CLEAR_OFFSET))(this);
	}
};
