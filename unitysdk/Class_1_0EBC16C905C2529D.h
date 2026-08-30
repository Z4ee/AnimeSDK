#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::GameCore { class LevelLittleGameInfo; }

#define CLASS_1_0EBC16C905C2529D_METHOD_1_0CFFCF2373FEE7D6_OFFSET UNITYSDK_OFFSET(0x163FDD20)
#define CLASS_1_0EBC16C905C2529D_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x163FD570)
#define CLASS_1_0EBC16C905C2529D_METHOD_1_48CFA2461BBECC11_OFFSET UNITYSDK_OFFSET(0x163FDEC0)
#define CLASS_1_0EBC16C905C2529D_METHOD_1_51185A536A535792_OFFSET UNITYSDK_OFFSET(0x163FD5F0)
#define CLASS_1_0EBC16C905C2529D_METHOD_1_55D650BD801F5AB3_OFFSET UNITYSDK_OFFSET(0x163FDB10)
#define CLASS_1_0EBC16C905C2529D_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x163FDAD0)
#define CLASS_1_0EBC16C905C2529D_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x163FD520)
#define CLASS_1_0EBC16C905C2529D_METHOD_1_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x163FDB90)
#define CLASS_1_0EBC16C905C2529D__CTOR_OFFSET UNITYSDK_OFFSET(0x163FD890)

inline static constexpr unsigned int Class_1_0EBC16C905C2529D_TypeDefinitionIndex = 64268;

class Class_1_0EBC16C905C2529D : public ::System::Object
{
public:
	::RPG::Client::NavMap::ICartographer* ADFHICILFOA; // 0x10
	::RPG::GameCore::LevelLittleGameInfo* LBDDDIOPJFK; // 0x18
	::RPG::Client::MapDef* KKKADHHBMLD; // 0x20
	::System::UInt32 HHOPLLMEGMP; // 0x28
	::System::UInt32 DLDFJHOLMED; // 0x2C
	::System::UInt32 EBPJMCPGNDA; // 0x30

	::System::Void _ctor(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0EBC16C905C2529D__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EBC16C905C2529D_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EBC16C905C2529D_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	static ::Class_1_0EBC16C905C2529D* Method_1_51185A536A535792(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::Class_1_0EBC16C905C2529D*(*)(::RPG::Client::MapDef*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0EBC16C905C2529D_METHOD_1_51185A536A535792_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EBC16C905C2529D_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_55D650BD801F5AB3()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EBC16C905C2529D_METHOD_1_55D650BD801F5AB3_OFFSET))(this);
	}

	::System::Boolean Method_1_F55212E77440B167()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EBC16C905C2529D_METHOD_1_F55212E77440B167_OFFSET))(this);
	}

	::RPG::Client::FindChestMarkConfig Method_1_0CFFCF2373FEE7D6()
	{
		return ((::RPG::Client::FindChestMarkConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EBC16C905C2529D_METHOD_1_0CFFCF2373FEE7D6_OFFSET))(this);
	}

	::RPG::Client::NavMap::ICartographer* Method_1_48CFA2461BBECC11()
	{
		return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EBC16C905C2529D_METHOD_1_48CFA2461BBECC11_OFFSET))(this);
	}
};
