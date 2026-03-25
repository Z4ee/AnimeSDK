#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_2A4C736BDC15CDDB_CLASS_1_AA7188805115876B__CTOR_OFFSET UNITYSDK_OFFSET(0x104D61B0)

inline static constexpr unsigned int Class_1_2A4C736BDC15CDDB_Class_1_AA7188805115876B_TypeDefinitionIndex = 56789;

class Class_1_2A4C736BDC15CDDB_Class_1_AA7188805115876B : public ::System::Object
{
public:
	::System::Text::StringBuilder* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::String* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB_CLASS_1_AA7188805115876B__CTOR_OFFSET))(this);
	}
};
