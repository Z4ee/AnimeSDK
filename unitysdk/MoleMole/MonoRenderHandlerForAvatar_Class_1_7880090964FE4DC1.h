#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoRenderHandlerForAvatar_Enum_3_06AE57155DC501A1.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_CLASS_1_7880090964FE4DC1__CTOR_OFFSET UNITYSDK_OFFSET(0x13EA5940)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_Class_1_7880090964FE4DC1_TypeDefinitionIndex = 79426;

	class MonoRenderHandlerForAvatar_Class_1_7880090964FE4DC1 : public ::System::Object
	{
	public:
		::System::Int32 Field_1_2; // 0x10
		::System::UInt32 Field_1_1; // 0x14
		::MoleMole::MonoRenderHandlerForAvatar_Enum_3_06AE57155DC501A1 Field_1_0; // 0x18

		::System::Void _ctor(::MoleMole::MonoRenderHandlerForAvatar_Enum_3_06AE57155DC501A1 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandlerForAvatar_Enum_3_06AE57155DC501A1, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_CLASS_1_7880090964FE4DC1__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
