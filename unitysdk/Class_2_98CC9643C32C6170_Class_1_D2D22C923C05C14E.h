#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF;
class Class_2_98CC9643C32C6170_Class_1_985FB89D66798E31;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11F91110)
#define CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11F915A0)
#define CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11F91600)
#define CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11F915B0)
#define CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11F91100)
#define CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8DF50)

inline static constexpr unsigned int Class_2_98CC9643C32C6170_Class_1_D2D22C923C05C14E_TypeDefinitionIndex = 58123;

class Class_2_98CC9643C32C6170_Class_1_D2D22C923C05C14E : public ::System::Object
{
public:
	::Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF* Field_1_14; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::String* Field_1_15; // 0x20
	::Class_2_98CC9643C32C6170_Class_1_985FB89D66798E31* Field_1_10; // 0x28
	::System::Action_1<::Class_2_98CC9643C32C6170_Class_1_985FB89D66798E31*>* Field_1_6; // 0x30
	::System::Object* Field_1_1; // 0x38
	::System::Int32 Field_1_9; // 0x40
	::System::Int32 Field_1_2; // 0x44
	::System::Single Field_1_11; // 0x48
	::System::Boolean Field_1_5; // 0x4C
	::System::Single Field_1_0; // 0x50
	::System::Int32 Field_1_8; // 0x54
	::System::Single Field_1_7; // 0x58

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_D2D22C923C05C14E_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
