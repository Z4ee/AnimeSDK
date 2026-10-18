#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_A7D9701F5F4CE19E;
namespace System { class String; }

#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDAE2D80)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_ID_OFFSET UNITYSDK_OFFSET(0xDAE2C90)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_ISHAVETITLE_OFFSET UNITYSDK_OFFSET(0xDAE2CB0)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDAE2D00)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xDAE2E40)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET__DESCPARAMS_OFFSET UNITYSDK_OFFSET(0xDAE2EB0)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET__VALUE_OFFSET UNITYSDK_OFFSET(0xDAE2E90)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_SET_ID_OFFSET UNITYSDK_OFFSET(0xDAE2CA0)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_SET__DESCPARAMS_OFFSET UNITYSDK_OFFSET(0xDAE2EC0)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_SET__VALUE_OFFSET UNITYSDK_OFFSET(0xDAE2EA0)
#define RPG_CLIENT_PETMARBLEBATTLETITLE__COMBINEUSINGSELECTMANY_OFFSET UNITYSDK_OFFSET(0xDAE2B30)
#define RPG_CLIENT_PETMARBLEBATTLETITLE__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE2940)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleBattleTitle_TypeDefinitionIndex = 65816;

	class PetMarbleBattleTitle : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* __DescParams_k__BackingField; // 0x10
		::Class_1_A7D9701F5F4CE19E* _Row; // 0x18
		::System::Int32 __Value_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Int32>* _CombineUsingSelectMany(::Il2CppArray<::Il2CppArray<::System::Int32>*>* a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE__COMBINEUSINGSELECTMANY_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHaveTitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET_ISHAVETITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET_DESC_OFFSET))(this);
		}

		::System::Int32 get_Quality()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET_QUALITY_OFFSET))(this);
		}

		::System::Int32 get__Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET__VALUE_OFFSET))(this);
		}

		::System::Void set__Value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_SET__VALUE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get__DescParams()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET__DESCPARAMS_OFFSET))(this);
		}

		::System::Void set__DescParams(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_SET__DESCPARAMS_OFFSET))(this, a1);
		}
	};
}
