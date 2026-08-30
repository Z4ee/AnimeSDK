#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_VERSEPARAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15A090)
#define RPG_CLIENT_VERSEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x15A030)
#define RPG_CLIENT_VERSEPARAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15A0A0)
#define RPG_CLIENT_VERSEPARAM_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1E120)
#define RPG_CLIENT_VERSEPARAM_GET_ISBRANCHLINEVERSE_OFFSET UNITYSDK_OFFSET(0x159F90)
#define RPG_CLIENT_VERSEPARAM_GET_ISEARLYACCESSVERSE_OFFSET UNITYSDK_OFFSET(0x159FE0)
#define RPG_CLIENT_VERSEPARAM_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x5F00)
#define RPG_CLIENT_VERSEPARAM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE3F98C0)
#define RPG_CLIENT_VERSEPARAM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE3F9930)
#define RPG_CLIENT_VERSEPARAM__CCTOR_OFFSET UNITYSDK_OFFSET(0xE3F9A10)
#define RPG_CLIENT_VERSEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x159EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int VerseParam_TypeDefinitionIndex = 66366;

	struct alignas(4) VerseParam
	{
		static ::RPG::Client::VerseParam* StaticGet_Master()
		{
			return (::RPG::Client::VerseParam*)Il2CppClass::FromTypeDefinitionIndex(VerseParam_TypeDefinitionIndex)->GetStaticField(0x1EC0);
		}
		::System::UInt32 _StoryLineID_k__BackingField; // 0x10
		::System::UInt32 _ContentID_k__BackingField; // 0x14
		::System::UInt32 _Hash; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM__CCTOR_OFFSET))();
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsBranchLineVerse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_GET_ISBRANCHLINEVERSE_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccessVerse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_GET_ISEARLYACCESSVERSE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::VerseParam a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::VerseParam a1, ::RPG::Client::VerseParam a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::VerseParam, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::VerseParam a1, ::RPG::Client::VerseParam a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::VerseParam, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
