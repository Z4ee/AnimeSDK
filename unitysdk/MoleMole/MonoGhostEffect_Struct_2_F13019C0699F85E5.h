#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_EA1FEF8121ADE963;
namespace MoleMole::Config { class ConfigGhostMove; }
namespace System { class String; }

#define MOLEMOLE_MONOGHOSTEFFECT_STRUCT_2_F13019C0699F85E5__CTOR_OFFSET UNITYSDK_OFFSET(0x7AC340)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGhostEffect_Struct_2_F13019C0699F85E5_TypeDefinitionIndex = 55937;

	struct alignas(8) MonoGhostEffect_Struct_2_F13019C0699F85E5
	{
		::System::String* Field_2_0; // 0x10
		::System::Int32 Field_2_1; // 0x18
		::System::Single Field_2_2; // 0x1C
		::System::Single Field_2_3; // 0x20
		::System::Boolean Field_2_4; // 0x24
		::System::Boolean Field_2_5; // 0x25
		::System::Boolean Field_2_6; // 0x26
		::System::Boolean Field_2_7; // 0x27
		::MoleMole::Config::ConfigGhostMove* Field_2_8; // 0x28
		::Class_1_EA1FEF8121ADE963* Field_2_9; // 0x30

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::MoleMole::Config::ConfigGhostMove* a9, ::Class_1_EA1FEF8121ADE963* a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::ConfigGhostMove*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_STRUCT_2_F13019C0699F85E5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
	};
}
