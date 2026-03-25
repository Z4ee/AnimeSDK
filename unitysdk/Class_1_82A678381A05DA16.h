#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F82E741C282F32D4.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimCrystalConfig; }

#define CLASS_1_82A678381A05DA16_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A52AE0)
#define CLASS_1_82A678381A05DA16__CTOR_OFFSET UNITYSDK_OFFSET(0x16A52B90)

inline static constexpr unsigned int Class_1_82A678381A05DA16_TypeDefinitionIndex = 33533;

class Class_1_82A678381A05DA16 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimCrystalConfig* Field_1_0; // 0x10
	::Struct_2_F82E741C282F32D4 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82A678381A05DA16__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82A678381A05DA16_CLEAR_OFFSET))(this);
	}
};
