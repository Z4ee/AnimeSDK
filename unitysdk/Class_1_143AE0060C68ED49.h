#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class IGridFightTraitEffect; }

#define CLASS_1_143AE0060C68ED49_METHOD_1_F053D035646A0FEA_OFFSET UNITYSDK_OFFSET(0x18450DA0)

inline static constexpr unsigned int Class_1_143AE0060C68ED49_TypeDefinitionIndex = 62531;

class Class_1_143AE0060C68ED49 : public ::System::Object
{
public:
	static ::RPG::Client::IGridFightTraitEffect* Method_1_F053D035646A0FEA(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
	{
		return ((::RPG::Client::IGridFightTraitEffect*(*)(::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_1_143AE0060C68ED49_METHOD_1_F053D035646A0FEA_OFFSET))(a1, a2);
	}
};
