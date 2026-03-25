#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_4.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueKeywordData; }

#define CLASS_1_3793FC99C12BFB08_METHOD_1_2F852B703EBC20D1_OFFSET UNITYSDK_OFFSET(0x10C4D6B0)
#define CLASS_1_3793FC99C12BFB08_METHOD_1_F394017D569B4C7C_OFFSET UNITYSDK_OFFSET(0x10C4D750)
#define CLASS_1_3793FC99C12BFB08__CTOR_OFFSET UNITYSDK_OFFSET(0x10C4D6A0)

inline static constexpr unsigned int Class_1_3793FC99C12BFB08_TypeDefinitionIndex = 54769;

class Class_1_3793FC99C12BFB08 : public ::System::Object
{
public:
	::RPG::Client::RogueKeywordData* Field_1_1; // 0x10
	::Struct_2_FD0368737CBF6F9B_4 Field_1_0; // 0x18

	::System::Void _ctor(::Struct_2_FD0368737CBF6F9B_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FD0368737CBF6F9B_4))((::PBYTE)hIl2Cpp + CLASS_1_3793FC99C12BFB08__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_2F852B703EBC20D1()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3793FC99C12BFB08_METHOD_1_2F852B703EBC20D1_OFFSET))(this);
	}

	::RPG::Client::RogueKeywordData* Method_1_F394017D569B4C7C()
	{
		return ((::RPG::Client::RogueKeywordData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3793FC99C12BFB08_METHOD_1_F394017D569B4C7C_OFFSET))(this);
	}
};
