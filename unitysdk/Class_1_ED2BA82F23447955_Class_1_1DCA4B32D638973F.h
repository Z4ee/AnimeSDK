#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_ED2BA82F23447955_CLASS_1_1DCA4B32D638973F__CTOR_OFFSET UNITYSDK_OFFSET(0x165D34B0)

inline static constexpr unsigned int Class_1_ED2BA82F23447955_Class_1_1DCA4B32D638973F_TypeDefinitionIndex = 28960;

class Class_1_ED2BA82F23447955_Class_1_1DCA4B32D638973F : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::RPG::GameCore::CakeRaceCellType Field_1_2; // 0x14
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2BA82F23447955_CLASS_1_1DCA4B32D638973F__CTOR_OFFSET))(this);
	}
};
