#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoRenderHandlerForAvatar_Class_1_7880090964FE4DC1; }
namespace System { class String; }

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_CLASS_1_1B3CC12956149BFF__CTOR_OFFSET UNITYSDK_OFFSET(0x191ADB30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_Class_1_1B3CC12956149BFF_TypeDefinitionIndex = 61515;

	class MonoRenderHandlerForAvatar_Class_1_1B3CC12956149BFF : public ::System::Object
	{
	public:
		::System::String* Field_1_7; // 0x10
		::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_7880090964FE4DC1*>* Field_1_5; // 0x18
		::System::Int32 Field_1_6; // 0x20
		::MoleMole::Config::MaterialPropertyType Field_1_0; // 0x24

		::System::Void _ctor(::MoleMole::Config::MaterialPropertyType a1, ::System::String* a2, ::System::Int32 a3, ::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_7880090964FE4DC1*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::String*, ::System::Int32, ::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_7880090964FE4DC1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_CLASS_1_1B3CC12956149BFF__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
