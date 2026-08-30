#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ProfileCounterRestRule.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_PROFILECOUNTER_ADD_OFFSET UNITYSDK_OFFSET(0x1EF92D70)
#define RPG_PROFILECOUNTER_GET_CACHEDVALUE_OFFSET UNITYSDK_OFFSET(0x1EF92B60)
#define RPG_PROFILECOUNTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EF92B90)
#define RPG_PROFILECOUNTER_GET_RESTRULE_OFFSET UNITYSDK_OFFSET(0x1EF92B80)
#define RPG_PROFILECOUNTER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EF92B40)
#define RPG_PROFILECOUNTER_OP_DECREMENT_OFFSET UNITYSDK_OFFSET(0x1EF92DA0)
#define RPG_PROFILECOUNTER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EF92DC0)
#define RPG_PROFILECOUNTER_OP_INCREMENT_OFFSET UNITYSDK_OFFSET(0x1EF92D80)
#define RPG_PROFILECOUNTER_SETVAL_OFFSET UNITYSDK_OFFSET(0x1EF92D60)
#define RPG_PROFILECOUNTER_SETZERO_OFFSET UNITYSDK_OFFSET(0x1EF92D50)
#define RPG_PROFILECOUNTER_SET_CACHEDVALUE_OFFSET UNITYSDK_OFFSET(0x1EF92B70)
#define RPG_PROFILECOUNTER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1EF92BA0)
#define RPG_PROFILECOUNTER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EF92B50)
#define RPG_PROFILECOUNTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EF92DE0)
#define RPG_PROFILECOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF92BB0)

namespace RPG
{
	inline static constexpr unsigned int ProfileCounter_TypeDefinitionIndex = 34490;

	class ProfileCounter : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int32 _Value_k__BackingField; // 0x18
		::RPG::ProfileCounterRestRule _RestRule_k__BackingField; // 0x1C
		::System::Int32 _CachedValue_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::RPG::ProfileCounterRestRule a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::RPG::ProfileCounterRestRule))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_CachedValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_GET_CACHEDVALUE_OFFSET))(this);
		}

		::System::Void set_CachedValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_SET_CACHEDVALUE_OFFSET))(this, a1);
		}

		::RPG::ProfileCounterRestRule get_RestRule()
		{
			return ((::RPG::ProfileCounterRestRule(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_GET_RESTRULE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_SET_NAME_OFFSET))(this, a1);
		}

		::System::Void SetZero()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_SETZERO_OFFSET))(this);
		}

		::System::Void SetVal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_SETVAL_OFFSET))(this, a1);
		}

		::RPG::ProfileCounter* Add(::System::Int32 a1)
		{
			return ((::RPG::ProfileCounter*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_ADD_OFFSET))(this, a1);
		}

		static ::RPG::ProfileCounter* op_Increment(::RPG::ProfileCounter* a1)
		{
			return ((::RPG::ProfileCounter*(*)(::RPG::ProfileCounter*))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_OP_INCREMENT_OFFSET))(a1);
		}

		static ::RPG::ProfileCounter* op_Decrement(::RPG::ProfileCounter* a1)
		{
			return ((::RPG::ProfileCounter*(*)(::RPG::ProfileCounter*))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_OP_DECREMENT_OFFSET))(a1);
		}

		static ::System::Int32 op_Implicit(::RPG::ProfileCounter* a1)
		{
			return ((::System::Int32(*)(::RPG::ProfileCounter*))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_TOSTRING_OFFSET))(this);
		}
	};
}
