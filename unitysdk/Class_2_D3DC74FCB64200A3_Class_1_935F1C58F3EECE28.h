#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D3DC74FCB64200A3_CLASS_1_935F1C58F3EECE28__CTOR_OFFSET UNITYSDK_OFFSET(0x135F57E0)

inline static constexpr unsigned int Class_2_D3DC74FCB64200A3_Class_1_935F1C58F3EECE28_TypeDefinitionIndex = 54388;

class Class_2_D3DC74FCB64200A3_Class_1_935F1C58F3EECE28 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3DC74FCB64200A3_CLASS_1_935F1C58F3EECE28__CTOR_OFFSET))(this);
	}
};
