#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetLineupShape.h"
#include "unitysdk/Struct_2_FBA4730A60751401_3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PetLineupPlacementConfig; }

#define CLASS_1_693F6D8BFD3A6B2B_METHOD_1_28CDE83FAAF48086_OFFSET UNITYSDK_OFFSET(0xBA03EC0)
#define CLASS_1_693F6D8BFD3A6B2B_METHOD_1_2EB2CDAD95F525C3_OFFSET UNITYSDK_OFFSET(0xBA03E90)
#define CLASS_1_693F6D8BFD3A6B2B_METHOD_1_A9DFC8BA71ABC3AF_OFFSET UNITYSDK_OFFSET(0xBA04160)

inline static constexpr unsigned int Class_1_693F6D8BFD3A6B2B_TypeDefinitionIndex = 75631;

class Class_1_693F6D8BFD3A6B2B : public ::System::Object
{
public:
	static ::RPG::GameCore::PetLineupPlacementConfig* Method_1_2EB2CDAD95F525C3()
	{
		return ((::RPG::GameCore::PetLineupPlacementConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_693F6D8BFD3A6B2B_METHOD_1_2EB2CDAD95F525C3_OFFSET))();
	}

	static ::Struct_2_FBA4730A60751401_3 Method_1_28CDE83FAAF48086(::RPG::Client::Pet::PetLineupShape a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Struct_2_FBA4730A60751401_3(*)(::RPG::Client::Pet::PetLineupShape, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_693F6D8BFD3A6B2B_METHOD_1_28CDE83FAAF48086_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_A9DFC8BA71ABC3AF(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_693F6D8BFD3A6B2B_METHOD_1_A9DFC8BA71ABC3AF_OFFSET))(a1);
	}
};
