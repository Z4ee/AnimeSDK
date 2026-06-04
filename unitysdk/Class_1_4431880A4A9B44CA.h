#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class IGridFightTraitEffect; }

#define CLASS_1_4431880A4A9B44CA_METHOD_1_50234694592CC485_OFFSET UNITYSDK_OFFSET(0xC46AA10)

inline static constexpr unsigned int Class_1_4431880A4A9B44CA_TypeDefinitionIndex = 61190;

class Class_1_4431880A4A9B44CA : public ::System::Object
{
public:
	static ::RPG::Client::IGridFightTraitEffect* Method_1_50234694592CC485(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
	{
		return ((::RPG::Client::IGridFightTraitEffect*(*)(::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_1_4431880A4A9B44CA_METHOD_1_50234694592CC485_OFFSET))(a1, a2);
	}
};
