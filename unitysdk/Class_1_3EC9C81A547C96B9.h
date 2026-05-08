#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

#define CLASS_1_3EC9C81A547C96B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAEE4B0)

inline static constexpr unsigned int Class_1_3EC9C81A547C96B9_TypeDefinitionIndex = 9304;

class Class_1_3EC9C81A547C96B9 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::RegexOptions* StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::RegexOptions*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3EC9C81A547C96B9_TypeDefinitionIndex)->GetStaticField(0x3FB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3EC9C81A547C96B9__CCTOR_OFFSET))();
	}
};
