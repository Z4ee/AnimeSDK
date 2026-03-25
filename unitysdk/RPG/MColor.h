#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_MCOLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x20F6C00)
#define RPG_MCOLOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20F6D50)
#define RPG_MCOLOR_METHOD_2_2C17A14F9DD6C0E3_1_OFFSET UNITYSDK_OFFSET(0x17A62310)
#define RPG_MCOLOR_METHOD_2_2C17A14F9DD6C0E3_2_OFFSET UNITYSDK_OFFSET(0x17A62330)
#define RPG_MCOLOR_METHOD_2_2C17A14F9DD6C0E3_OFFSET UNITYSDK_OFFSET(0x17A622F0)
#define RPG_MCOLOR_METHOD_2_4B0A91863BB1C92C_1_OFFSET UNITYSDK_OFFSET(0x17A62370)
#define RPG_MCOLOR_METHOD_2_4B0A91863BB1C92C_2_OFFSET UNITYSDK_OFFSET(0x17A62390)
#define RPG_MCOLOR_METHOD_2_4B0A91863BB1C92C_OFFSET UNITYSDK_OFFSET(0x17A62350)
#define RPG_MCOLOR_METHOD_2_70A8AFA4B5F015AA_OFFSET UNITYSDK_OFFSET(0x17A622E0)
#define RPG_MCOLOR_METHOD_2_73A33226BF78995D_1_OFFSET UNITYSDK_OFFSET(0x17A62400)
#define RPG_MCOLOR_METHOD_2_73A33226BF78995D_OFFSET UNITYSDK_OFFSET(0x17A623B0)
#define RPG_MCOLOR_METHOD_2_992F40E2AD3811DF_OFFSET UNITYSDK_OFFSET(0x20F6B20)
#define RPG_MCOLOR_METHOD_2_E571DD6924F35454_1_OFFSET UNITYSDK_OFFSET(0x17A624B0)
#define RPG_MCOLOR_METHOD_2_E571DD6924F35454_OFFSET UNITYSDK_OFFSET(0x17A62450)
#define RPG_MCOLOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x24C40)
#define RPG_MCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x20F6DE0)

namespace RPG
{
	inline static constexpr unsigned int MColor_TypeDefinitionIndex = 8699;

	struct alignas(4) MColor
	{
		::System::Single r; // 0x10
		::System::Single g; // 0x14
		::System::Single b; // 0x18
		::System::Single a; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_2_992F40E2AD3811DF(::RPG::MColor a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_992F40E2AD3811DF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_MCOLOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MCOLOR_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::Struct_2_331ACDD60B60D2E3 Method_2_70A8AFA4B5F015AA(::RPG::MColor a1)
		{
			return ((::Struct_2_331ACDD60B60D2E3(*)(::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_70A8AFA4B5F015AA_OFFSET))(a1);
		}
		*/

		static ::RPG::MColor Method_2_2C17A14F9DD6C0E3(::RPG::MColor a1, ::RPG::MColor a2)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_2C17A14F9DD6C0E3_OFFSET))(a1, a2);
		}

		static ::RPG::MColor Method_2_2C17A14F9DD6C0E3_1(::RPG::MColor a1, ::RPG::MColor a2)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_2C17A14F9DD6C0E3_1_OFFSET))(a1, a2);
		}

		static ::RPG::MColor Method_2_2C17A14F9DD6C0E3_2(::RPG::MColor a1, ::RPG::MColor a2)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_2C17A14F9DD6C0E3_2_OFFSET))(a1, a2);
		}

		static ::RPG::MColor Method_2_4B0A91863BB1C92C(::RPG::MColor a1, ::System::Single a2)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_4B0A91863BB1C92C_OFFSET))(a1, a2);
		}

		static ::RPG::MColor Method_2_4B0A91863BB1C92C_1(::System::Single a1, ::RPG::MColor a2)
		{
			return ((::RPG::MColor(*)(::System::Single, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_4B0A91863BB1C92C_1_OFFSET))(a1, a2);
		}

		static ::RPG::MColor Method_2_4B0A91863BB1C92C_2(::RPG::MColor a1, ::System::Single a2)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_4B0A91863BB1C92C_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_73A33226BF78995D(::RPG::MColor a1, ::RPG::MColor a2)
		{
			return ((::System::Boolean(*)(::RPG::MColor, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_73A33226BF78995D_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_73A33226BF78995D_1(::RPG::MColor a1, ::RPG::MColor a2)
		{
			return ((::System::Boolean(*)(::RPG::MColor, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_73A33226BF78995D_1_OFFSET))(a1, a2);
		}

		static ::RPG::MColor Method_2_E571DD6924F35454(::RPG::MColor a1, ::RPG::MColor a2, ::System::Single a3)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::RPG::MColor, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_E571DD6924F35454_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MColor Method_2_E571DD6924F35454_1(::RPG::MColor a1, ::RPG::MColor a2, ::System::Single a3)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::RPG::MColor, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR_METHOD_2_E571DD6924F35454_1_OFFSET))(a1, a2, a3);
		}
	};
}
