#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoRenderHandlerForAvatar_Class_1_7880090964FE4DC1; }
namespace System { class String; }

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_CLASS_1_F93622965C4FA6CC__CTOR_OFFSET UNITYSDK_OFFSET(0x13F15580)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_Class_1_F93622965C4FA6CC_TypeDefinitionIndex = 51398;

	class MonoRenderHandlerForAvatar_Class_1_F93622965C4FA6CC : public ::System::Object
	{
	public:
		::System::String* Field_1_1; // 0x10
		::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_7880090964FE4DC1*>* Field_1_2; // 0x18
		::MoleMole::Config::MaterialPropertyType Field_1_0; // 0x20

		::System::Void _ctor(::MoleMole::Config::MaterialPropertyType a1, ::System::String* a2, ::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_7880090964FE4DC1*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::String*, ::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_7880090964FE4DC1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_CLASS_1_F93622965C4FA6CC__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
