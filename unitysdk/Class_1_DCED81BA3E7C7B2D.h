#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpecialNPCDataRow; }
namespace System { class String; }

#define CLASS_1_DCED81BA3E7C7B2D__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA9260)

inline static constexpr unsigned int Class_1_DCED81BA3E7C7B2D_TypeDefinitionIndex = 62789;

class Class_1_DCED81BA3E7C7B2D : public ::System::Object
{
public:
	::RPG::GameCore::SpecialNPCDataRow* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DCED81BA3E7C7B2D__CTOR_OFFSET))(this, a1);
	}
};
