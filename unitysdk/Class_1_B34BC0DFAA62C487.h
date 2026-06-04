#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_B34BC0DFAA62C487_METHOD_1_239127A8B01A1A3F_OFFSET UNITYSDK_OFFSET(0x190E1240)
#define CLASS_1_B34BC0DFAA62C487__CTOR_OFFSET UNITYSDK_OFFSET(0x190E1380)

inline static constexpr unsigned int Class_1_B34BC0DFAA62C487_TypeDefinitionIndex = 13500;

class Class_1_B34BC0DFAA62C487 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B34BC0DFAA62C487__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_239127A8B01A1A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B34BC0DFAA62C487*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B34BC0DFAA62C487*&))((::PBYTE)hIl2Cpp + CLASS_1_B34BC0DFAA62C487_METHOD_1_239127A8B01A1A3F_OFFSET))(a1, a2);
	}
};
