#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::GameCore { class LevelPropInfo; }

#define CLASS_1_3B412EB4EA7C3036_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x179DE360)
#define CLASS_1_3B412EB4EA7C3036_METHOD_1_48CFA2461BBECC11_OFFSET UNITYSDK_OFFSET(0x179DE960)
#define CLASS_1_3B412EB4EA7C3036_METHOD_1_55D650BD801F5AB3_OFFSET UNITYSDK_OFFSET(0x179DE610)
#define CLASS_1_3B412EB4EA7C3036_METHOD_1_A8D2D50DA0B0E150_OFFSET UNITYSDK_OFFSET(0x179DE810)
#define CLASS_1_3B412EB4EA7C3036_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x179DE5C0)
#define CLASS_1_3B412EB4EA7C3036_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x179DE310)
#define CLASS_1_3B412EB4EA7C3036_METHOD_1_ECBBC37B441CC6A6_OFFSET UNITYSDK_OFFSET(0x179DE690)
#define CLASS_1_3B412EB4EA7C3036__CTOR_OFFSET UNITYSDK_OFFSET(0x179DE3E0)

inline static constexpr unsigned int Class_1_3B412EB4EA7C3036_TypeDefinitionIndex = 61286;

class Class_1_3B412EB4EA7C3036 : public ::System::Object
{
public:
	::RPG::Client::MapDef* Field_1_0; // 0x10
	::RPG::Client::NavMap::ICartographer* Field_1_1; // 0x18
	::RPG::GameCore::LevelPropInfo* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelPropInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3B412EB4EA7C3036__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B412EB4EA7C3036_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B412EB4EA7C3036_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B412EB4EA7C3036_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_55D650BD801F5AB3()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B412EB4EA7C3036_METHOD_1_55D650BD801F5AB3_OFFSET))(this);
	}

	::System::Boolean Method_1_ECBBC37B441CC6A6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B412EB4EA7C3036_METHOD_1_ECBBC37B441CC6A6_OFFSET))(this);
	}

	::RPG::Client::FindChestMarkConfig Method_1_A8D2D50DA0B0E150()
	{
		return ((::RPG::Client::FindChestMarkConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B412EB4EA7C3036_METHOD_1_A8D2D50DA0B0E150_OFFSET))(this);
	}

	::RPG::Client::NavMap::ICartographer* Method_1_48CFA2461BBECC11()
	{
		return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B412EB4EA7C3036_METHOD_1_48CFA2461BBECC11_OFFSET))(this);
	}
};
