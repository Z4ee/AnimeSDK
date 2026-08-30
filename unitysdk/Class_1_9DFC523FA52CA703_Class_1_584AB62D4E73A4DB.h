#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterAtlasFace; }
namespace System { class String; }

#define CLASS_1_9DFC523FA52CA703_CLASS_1_584AB62D4E73A4DB__CTOR_OFFSET UNITYSDK_OFFSET(0x152DD1C0)

inline static constexpr unsigned int Class_1_9DFC523FA52CA703_Class_1_584AB62D4E73A4DB_TypeDefinitionIndex = 57319;

class Class_1_9DFC523FA52CA703_Class_1_584AB62D4E73A4DB : public ::System::Object
{
public:
	::System::String* NAJMIHJAHIM; // 0x10
	::RPG::Client::CharacterAtlasFace* KCKBEDBOFPN; // 0x18
	::System::Int32 CPHCMPEPGFF; // 0x20
	::System::Nullable_1<::System::Int32> LIOLHKEJBMA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFC523FA52CA703_CLASS_1_584AB62D4E73A4DB__CTOR_OFFSET))(this);
	}
};
