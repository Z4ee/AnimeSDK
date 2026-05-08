#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_F639F9869450856A_Class_0_16E7307DCC43CB2C_16;
class Class_2_F639F9869450856A_Class_1_74D61FAFA6468DC6;
namespace System { class Action; }

#define CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11E9F8F0)
#define CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11EA0430)
#define CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11EA0490)
#define CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11EA0440)
#define CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11E9F8E0)
#define CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4__CTOR_OFFSET UNITYSDK_OFFSET(0x11E9F8D0)

inline static constexpr unsigned int Class_2_F639F9869450856A_Class_1_04A826D5520EF6D4_TypeDefinitionIndex = 42048;

class Class_2_F639F9869450856A_Class_1_04A826D5520EF6D4 : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::MoleMole::Config::ProjectileTraitConfig Field_1_4; // 0x18
	::Class_2_F639F9869450856A_Class_1_74D61FAFA6468DC6* Field_1_14; // 0x30
	::Class_2_F639F9869450856A_Class_0_16E7307DCC43CB2C_16* Field_1_2; // 0x38
	::Class_2_F639F9869450856A_Class_1_74D61FAFA6468DC6* Field_1_13; // 0x40
	::System::Single Field_1_1; // 0x48
	::System::Single Field_1_10; // 0x4C
	::UnityEngine::Vector3 Field_1_9; // 0x50
	::UnityEngine::Vector3 Field_1_3; // 0x5C
	::System::Single Field_1_12; // 0x68
	::UnityEngine::Vector3 Field_1_6; // 0x6C
	::System::Int32 Field_1_0; // 0x78
	::System::Single Field_1_11; // 0x7C
	::UnityEngine::Vector3 Field_1_8; // 0x80
	::UnityEngine::Vector3 Field_1_7; // 0x8C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_04A826D5520EF6D4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
