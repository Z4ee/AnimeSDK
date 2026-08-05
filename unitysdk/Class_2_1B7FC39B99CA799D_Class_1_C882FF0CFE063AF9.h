#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"
#include "unitysdk/System/Object.h"

class Class_1_5BABA5458AC99975;
class Class_3_EACEEEB216DA3601;
class Class_3_FC960E76F7A651E8;
namespace System { class Action; }

#define CLASS_2_1B7FC39B99CA799D_CLASS_1_C882FF0CFE063AF9_METHOD_1_BB73213E48DCA214_OFFSET UNITYSDK_OFFSET(0x18127640)
#define CLASS_2_1B7FC39B99CA799D_CLASS_1_C882FF0CFE063AF9__CTOR_OFFSET UNITYSDK_OFFSET(0x18127630)

inline static constexpr unsigned int Class_2_1B7FC39B99CA799D_Class_1_C882FF0CFE063AF9_TypeDefinitionIndex = 71052;

class Class_2_1B7FC39B99CA799D_Class_1_C882FF0CFE063AF9 : public ::System::Object
{
public:
	::Class_1_5BABA5458AC99975* Field_1_6; // 0x10
	::Class_3_EACEEEB216DA3601* Field_1_0; // 0x18
	::Class_3_EACEEEB216DA3601* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B7FC39B99CA799D_CLASS_1_C882FF0CFE063AF9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BB73213E48DCA214(::Struct_2_A1A45D8655270887 a1, ::Class_3_FC960E76F7A651E8* a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A1A45D8655270887, ::Class_3_FC960E76F7A651E8*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_1B7FC39B99CA799D_CLASS_1_C882FF0CFE063AF9_METHOD_1_BB73213E48DCA214_OFFSET))(this, a1, a2, a3, a4);
	}
};
