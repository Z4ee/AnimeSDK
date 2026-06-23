#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_98CC9643C32C6170_Class_1_0721B72B57E972E6;
class Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12FBD210)
#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12FBDA00)
#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12FBDA60)
#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12FBDA10)
#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12FBD200)
#define CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12FBD1F0)

inline static constexpr unsigned int Class_2_98CC9643C32C6170_Class_1_72D782B4CA1FAA6B_1_TypeDefinitionIndex = 82065;

class Class_2_98CC9643C32C6170_Class_1_72D782B4CA1FAA6B_1 : public ::System::Object
{
public:
	::System::Action_2<::System::String*, ::Class_2_98CC9643C32C6170_Class_1_0721B72B57E972E6*>* Field_1_2; // 0x10
	::System::String* Field_1_10; // 0x18
	::System::Object* Field_1_1; // 0x20
	::System::String* Field_1_7; // 0x28
	::System::Action_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* Field_1_3; // 0x30
	::Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF* Field_1_6; // 0x38
	::Class_2_98CC9643C32C6170_Class_1_0721B72B57E972E6* Field_1_5; // 0x40
	::System::Boolean Field_1_4; // 0x48
	::System::Int32 Field_1_8; // 0x4C
	::System::Int32 Field_1_9; // 0x50
	::System::Int32 Field_1_0; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_72D782B4CA1FAA6B_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
