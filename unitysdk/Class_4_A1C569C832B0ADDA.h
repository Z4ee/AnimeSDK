#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_FA4469B9FB916D4B.h"

namespace RPG::GameCore { class SetAttachmentScaleForUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_A1C569C832B0ADDA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F72E50)

inline static constexpr unsigned int Class_4_A1C569C832B0ADDA_TypeDefinitionIndex = 56073;

class Class_4_A1C569C832B0ADDA : public ::Class_3_FA4469B9FB916D4B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAttachmentScaleForUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAttachmentScaleForUI*))((::PBYTE)hIl2Cpp + CLASS_4_A1C569C832B0ADDA__CTOR_OFFSET))(this, a1, a2);
	}
};
