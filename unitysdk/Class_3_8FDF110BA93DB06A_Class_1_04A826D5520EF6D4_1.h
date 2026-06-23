#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_8FDF110BA93DB06A_Class_0_16E7307DCC43CB2C_33;
class Class_3_8FDF110BA93DB06A_Class_1_74D61FAFA6468DC6;
namespace System { class Action; }

#define CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14141330)
#define CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14141AC0)
#define CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14141B20)
#define CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14141AD0)
#define CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14141320)
#define CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14141310)

inline static constexpr unsigned int Class_3_8FDF110BA93DB06A_Class_1_04A826D5520EF6D4_1_TypeDefinitionIndex = 60987;

class Class_3_8FDF110BA93DB06A_Class_1_04A826D5520EF6D4_1 : public ::System::Object
{
public:
	::Class_3_8FDF110BA93DB06A_Class_0_16E7307DCC43CB2C_33* Field_1_2; // 0x10
	::Class_3_8FDF110BA93DB06A_Class_1_74D61FAFA6468DC6* Field_1_13; // 0x18
	::Class_3_8FDF110BA93DB06A_Class_1_74D61FAFA6468DC6* Field_1_14; // 0x20
	::System::Action* Field_1_5; // 0x28
	::MoleMole::Config::ProjectileTraitConfig Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_7; // 0x48
	::UnityEngine::Vector3 Field_1_9; // 0x54
	::System::Single Field_1_12; // 0x60
	::System::Single Field_1_11; // 0x64
	::UnityEngine::Vector3 Field_1_6; // 0x68
	::UnityEngine::Vector3 Field_1_3; // 0x74
	::UnityEngine::Vector3 Field_1_8; // 0x80
	::System::Single Field_1_10; // 0x8C
	::System::Single Field_1_1; // 0x90
	::System::Int32 Field_1_0; // 0x94

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_04A826D5520EF6D4_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
