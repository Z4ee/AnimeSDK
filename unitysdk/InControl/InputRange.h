#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputRangeType.h"
#include "unitysdk/System/ValueType.h"

#define INCONTROL_INPUTRANGE_EXCLUDES_1_OFFSET UNITYSDK_OFFSET(0x15B6DD00)
#define INCONTROL_INPUTRANGE_EXCLUDES_OFFSET UNITYSDK_OFFSET(0x20C5720)
#define INCONTROL_INPUTRANGE_INCLUDES_OFFSET UNITYSDK_OFFSET(0x20C56F0)
#define INCONTROL_INPUTRANGE_REMAP_1_OFFSET UNITYSDK_OFFSET(0x15B6DDD0)
#define INCONTROL_INPUTRANGE_REMAP_OFFSET UNITYSDK_OFFSET(0x15B7D9B0)
#define INCONTROL_INPUTRANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B7DA30)
#define INCONTROL_INPUTRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20C5640)
#define INCONTROL_INPUTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x20C5630)

namespace InControl
{
	inline static constexpr unsigned int InputRange_TypeDefinitionIndex = 31410;

	struct alignas(4) InputRange
	{
		static ::Il2CppArray<::InControl::InputRange>** StaticGet_typeToRange()
		{
			return (::Il2CppArray<::InControl::InputRange>**)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x36400);
		}
		static ::InControl::InputRange* StaticGet_MinusOneToZero()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x10D40);
		}
		static ::InControl::InputRange* StaticGet_MinusOneToOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x10D4C);
		}
		static ::InControl::InputRange* StaticGet_OneToZero()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x10D58);
		}
		static ::InControl::InputRange* StaticGet_ZeroToMinusOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x10D64);
		}
		static ::InControl::InputRange* StaticGet_OneToMinusOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x10D70);
		}
		static ::InControl::InputRange* StaticGet_None()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x10D7C);
		}
		static ::InControl::InputRange* StaticGet_ZeroToOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x10D88);
		}
		::System::Single Value0; // 0x10
		::System::Single Value1; // 0x14
		::InControl::InputRangeType Type; // 0x18

		::System::Void _ctor(::System::Single value0, ::System::Single value1, ::InControl::InputRangeType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE__CTOR_OFFSET))(this, value0, value1, type);
		}

		::System::Void _ctor_1(::InControl::InputRangeType type)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE__CTOR_1_OFFSET))(this, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE__CCTOR_OFFSET))();
		}

		::System::Boolean Includes(::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_INCLUDES_OFFSET))(this, value);
		}

		::System::Boolean Excludes(::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_EXCLUDES_OFFSET))(this, value);
		}

		static ::System::Boolean Excludes_1(::InControl::InputRangeType rangeType, ::System::Single value)
		{
			return ((::System::Boolean(*)(::InControl::InputRangeType, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_EXCLUDES_1_OFFSET))(rangeType, value);
		}

		static ::System::Single Remap(::System::Single value, ::InControl::InputRange sourceRange, ::InControl::InputRange targetRange)
		{
			return ((::System::Single(*)(::System::Single, ::InControl::InputRange, ::InControl::InputRange))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_REMAP_OFFSET))(value, sourceRange, targetRange);
		}

		static ::System::Single Remap_1(::System::Single value, ::InControl::InputRangeType sourceRangeType, ::InControl::InputRangeType targetRangeType)
		{
			return ((::System::Single(*)(::System::Single, ::InControl::InputRangeType, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_REMAP_1_OFFSET))(value, sourceRangeType, targetRangeType);
		}
	};
}
