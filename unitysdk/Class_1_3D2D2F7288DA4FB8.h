#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C_3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }

#define CLASS_1_3D2D2F7288DA4FB8_METHOD_1_0E588D8C7DF6478B_OFFSET UNITYSDK_OFFSET(0x1060B950)
#define CLASS_1_3D2D2F7288DA4FB8_METHOD_1_2F852B703EBC20D1_OFFSET UNITYSDK_OFFSET(0x1060B8A0)
#define CLASS_1_3D2D2F7288DA4FB8__CTOR_OFFSET UNITYSDK_OFFSET(0x1060B890)

inline static constexpr unsigned int Class_1_3D2D2F7288DA4FB8_TypeDefinitionIndex = 62896;

class Class_1_3D2D2F7288DA4FB8 : public ::System::Object
{
public:
	::RPG::Client::RogueBuffData* Field_1_0; // 0x10
	::Struct_2_276321B6B122C69C_3 Field_1_1; // 0x18

	::System::Void _ctor(::Struct_2_276321B6B122C69C_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C_3))((::PBYTE)hIl2Cpp + CLASS_1_3D2D2F7288DA4FB8__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_2F852B703EBC20D1()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D2D2F7288DA4FB8_METHOD_1_2F852B703EBC20D1_OFFSET))(this);
	}

	::RPG::Client::RogueBuffData* Method_1_0E588D8C7DF6478B()
	{
		return ((::RPG::Client::RogueBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D2D2F7288DA4FB8_METHOD_1_0E588D8C7DF6478B_OFFSET))(this);
	}
};
