#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCD6FC733B25F13E.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"

class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEntityAttributeComparer; }

#define CLASS_3_10707C5D2AF30403_METHOD_3_5AB49F58CBD35442_OFFSET UNITYSDK_OFFSET(0x11E168B0)
#define CLASS_3_10707C5D2AF30403__CTOR_OFFSET UNITYSDK_OFFSET(0x11E16880)

inline static constexpr unsigned int Class_3_10707C5D2AF30403_TypeDefinitionIndex = 71023;

class Class_3_10707C5D2AF30403 : public ::Class_2_BCD6FC733B25F13E
{
public:
	::RPG::GameCore::ChimeraDuelAttributeSelectorType Field_3_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelEntityAttributeComparer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEntityAttributeComparer*))((::PBYTE)hIl2Cpp + CLASS_3_10707C5D2AF30403__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_5AB49F58CBD35442(::Class_2_49CAB3DE74280C58* a1, ::Class_2_49CAB3DE74280C58* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_3_10707C5D2AF30403_METHOD_3_5AB49F58CBD35442_OFFSET))(this, a1, a2);
	}
};
