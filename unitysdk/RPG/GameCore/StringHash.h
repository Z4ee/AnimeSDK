#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_STRINGHASH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2C4D0)
#define RPG_GAMECORE_STRINGHASH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3854430)
#define RPG_GAMECORE_STRINGHASH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define RPG_GAMECORE_STRINGHASH_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x148250)
#define RPG_GAMECORE_STRINGHASH_METHOD_2_1771EAEBC674C3A5_1_OFFSET UNITYSDK_OFFSET(0x19CC6460)
#define RPG_GAMECORE_STRINGHASH_METHOD_2_1771EAEBC674C3A5_OFFSET UNITYSDK_OFFSET(0x19CC6440)
#define RPG_GAMECORE_STRINGHASH_METHOD_2_843EF63EFF0E9907_OFFSET UNITYSDK_OFFSET(0x383A200)
#define RPG_GAMECORE_STRINGHASH_METHOD_2_FD3549386282C22D_OFFSET UNITYSDK_OFFSET(0x19CC6430)
#define RPG_GAMECORE_STRINGHASH_METHOD_2_FE052DFCB6080B60_OFFSET UNITYSDK_OFFSET(0x19CC6370)
#define RPG_GAMECORE_STRINGHASH__CTOR_OFFSET UNITYSDK_OFFSET(0x3854370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StringHash_TypeDefinitionIndex = 10470;

	struct alignas(4) StringHash
	{
		::System::Int32 Hash; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::StringHash Method_2_FE052DFCB6080B60(::System::String* a1)
		{
			return ((::RPG::GameCore::StringHash(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_METHOD_2_FE052DFCB6080B60_OFFSET))(a1);
		}

		static ::RPG::GameCore::StringHash Method_2_FD3549386282C22D(::System::Int32 a1)
		{
			return ((::RPG::GameCore::StringHash(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_METHOD_2_FD3549386282C22D_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_1771EAEBC674C3A5(::RPG::GameCore::StringHash a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StringHash, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_METHOD_2_1771EAEBC674C3A5_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_1771EAEBC674C3A5_1(::RPG::GameCore::StringHash a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StringHash, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_METHOD_2_1771EAEBC674C3A5_1_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* Method_2_843EF63EFF0E9907()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_METHOD_2_843EF63EFF0E9907_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGHASH_GET_ISEMPTY_OFFSET))(this);
		}
	};
}
