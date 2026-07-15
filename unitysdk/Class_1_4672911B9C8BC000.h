#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4672911B9C8BC000_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175488A0)
#define CLASS_1_4672911B9C8BC000_GET_ISFEVERACTIVE_OFFSET UNITYSDK_OFFSET(0x1754AE50)
#define CLASS_1_4672911B9C8BC000_GET_LEVELABILITYEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1754AE70)
#define CLASS_1_4672911B9C8BC000_METHOD_1_2DE0A25F2BA88D88_OFFSET UNITYSDK_OFFSET(0x17548900)
#define CLASS_1_4672911B9C8BC000_METHOD_1_5F5CB296827BD99A_OFFSET UNITYSDK_OFFSET(0x17549050)
#define CLASS_1_4672911B9C8BC000_METHOD_1_907E24F785836BA0_1_OFFSET UNITYSDK_OFFSET(0x1754AA80)
#define CLASS_1_4672911B9C8BC000_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x1754A6B0)
#define CLASS_1_4672911B9C8BC000_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x17549890)
#define CLASS_1_4672911B9C8BC000_METHOD_1_A88E33775C007389_OFFSET UNITYSDK_OFFSET(0x175493D0)
#define CLASS_1_4672911B9C8BC000_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x17549DC0)
#define CLASS_1_4672911B9C8BC000_METHOD_1_CA6F54EC75C48EC4_OFFSET UNITYSDK_OFFSET(0x17548B80)
#define CLASS_1_4672911B9C8BC000_METHOD_1_DDBFE8E9D8449B5F_OFFSET UNITYSDK_OFFSET(0x175496C0)
#define CLASS_1_4672911B9C8BC000_SET_ISFEVERACTIVE_OFFSET UNITYSDK_OFFSET(0x1754AE60)
#define CLASS_1_4672911B9C8BC000_SET_LEVELABILITYEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1754AE80)
#define CLASS_1_4672911B9C8BC000__CCTOR_OFFSET UNITYSDK_OFFSET(0x1754AE90)
#define CLASS_1_4672911B9C8BC000__CTOR_OFFSET UNITYSDK_OFFSET(0x17548830)

inline static constexpr unsigned int Class_1_4672911B9C8BC000_TypeDefinitionIndex = 73792;

class Class_1_4672911B9C8BC000 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4672911B9C8BC000_TypeDefinitionIndex)->GetStaticField(0x5DA60);
	}
	::RPG::GameCore::TaskContext* Field_1_1; // 0x10
	::Class_3_97041AE90E3B2214* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* _LevelAbilityEffectIDs_k__BackingField; // 0x20
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

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_1_907E24F785836BA0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4672911B9C8BC000_METHOD_1_907E24F785836BA0_1_OFFSET))(this);
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
