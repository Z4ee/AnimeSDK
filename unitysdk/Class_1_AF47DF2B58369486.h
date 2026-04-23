#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Expression/TokenType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_AF47DF2B58369486__CTOR_OFFSET UNITYSDK_OFFSET(0x182D0200)

inline static constexpr unsigned int Class_1_AF47DF2B58369486_TypeDefinitionIndex = 10053;

class Class_1_AF47DF2B58369486 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::Expression::TokenType Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF47DF2B58369486__CTOR_OFFSET))(this);
	}
};
