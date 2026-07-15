#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterAtlasFace; }
namespace System { class String; }

#define CLASS_1_9DFC523FA52CA703_CLASS_1_584AB62D4E73A4DB__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA2940)

inline static constexpr unsigned int Class_1_9DFC523FA52CA703_Class_1_584AB62D4E73A4DB_TypeDefinitionIndex = 54598;

class Class_1_9DFC523FA52CA703_Class_1_584AB62D4E73A4DB : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::CharacterAtlasFace* Field_1_1; // 0x18
	::System::Nullable_1<::System::Int32> Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFC523FA52CA703_CLASS_1_584AB62D4E73A4DB__CTOR_OFFSET))(this);
	}
};
