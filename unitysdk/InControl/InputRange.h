#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputRangeType.h"
#include "unitysdk/System/ValueType.h"

#define INCONTROL_INPUTRANGE_EXCLUDES_1_OFFSET UNITYSDK_OFFSET(0x1B9CE480)
#define INCONTROL_INPUTRANGE_EXCLUDES_OFFSET UNITYSDK_OFFSET(0x3C0C8A0)
#define INCONTROL_INPUTRANGE_INCLUDES_OFFSET UNITYSDK_OFFSET(0x3C0C870)
#define INCONTROL_INPUTRANGE_REMAP_1_OFFSET UNITYSDK_OFFSET(0x1B9CE550)
#define INCONTROL_INPUTRANGE_REMAP_OFFSET UNITYSDK_OFFSET(0x1B9DDCE0)
#define INCONTROL_INPUTRANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9DDD60)
#define INCONTROL_INPUTRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C0C7D0)
#define INCONTROL_INPUTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x3C0C7C0)

namespace InControl
{
	inline static constexpr unsigned int InputRange_TypeDefinitionIndex = 40826;

	struct alignas(4) InputRange
	{
		static ::Il2CppArray<::InControl::InputRange>** StaticGet_typeToRange()
		{
			return (::Il2CppArray<::InControl::InputRange>**)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x64BD0);
		}
		static ::InControl::InputRange* StaticGet_OneToZero()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x14B70);
		}
		static ::InControl::InputRange* StaticGet_None()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x14B7C);
		}
		static ::InControl::InputRange* StaticGet_MinusOneToOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x14B88);
		}
		static ::InControl::InputRange* StaticGet_MinusOneToZero()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x14B94);
		}
		static ::InControl::InputRange* StaticGet_ZeroToMinusOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x14BA0);
		}
		static ::InControl::InputRange* StaticGet_ZeroToOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x14BAC);
		}
		static ::InControl::InputRange* StaticGet_OneToMinusOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x14BB8);
		}
		::System::Single Value0; // 0x10
		::System::Single Value1; // 0x14
		::InControl::InputRangeType Type; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::InControl::InputRangeType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::InControl::InputRangeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE__CCTOR_OFFSET))();
		}

		::System::Boolean Includes(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_INCLUDES_OFFSET))(this, a1);
		}

		::System::Boolean Excludes(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_EXCLUDES_OFFSET))(this, a1);
		}

		static ::System::Boolean Excludes_1(::InControl::InputRangeType a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::InControl::InputRangeType, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_EXCLUDES_1_OFFSET))(a1, a2);
		}

		static ::System::Single Remap(::System::Single a1, ::InControl::InputRange a2, ::InControl::InputRange a3)
		{
			return ((::System::Single(*)(::System::Single, ::InControl::InputRange, ::InControl::InputRange))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_REMAP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Remap_1(::System::Single a1, ::InControl::InputRangeType a2, ::InControl::InputRangeType a3)
		{
			return ((::System::Single(*)(::System::Single, ::InControl::InputRangeType, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_REMAP_1_OFFSET))(a1, a2, a3);
		}
	};
}
