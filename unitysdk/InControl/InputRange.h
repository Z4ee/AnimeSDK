#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputRangeType.h"
#include "unitysdk/System/ValueType.h"

#define INCONTROL_INPUTRANGE_EXCLUDES_1_OFFSET UNITYSDK_OFFSET(0x17FB39E0)
#define INCONTROL_INPUTRANGE_EXCLUDES_OFFSET UNITYSDK_OFFSET(0x3824F30)
#define INCONTROL_INPUTRANGE_INCLUDES_OFFSET UNITYSDK_OFFSET(0x3824F00)
#define INCONTROL_INPUTRANGE_REMAP_1_OFFSET UNITYSDK_OFFSET(0x17FB3AB0)
#define INCONTROL_INPUTRANGE_REMAP_OFFSET UNITYSDK_OFFSET(0x17FC27C0)
#define INCONTROL_INPUTRANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FC2840)
#define INCONTROL_INPUTRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3824E60)
#define INCONTROL_INPUTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x3824E50)

namespace InControl
{
	inline static constexpr unsigned int InputRange_TypeDefinitionIndex = 37862;

	struct alignas(4) InputRange
	{
		static ::Il2CppArray<::InControl::InputRange>** StaticGet_typeToRange()
		{
			return (::Il2CppArray<::InControl::InputRange>**)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x12450);
		}
		static ::InControl::InputRange* StaticGet_OneToMinusOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x55D0);
		}
		static ::InControl::InputRange* StaticGet_ZeroToOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x55DC);
		}
		static ::InControl::InputRange* StaticGet_OneToZero()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x55E8);
		}
		static ::InControl::InputRange* StaticGet_MinusOneToOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x55F4);
		}
		static ::InControl::InputRange* StaticGet_None()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x5600);
		}
		static ::InControl::InputRange* StaticGet_MinusOneToZero()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x560C);
		}
		static ::InControl::InputRange* StaticGet_ZeroToMinusOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x5618);
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
