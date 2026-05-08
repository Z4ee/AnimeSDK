#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_19C62F41C71F0C80_METHOD_1_6667C1084D90FE78_OFFSET UNITYSDK_OFFSET(0x119E9F40)
#define CLASS_1_19C62F41C71F0C80_METHOD_1_734CC02BC400E093_OFFSET UNITYSDK_OFFSET(0x119E9E90)
#define CLASS_1_19C62F41C71F0C80_METHOD_1_771CB62F691CCB70_OFFSET UNITYSDK_OFFSET(0x119EA480)
#define CLASS_1_19C62F41C71F0C80_METHOD_1_8B5D59A691F4A426_OFFSET UNITYSDK_OFFSET(0x119EA640)
#define CLASS_1_19C62F41C71F0C80_METHOD_1_9A27B81DD745763E_OFFSET UNITYSDK_OFFSET(0x119E9BF0)
#define CLASS_1_19C62F41C71F0C80_METHOD_1_B228AD07B04D4BE0_OFFSET UNITYSDK_OFFSET(0x119E9A20)
#define CLASS_1_19C62F41C71F0C80_METHOD_1_D78C2CD219118066_OFFSET UNITYSDK_OFFSET(0x119EA5E0)
#define CLASS_1_19C62F41C71F0C80_METHOD_1_FD89CB5A79DFB2FD_OFFSET UNITYSDK_OFFSET(0x119E9FC0)
#define CLASS_1_19C62F41C71F0C80__CCTOR_OFFSET UNITYSDK_OFFSET(0x119E9990)
#define CLASS_1_19C62F41C71F0C80__CTOR_OFFSET UNITYSDK_OFFSET(0x119E98A0)

inline static constexpr unsigned int Class_1_19C62F41C71F0C80_TypeDefinitionIndex = 81704;

class Class_1_19C62F41C71F0C80 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_19C62F41C71F0C80_TypeDefinitionIndex)->GetStaticField(0xF760);
	}
	::System::Collections::Generic::LinkedList_1<::System::Action_1<::System::EventArgs*>*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Action_1<::System::EventArgs*>*, ::System::Boolean>>* Field_1_4; // 0x18
	::System::EventArgs* Field_1_7; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Action_1<::System::EventArgs*>*>* Field_1_3; // 0x28
	::System::Boolean Field_1_6; // 0x30
	::System::Boolean Field_1_5; // 0x31
	::System::Int32 Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19C62F41C71F0C80__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19C62F41C71F0C80__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B228AD07B04D4BE0(::System::Action_1<::System::EventArgs*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_1_19C62F41C71F0C80_METHOD_1_B228AD07B04D4BE0_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_734CC02BC400E093(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19C62F41C71F0C80_METHOD_1_734CC02BC400E093_OFFSET))(a1);
	}

	static ::System::Void Method_1_6667C1084D90FE78(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19C62F41C71F0C80_METHOD_1_6667C1084D90FE78_OFFSET))(a1);
	}

	::System::Void Method_1_FD89CB5A79DFB2FD(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_19C62F41C71F0C80_METHOD_1_FD89CB5A79DFB2FD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A27B81DD745763E(::System::Action_1<::System::EventArgs*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19C62F41C71F0C80_METHOD_1_9A27B81DD745763E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_771CB62F691CCB70(::System::Action_1<::System::EventArgs*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_1_19C62F41C71F0C80_METHOD_1_771CB62F691CCB70_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D78C2CD219118066()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19C62F41C71F0C80_METHOD_1_D78C2CD219118066_OFFSET))(this);
	}

	::System::Boolean Method_1_8B5D59A691F4A426(::System::Action_1<::System::EventArgs*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_1_19C62F41C71F0C80_METHOD_1_8B5D59A691F4A426_OFFSET))(this, a1);
	}
};
