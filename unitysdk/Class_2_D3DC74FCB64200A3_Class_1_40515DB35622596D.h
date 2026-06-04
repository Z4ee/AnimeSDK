#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D3DC74FCB64200A3_CLASS_1_40515DB35622596D__CTOR_OFFSET UNITYSDK_OFFSET(0x135F55A0)

inline static constexpr unsigned int Class_2_D3DC74FCB64200A3_Class_1_40515DB35622596D_TypeDefinitionIndex = 54389;

class Class_2_D3DC74FCB64200A3_Class_1_40515DB35622596D : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_CLASS_1_40515DB35622596D__CTOR_OFFSET))(this);
	}
};
