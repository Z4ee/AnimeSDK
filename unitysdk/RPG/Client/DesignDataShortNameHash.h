#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3C8CC60)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3C9FAC0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C9FAD0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_EQUALS_OFFSET UNITYSDK_OFFSET(0x84C2D0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B67D00)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_3F760D501F194509_OFFSET UNITYSDK_OFFSET(0x1EFC85D0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_6D7E8958B064AE42_OFFSET UNITYSDK_OFFSET(0x1EFC8540)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_C6FDF346FA3CF4A3_OFFSET UNITYSDK_OFFSET(0x1EFC85A0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_CEC046D7238DBFD9_1_OFFSET UNITYSDK_OFFSET(0x1EFC87C0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_CEC046D7238DBFD9_OFFSET UNITYSDK_OFFSET(0x1EFC87B0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_EC3ED7E35FB3EB27_OFFSET UNITYSDK_OFFSET(0x1EFC8590)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x84C280)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C8CCA0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFC87D0)
#define RPG_CLIENT_DESIGNDATASHORTNAMEHASH__CTOR_OFFSET UNITYSDK_OFFSET(0x16050)

namespace RPG::Client
{
	inline static constexpr unsigned int DesignDataShortNameHash_TypeDefinitionIndex = 34600;

	struct alignas(8) DesignDataShortNameHash
	{
		static ::RPG::Client::DesignDataShortNameHash* StaticGet_Empty()
		{
			return (::RPG::Client::DesignDataShortNameHash*)Il2CppClass::FromTypeDefinitionIndex(DesignDataShortNameHash_TypeDefinitionIndex)->GetStaticField(0x5A0);
		}
		::System::UInt64 Value; // 0x10

		::System::Void _ctor(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH__CCTOR_OFFSET))();
		}

		static ::RPG::Client::DesignDataShortNameHash Method_2_6D7E8958B064AE42(::System::String* a1)
		{
			return ((::RPG::Client::DesignDataShortNameHash(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_6D7E8958B064AE42_OFFSET))(a1);
		}

		static ::RPG::Client::DesignDataShortNameHash Method_2_EC3ED7E35FB3EB27(::System::UInt32 a1)
		{
			return ((::RPG::Client::DesignDataShortNameHash(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_EC3ED7E35FB3EB27_OFFSET))(a1);
		}

		static ::RPG::Client::DesignDataShortNameHash Method_2_C6FDF346FA3CF4A3(::System::UInt32 a1)
		{
			return ((::RPG::Client::DesignDataShortNameHash(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_C6FDF346FA3CF4A3_OFFSET))(a1);
		}

		static ::System::UInt32 Method_2_3F760D501F194509(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_3F760D501F194509_OFFSET))(a1);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::RPG::Client::DesignDataShortNameHash a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_COMPARETO_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::DesignDataShortNameHash a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean Method_2_CEC046D7238DBFD9(::RPG::Client::DesignDataShortNameHash a1, ::RPG::Client::DesignDataShortNameHash a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::DesignDataShortNameHash, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_CEC046D7238DBFD9_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_CEC046D7238DBFD9_1(::RPG::Client::DesignDataShortNameHash a1, ::RPG::Client::DesignDataShortNameHash a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::DesignDataShortNameHash, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATASHORTNAMEHASH_METHOD_2_CEC046D7238DBFD9_1_OFFSET))(a1, a2);
		}
	};
}
