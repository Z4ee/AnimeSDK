#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4672911B9C8BC000_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A26050)
#define CLASS_1_4672911B9C8BC000_GET_ISFEVERACTIVE_OFFSET UNITYSDK_OFFSET(0x15A282C0)
#define CLASS_1_4672911B9C8BC000_GET_LEVELABILITYEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x15A282E0)
#define CLASS_1_4672911B9C8BC000_METHOD_1_2DE0A25F2BA88D88_OFFSET UNITYSDK_OFFSET(0x15A260C0)
#define CLASS_1_4672911B9C8BC000_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x15A274B0)
#define CLASS_1_4672911B9C8BC000_METHOD_1_5F5CB296827BD99A_OFFSET UNITYSDK_OFFSET(0x15A26810)
#define CLASS_1_4672911B9C8BC000_METHOD_1_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x15A27050)
#define CLASS_1_4672911B9C8BC000_METHOD_1_A88E33775C007389_OFFSET UNITYSDK_OFFSET(0x15A26B90)
#define CLASS_1_4672911B9C8BC000_METHOD_1_B2AF81294D9C69C7_1_OFFSET UNITYSDK_OFFSET(0x15A27F90)
#define CLASS_1_4672911B9C8BC000_METHOD_1_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x15A27C60)
#define CLASS_1_4672911B9C8BC000_METHOD_1_CA6F54EC75C48EC4_OFFSET UNITYSDK_OFFSET(0x15A26340)
#define CLASS_1_4672911B9C8BC000_METHOD_1_DDBFE8E9D8449B5F_OFFSET UNITYSDK_OFFSET(0x15A26E80)
#define CLASS_1_4672911B9C8BC000_SET_ISFEVERACTIVE_OFFSET UNITYSDK_OFFSET(0x15A282D0)
#define CLASS_1_4672911B9C8BC000_SET_LEVELABILITYEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x15A282F0)
#define CLASS_1_4672911B9C8BC000__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A28300)
#define CLASS_1_4672911B9C8BC000__CTOR_OFFSET UNITYSDK_OFFSET(0x15A25FE0)

inline static constexpr unsigned int Class_1_4672911B9C8BC000_TypeDefinitionIndex = 77747;

class Class_1_4672911B9C8BC000 : public ::System::Object
{
public:
	static ::System::String** StaticGet_AEHELPPEJAE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4672911B9C8BC000_TypeDefinitionIndex)->GetStaticField(0x65330);
	}
	::RPG::GameCore::TaskContext* CHIIOPDCIBG; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* _LevelAbilityEffectIDs_k__BackingField; // 0x18
	::Class_3_97041AE90E3B2214* PDENFEFCAGN; // 0x20
	::System::Boolean _IsFeverActive_k__BackingField; // 0x28

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2DE0A25F2BA88D88(::Class_2_5436AF4270279182* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_2DE0A25F2BA88D88_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA6F54EC75C48EC4(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_CA6F54EC75C48EC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F5CB296827BD99A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_5F5CB296827BD99A_OFFSET))(this, a1);
	}

	::System::Void Method_1_A88E33775C007389(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_A88E33775C007389_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDBFE8E9D8449B5F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_DDBFE8E9D8449B5F_OFFSET))(this);
	}

	::System::Void Method_1_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_1_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_1_B2AF81294D9C69C7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_B2AF81294D9C69C7_1_OFFSET))(this);
	}

	::System::Boolean get_IsFeverActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_GET_ISFEVERACTIVE_OFFSET))(this);
	}

	::System::Void set_IsFeverActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_SET_ISFEVERACTIVE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* get_LevelAbilityEffectIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_GET_LEVELABILITYEFFECTIDS_OFFSET))(this);
	}

	::System::Void set_LevelAbilityEffectIDs(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_SET_LEVELABILITYEFFECTIDS_OFFSET))(this, a1);
	}
};
