#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FORMATSTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x383D440)
#define RPG_GAMECORE_FORMATSTRING_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3852190)
#define RPG_GAMECORE_FORMATSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x383D440)
#define RPG_GAMECORE_FORMATSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3852210)
#define RPG_GAMECORE_FORMATSTRING_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x3852150)
#define RPG_GAMECORE_FORMATSTRING_GET_RAWSTRING_OFFSET UNITYSDK_OFFSET(0x5B60)
#define RPG_GAMECORE_FORMATSTRING_METHOD_2_188EEAAB5C523CC8_OFFSET UNITYSDK_OFFSET(0x19765570)
#define RPG_GAMECORE_FORMATSTRING_METHOD_2_2ED2786CBF32344F_OFFSET UNITYSDK_OFFSET(0x197655E0)
#define RPG_GAMECORE_FORMATSTRING_METHOD_2_553F65DA53A86C11_OFFSET UNITYSDK_OFFSET(0x19765650)
#define RPG_GAMECORE_FORMATSTRING_METHOD_2_737FB5FD0C118D8F_OFFSET UNITYSDK_OFFSET(0x19765680)
#define RPG_GAMECORE_FORMATSTRING_METHOD_2_D964DB46312B7B08_OFFSET UNITYSDK_OFFSET(0x197655A0)
#define RPG_GAMECORE_FORMATSTRING_METHOD_2_E6ABB66B71544341_OFFSET UNITYSDK_OFFSET(0x19765610)
#define RPG_GAMECORE_FORMATSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x5B60)
#define RPG_GAMECORE_FORMATSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x3852170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormatString_TypeDefinitionIndex = 10459;

	struct alignas(8) FormatString
	{
		::System::String* _rawString; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_RawString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_GET_RAWSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::FormatString a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean Method_2_188EEAAB5C523CC8(::RPG::GameCore::FormatString a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FormatString, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_METHOD_2_188EEAAB5C523CC8_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_D964DB46312B7B08(::RPG::GameCore::FormatString a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FormatString, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_METHOD_2_D964DB46312B7B08_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_2ED2786CBF32344F(::RPG::GameCore::FormatString a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FormatString, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_METHOD_2_2ED2786CBF32344F_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_E6ABB66B71544341(::RPG::GameCore::FormatString a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FormatString, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_METHOD_2_E6ABB66B71544341_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_553F65DA53A86C11(::System::String* a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_METHOD_2_553F65DA53A86C11_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_737FB5FD0C118D8F(::System::String* a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATSTRING_METHOD_2_737FB5FD0C118D8F_OFFSET))(a1, a2);
		}
	};
}
