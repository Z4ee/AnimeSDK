#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6BFA61840E317AC4.h"
#include "unitysdk/Enum_3_F8C71DEE253F84BD.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/Struct_2_57C422EDEAAA7766.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_408;
class Class_0_16E4307DCC419505_642;
class Class_1_D65512A83CF70AB7;
namespace Nap::NapECS { class EcsEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_060D4137E420891B_METHOD_2_7DE4B1548720543E_OFFSET UNITYSDK_OFFSET(0x13529DC0)
#define CLASS_2_060D4137E420891B_METHOD_2_B455ED73ED9E4AEC_OFFSET UNITYSDK_OFFSET(0x1352A670)
#define CLASS_2_060D4137E420891B_METHOD_2_B61F8A5281A885C4_OFFSET UNITYSDK_OFFSET(0x1352A2A0)
#define CLASS_2_060D4137E420891B_METHOD_2_D26E09C55DFD9523_OFFSET UNITYSDK_OFFSET(0x1352A390)
#define CLASS_2_060D4137E420891B_METHOD_2_DD28B08B005CBCF9_OFFSET UNITYSDK_OFFSET(0x13529A90)
#define CLASS_2_060D4137E420891B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1352A790)
#define CLASS_2_060D4137E420891B_METHOD_2_F3017BC1697E3DC2_OFFSET UNITYSDK_OFFSET(0x13529F70)
#define CLASS_2_060D4137E420891B__CTOR_OFFSET UNITYSDK_OFFSET(0x13529A10)

inline static constexpr unsigned int Class_2_060D4137E420891B_TypeDefinitionIndex = 64770;

class Class_2_060D4137E420891B : public ::Foundation::Singleton_1<::Class_2_060D4137E420891B*>
{
public:
	::Class_0_16E4307DCC419505_408* Field_2_0; // 0x10
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_642*>* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_060D4137E420891B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_DD28B08B005CBCF9(::System::Int32 a1, ::Nap::NapECS::EcsEntity* a2, ::System::String* a3, ::Enum_3_6BFA61840E317AC4 a4, ::System::Action* a5, ::System::Action* a6, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::EcsEntity*, ::System::String*, ::Enum_3_6BFA61840E317AC4, ::System::Action*, ::System::Action*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_060D4137E420891B_METHOD_2_DD28B08B005CBCF9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_7DE4B1548720543E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_060D4137E420891B_METHOD_2_7DE4B1548720543E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3017BC1697E3DC2(::System::Int32 a1, ::Il2CppArray<::Struct_2_57C422EDEAAA7766>* a2, ::System::String* a3, ::Enum_3_F8C71DEE253F84BD a4, ::System::Action* a5, ::System::Action* a6, ::System::Action_1<::Class_1_D65512A83CF70AB7*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Struct_2_57C422EDEAAA7766>*, ::System::String*, ::Enum_3_F8C71DEE253F84BD, ::System::Action*, ::System::Action*, ::System::Action_1<::Class_1_D65512A83CF70AB7*>*))((::PBYTE)hIl2Cpp + CLASS_2_060D4137E420891B_METHOD_2_F3017BC1697E3DC2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_B61F8A5281A885C4(::System::Nullable_1<::System::Boolean> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_060D4137E420891B_METHOD_2_B61F8A5281A885C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_D26E09C55DFD9523(::System::Int32 a1, ::System::Nullable_1<::System::Boolean> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_060D4137E420891B_METHOD_2_D26E09C55DFD9523_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B455ED73ED9E4AEC(::System::Nullable_1<::System::Boolean> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_060D4137E420891B_METHOD_2_B455ED73ED9E4AEC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_060D4137E420891B_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
