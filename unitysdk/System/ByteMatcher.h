#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TermInfoStrings.h"

namespace System::Collections { class Hashtable; }

#define SYSTEM_BYTEMATCHER_ADDMAPPING_OFFSET UNITYSDK_OFFSET(0x177E7310)
#define SYSTEM_BYTEMATCHER_MATCH_OFFSET UNITYSDK_OFFSET(0x177E7480)
#define SYSTEM_BYTEMATCHER_SORT_OFFSET UNITYSDK_OFFSET(0x177E7420)
#define SYSTEM_BYTEMATCHER_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x177E7430)
#define SYSTEM_BYTEMATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x177E79F0)

namespace System
{
	inline static constexpr unsigned int ByteMatcher_TypeDefinitionIndex = 428;

	class ByteMatcher : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* map; // 0x10
		::System::Collections::Hashtable* starts; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER__CTOR_OFFSET))(this);
		}

		::System::Void AddMapping(::System::TermInfoStrings key, ::Il2CppArray<::System::Byte>* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::TermInfoStrings, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_ADDMAPPING_OFFSET))(this, key, val);
		}

		::System::Void Sort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_SORT_OFFSET))(this);
		}

		::System::Boolean StartsWith(::System::Int32 c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_STARTSWITH_OFFSET))(this, c);
		}

		::System::TermInfoStrings Match(::Il2CppArray<::System::Char>* buffer, ::System::Int32 offset, ::System::Int32 length, ::System::Int32& used)
		{
			return ((::System::TermInfoStrings(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_MATCH_OFFSET))(this, buffer, offset, length, used);
		}
	};
}
