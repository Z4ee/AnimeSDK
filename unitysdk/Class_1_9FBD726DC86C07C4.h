#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::GameCore { class LevelLittleGameInfo; }

#define CLASS_1_9FBD726DC86C07C4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xAF029D0)
#define CLASS_1_9FBD726DC86C07C4_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0xAF025E0)
#define CLASS_1_9FBD726DC86C07C4_METHOD_1_48CFA2461BBECC11_OFFSET UNITYSDK_OFFSET(0xAF02BE0)
#define CLASS_1_9FBD726DC86C07C4_METHOD_1_55D650BD801F5AB3_OFFSET UNITYSDK_OFFSET(0xAF029E0)
#define CLASS_1_9FBD726DC86C07C4_METHOD_1_67C142C8523FB4DC_OFFSET UNITYSDK_OFFSET(0xAF02A60)
#define CLASS_1_9FBD726DC86C07C4_METHOD_1_6DB505B6C1461A89_OFFSET UNITYSDK_OFFSET(0xAF02610)
#define CLASS_1_9FBD726DC86C07C4_METHOD_1_D52816D24DCD8374_OFFSET UNITYSDK_OFFSET(0xAF02B20)
#define CLASS_1_9FBD726DC86C07C4_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xAF025C0)
#define CLASS_1_9FBD726DC86C07C4__CTOR_OFFSET UNITYSDK_OFFSET(0xAF02870)

inline static constexpr unsigned int Class_1_9FBD726DC86C07C4_TypeDefinitionIndex = 60002;

class Class_1_9FBD726DC86C07C4 : public ::System::Object
{
public:
	::RPG::Client::MapDef* Field_1_0; // 0x10
	::RPG::GameCore::LevelLittleGameInfo* Field_1_1; // 0x18
	::RPG::Client::NavMap::ICartographer* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_5; // 0x30

	::System::Void _ctor(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9FBD726DC86C07C4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FBD726DC86C07C4_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FBD726DC86C07C4_METHOD_1_23B573F7FD360F67_OFFSET))(this);
	}

	static ::Class_1_9FBD726DC86C07C4* Method_1_6DB505B6C1461A89(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::Class_1_9FBD726DC86C07C4*(*)(::RPG::Client::MapDef*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9FBD726DC86C07C4_METHOD_1_6DB505B6C1461A89_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FBD726DC86C07C4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_55D650BD801F5AB3()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FBD726DC86C07C4_METHOD_1_55D650BD801F5AB3_OFFSET))(this);
	}

	::System::Boolean Method_1_67C142C8523FB4DC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FBD726DC86C07C4_METHOD_1_67C142C8523FB4DC_OFFSET))(this);
	}

	::RPG::Client::FindChestMarkConfig Method_1_D52816D24DCD8374()
	{
		return ((::RPG::Client::FindChestMarkConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FBD726DC86C07C4_METHOD_1_D52816D24DCD8374_OFFSET))(this);
	}

	::RPG::Client::NavMap::ICartographer* Method_1_48CFA2461BBECC11()
	{
		return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FBD726DC86C07C4_METHOD_1_48CFA2461BBECC11_OFFSET))(this);
	}
};
