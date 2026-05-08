#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }

#define CLASS_1_3B63AD0C52BE27B4_CLASS_1_B29CC45F6C5A49D7_METHOD_1_2D062A5ECC1691B4_OFFSET UNITYSDK_OFFSET(0x118B0A40)
#define CLASS_1_3B63AD0C52BE27B4_CLASS_1_B29CC45F6C5A49D7__CTOR_OFFSET UNITYSDK_OFFSET(0x118B0A30)

inline static constexpr unsigned int Class_1_3B63AD0C52BE27B4_Class_1_B29CC45F6C5A49D7_TypeDefinitionIndex = 69433;

class Class_1_3B63AD0C52BE27B4_Class_1_B29CC45F6C5A49D7 : public ::System::Object
{
public:
	::MoleMole::Config::RenderMaterial* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B63AD0C52BE27B4_CLASS_1_B29CC45F6C5A49D7__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::RenderMaterial* Method_1_2D062A5ECC1691B4(::System::String* a1)
	{
		return ((::MoleMole::Config::RenderMaterial*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3B63AD0C52BE27B4_CLASS_1_B29CC45F6C5A49D7_METHOD_1_2D062A5ECC1691B4_OFFSET))(this, a1);
	}
};
