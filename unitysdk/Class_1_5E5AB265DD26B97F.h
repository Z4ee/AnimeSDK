#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::GameCore { class LevelPropInfo; }

#define CLASS_1_5E5AB265DD26B97F_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x141EE240)
#define CLASS_1_5E5AB265DD26B97F_METHOD_1_3827F552D4683F3D_OFFSET UNITYSDK_OFFSET(0x141EE3E0)
#define CLASS_1_5E5AB265DD26B97F_METHOD_1_48CFA2461BBECC11_OFFSET UNITYSDK_OFFSET(0x141EE560)
#define CLASS_1_5E5AB265DD26B97F_METHOD_1_55D650BD801F5AB3_OFFSET UNITYSDK_OFFSET(0x141EE360)
#define CLASS_1_5E5AB265DD26B97F_METHOD_1_D52816D24DCD8374_OFFSET UNITYSDK_OFFSET(0x141EE4A0)
#define CLASS_1_5E5AB265DD26B97F_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x141EE340)
#define CLASS_1_5E5AB265DD26B97F_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x141EE220)
#define CLASS_1_5E5AB265DD26B97F__CTOR_OFFSET UNITYSDK_OFFSET(0x141EE270)

inline static constexpr unsigned int Class_1_5E5AB265DD26B97F_TypeDefinitionIndex = 60001;

class Class_1_5E5AB265DD26B97F : public ::System::Object
{
public:
	::RPG::Client::MapDef* Field_1_0; // 0x10
	::RPG::Client::NavMap::ICartographer* Field_1_1; // 0x18
	::RPG::GameCore::LevelPropInfo* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelPropInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5E5AB265DD26B97F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E5AB265DD26B97F_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E5AB265DD26B97F_METHOD_1_23B573F7FD360F67_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E5AB265DD26B97F_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_55D650BD801F5AB3()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E5AB265DD26B97F_METHOD_1_55D650BD801F5AB3_OFFSET))(this);
	}

	::System::Boolean Method_1_3827F552D4683F3D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E5AB265DD26B97F_METHOD_1_3827F552D4683F3D_OFFSET))(this);
	}

	::RPG::Client::FindChestMarkConfig Method_1_D52816D24DCD8374()
	{
		return ((::RPG::Client::FindChestMarkConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E5AB265DD26B97F_METHOD_1_D52816D24DCD8374_OFFSET))(this);
	}

	::RPG::Client::NavMap::ICartographer* Method_1_48CFA2461BBECC11()
	{
		return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E5AB265DD26B97F_METHOD_1_48CFA2461BBECC11_OFFSET))(this);
	}
};
