#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2A4C736BDC15CDDB_CLASS_1_A01DCCD8CC955810__CTOR_OFFSET UNITYSDK_OFFSET(0xA471EB0)

inline static constexpr unsigned int Class_1_2A4C736BDC15CDDB_Class_1_A01DCCD8CC955810_TypeDefinitionIndex = 64954;

class Class_1_2A4C736BDC15CDDB_Class_1_A01DCCD8CC955810 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_3; // 0x28
	::UnityEngine::LogType Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB_CLASS_1_A01DCCD8CC955810__CTOR_OFFSET))(this);
	}
};
