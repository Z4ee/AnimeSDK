#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_270;

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_STRUCT_2_6D728CF44190FF2F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x7531F0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_STRUCT_2_6D728CF44190FF2F_METHOD_2_B3D6D1CCB647B80C_OFFSET UNITYSDK_OFFSET(0x753100)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F_TypeDefinitionIndex = 42951;

	struct alignas(8) MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F
	{
		::UnityEngine::Vector3 Field_2_1; // 0x10
		::UnityEngine::Vector3 Field_2_0; // 0x1C
		::UnityEngine::Vector3 Field_2_7; // 0x28
		::UnityEngine::Vector3 Field_2_6; // 0x34
		::UnityEngine::Vector3 Field_2_5; // 0x40
		::UnityEngine::Vector3 Field_2_4; // 0x4C
		::System::Single Field_2_11; // 0x58
		::System::Int32 Field_2_10; // 0x5C
		::System::Boolean Field_2_9; // 0x60
		::Class_0_16E4307DCC419505_270* Field_2_8; // 0x68

		::System::Boolean Method_2_B3D6D1CCB647B80C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_STRUCT_2_6D728CF44190FF2F_METHOD_2_B3D6D1CCB647B80C_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_STRUCT_2_6D728CF44190FF2F_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}
	};
}
