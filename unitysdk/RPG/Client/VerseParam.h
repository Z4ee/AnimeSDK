#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_VERSEPARAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xDFE00)
#define RPG_CLIENT_VERSEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0xDFDA0)
#define RPG_CLIENT_VERSEPARAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDFE10)
#define RPG_CLIENT_VERSEPARAM_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define RPG_CLIENT_VERSEPARAM_GET_ISBRANCHLINEVERSE_OFFSET UNITYSDK_OFFSET(0x1030)
#define RPG_CLIENT_VERSEPARAM_GET_ISEARLYACCESSVERSE_OFFSET UNITYSDK_OFFSET(0xDFD90)
#define RPG_CLIENT_VERSEPARAM_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_CLIENT_VERSEPARAM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB46B3E0)
#define RPG_CLIENT_VERSEPARAM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB46B450)
#define RPG_CLIENT_VERSEPARAM__CCTOR_OFFSET UNITYSDK_OFFSET(0xB46B530)
#define RPG_CLIENT_VERSEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xDFCF0)
#define RPG_CLIENT_VERSEPARAM___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xDFE60)
#define RPG_CLIENT_VERSEPARAM___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDFEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int VerseParam_TypeDefinitionIndex = 61092;

	struct alignas(4) VerseParam
	{
		static ::RPG::Client::VerseParam* StaticGet_Master()
		{
			return (::RPG::Client::VerseParam*)Il2CppClass::FromTypeDefinitionIndex(VerseParam_TypeDefinitionIndex)->GetStaticField(0x7AD0);
		}
		::System::UInt32 _StoryLineID_k__BackingField; // 0x10
		::System::UInt32 _ContentID_k__BackingField; // 0x14
		::System::UInt32 _Hash; // 0x18

		::System::Void _ctor(::System::UInt32 storyLineID, ::System::UInt32 contentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM__CTOR_OFFSET))(this, storyLineID, contentID);
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

		::System::Boolean Equals(::RPG::Client::VerseParam other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::VerseParam left, ::RPG::Client::VerseParam right)
		{
			return ((::System::Boolean(*)(::RPG::Client::VerseParam, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::VerseParam left, ::RPG::Client::VerseParam right)
		{
			return ((::System::Boolean(*)(::RPG::Client::VerseParam, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSEPARAM___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
