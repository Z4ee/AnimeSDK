#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2A4C736BDC15CDDB_CLASS_1_A01DCCD8CC955810__CTOR_OFFSET UNITYSDK_OFFSET(0xB71A9B0)

inline static constexpr unsigned int Class_1_2A4C736BDC15CDDB_Class_1_A01DCCD8CC955810_TypeDefinitionIndex = 69451;

class Class_1_2A4C736BDC15CDDB_Class_1_A01DCCD8CC955810 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* PKKNHGGEPMJ; // 0x10
	::System::String* DFNBPMDNOKF; // 0x18
	::System::String* EKIJFPIPCKF; // 0x20
	::System::String* NELOPEIOFHP; // 0x28
	::UnityEngine::LogType KNEPICDALGD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A4C736BDC15CDDB_CLASS_1_A01DCCD8CC955810__CTOR_OFFSET))(this);
	}
};
