#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::GameCore { class LevelLittleGameInfo; }

#define CLASS_1_4A4395CF35B6CAE6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x92812E0)
#define CLASS_1_4A4395CF35B6CAE6_METHOD_1_14F425A828838FCA_OFFSET UNITYSDK_OFFSET(0x9280FA0)
#define CLASS_1_4A4395CF35B6CAE6_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x9280F70)
#define CLASS_1_4A4395CF35B6CAE6_METHOD_1_48CFA2461BBECC11_OFFSET UNITYSDK_OFFSET(0x92814F0)
#define CLASS_1_4A4395CF35B6CAE6_METHOD_1_55D650BD801F5AB3_OFFSET UNITYSDK_OFFSET(0x92812F0)
#define CLASS_1_4A4395CF35B6CAE6_METHOD_1_67C142C8523FB4DC_OFFSET UNITYSDK_OFFSET(0x9281370)
#define CLASS_1_4A4395CF35B6CAE6_METHOD_1_D52816D24DCD8374_OFFSET UNITYSDK_OFFSET(0x9281430)
#define CLASS_1_4A4395CF35B6CAE6_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x9280F50)
#define CLASS_1_4A4395CF35B6CAE6__CTOR_OFFSET UNITYSDK_OFFSET(0x9281180)

inline static constexpr unsigned int Class_1_4A4395CF35B6CAE6_TypeDefinitionIndex = 59072;

class Class_1_4A4395CF35B6CAE6 : public ::System::Object
{
public:
	::RPG::GameCore::LevelLittleGameInfo* Field_1_0; // 0x10
	::RPG::Client::MapDef* Field_1_1; // 0x18
	::RPG::Client::NavMap::ICartographer* Field_1_5; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::System::UInt32 Field_1_4; // 0x30

	::System::Void _ctor(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A4395CF35B6CAE6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A4395CF35B6CAE6_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A4395CF35B6CAE6_METHOD_1_23B573F7FD360F67_OFFSET))(this);
	}

	static ::Class_1_4A4395CF35B6CAE6* Method_1_14F425A828838FCA(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::Class_1_4A4395CF35B6CAE6*(*)(::RPG::Client::MapDef*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A4395CF35B6CAE6_METHOD_1_14F425A828838FCA_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A4395CF35B6CAE6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_55D650BD801F5AB3()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A4395CF35B6CAE6_METHOD_1_55D650BD801F5AB3_OFFSET))(this);
	}

	::System::Boolean Method_1_67C142C8523FB4DC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A4395CF35B6CAE6_METHOD_1_67C142C8523FB4DC_OFFSET))(this);
	}

	::RPG::Client::FindChestMarkConfig Method_1_D52816D24DCD8374()
	{
		return ((::RPG::Client::FindChestMarkConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A4395CF35B6CAE6_METHOD_1_D52816D24DCD8374_OFFSET))(this);
	}

	::RPG::Client::NavMap::ICartographer* Method_1_48CFA2461BBECC11()
	{
		return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A4395CF35B6CAE6_METHOD_1_48CFA2461BBECC11_OFFSET))(this);
	}
};
