#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MoveToPositionUpdateMode.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_3C72212260A8C076.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloatCurve; }

#define CLASS_1_26D3C628241F3C1A_METHOD_1_B5EA5DD8B4C0957C_OFFSET UNITYSDK_OFFSET(0x162DD320)
#define CLASS_1_26D3C628241F3C1A__CTOR_OFFSET UNITYSDK_OFFSET(0x162DD3A0)

inline static constexpr unsigned int Class_1_26D3C628241F3C1A_TypeDefinitionIndex = 56950;

class Class_1_26D3C628241F3C1A : public ::System::Object
{
public:
	::RPG::GameCore::FloatCurve* KLOKABEPKLL; // 0x10
	::System::Single CKIBNLPPIMG; // 0x18
	::RPG::MVector3 FJBPOFJPFNP; // 0x1C
	::Struct_2_3C72212260A8C076 AAKHOJDBHPH; // 0x28
	::System::Single FMHMAHCNDGB; // 0x48
	::RPG::GameCore::MoveToPositionUpdateMode HGDKNBJHDAP; // 0x4C
	::System::Single NNNAGHMNFKB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D3C628241F3C1A__CTOR_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_B5EA5DD8B4C0957C()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D3C628241F3C1A_METHOD_1_B5EA5DD8B4C0957C_OFFSET))(this);
	}
};
