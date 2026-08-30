#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TermInfoStrings.h"

namespace System::Collections { class Hashtable; }

#define SYSTEM_BYTEMATCHER_ADDMAPPING_OFFSET UNITYSDK_OFFSET(0x1C9C3180)
#define SYSTEM_BYTEMATCHER_MATCH_OFFSET UNITYSDK_OFFSET(0x1C9C3420)
#define SYSTEM_BYTEMATCHER_SORT_OFFSET UNITYSDK_OFFSET(0x1C9C3360)
#define SYSTEM_BYTEMATCHER_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x1C9C3370)
#define SYSTEM_BYTEMATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C3BD0)

namespace System
{
	inline static constexpr unsigned int ByteMatcher_TypeDefinitionIndex = 430;

	class ByteMatcher : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* starts; // 0x10
		::System::Collections::Hashtable* map; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER__CTOR_OFFSET))(this);
		}

		::System::Void AddMapping(::System::TermInfoStrings a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::TermInfoStrings, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_ADDMAPPING_OFFSET))(this, a1, a2);
		}

		::System::Void Sort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_SORT_OFFSET))(this);
		}

		::System::Boolean StartsWith(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_STARTSWITH_OFFSET))(this, a1);
		}

		::System::TermInfoStrings Match(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::System::TermInfoStrings(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_MATCH_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
