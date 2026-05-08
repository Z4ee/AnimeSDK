#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF;
class Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x140A2050)
#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140A2970)
#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140A29D0)
#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x140A2980)
#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140A2040)
#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B__CTOR_OFFSET UNITYSDK_OFFSET(0x140A2030)

inline static constexpr unsigned int Class_2_98CC9643C32C6170_Class_1_72D782B4CA1FAA6B_TypeDefinitionIndex = 66450;

class Class_2_98CC9643C32C6170_Class_1_72D782B4CA1FAA6B : public ::System::Object
{
public:
	::Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF* Field_1_6; // 0x10
	::System::Object* Field_1_1; // 0x18
	::System::String* Field_1_7; // 0x20
	::System::Action_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* Field_1_3; // 0x28
	::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB* Field_1_5; // 0x30
	::System::Action_2<::System::String*, ::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB*>* Field_1_2; // 0x38
	::System::Int32 Field_1_8; // 0x40
	::System::Boolean Field_1_4; // 0x44
	::System::Int32 Field_1_0; // 0x48

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
