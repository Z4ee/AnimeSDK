#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_1958EDD0843A6E37.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICFLOAT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x18890B00)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_0854E9454645D1B7_OFFSET UNITYSDK_OFFSET(0x18890AA0)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_1DCC0C7F8AC23022_OFFSET UNITYSDK_OFFSET(0x18890BB0)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_28C8D0626FC9B6CE_OFFSET UNITYSDK_OFFSET(0x18890DC0)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_2A5E94F9B9A71A0B_OFFSET UNITYSDK_OFFSET(0x18890C50)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_533C5677051CA131_OFFSET UNITYSDK_OFFSET(0x188908F0)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_79908043EE0BD956_OFFSET UNITYSDK_OFFSET(0x18890880)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_E1B33223F9F2D6BB_OFFSET UNITYSDK_OFFSET(0x18890B10)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_E83C519CAA6854AF_OFFSET UNITYSDK_OFFSET(0x18890940)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_F06B17D67D5067C6_OFFSET UNITYSDK_OFFSET(0x188909C0)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_F7097473EC9DE578_OFFSET UNITYSDK_OFFSET(0x18891500)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_FBDC5F72FD2730B3_OFFSET UNITYSDK_OFFSET(0x18890A30)
#define RPG_GAMECORE_DYNAMICFLOAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18891460)
#define RPG_GAMECORE_DYNAMICFLOAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18891970)
#define RPG_GAMECORE_DYNAMICFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x18890BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicFloat_TypeDefinitionIndex = 23554;

	class DynamicFloat : public ::System::Object
	{
	public:
		static ::RPG::GameCore::DynamicFloat** StaticGet_ONEHUNDRED()
		{
			return (::RPG::GameCore::DynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x341F0);
		}
		static ::RPG::GameCore::DynamicFloat** StaticGet_ONE()
		{
			return (::RPG::GameCore::DynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x341F8);
		}
		static ::RPG::GameCore::DynamicFloat** StaticGet_THREESIXZERO()
		{
			return (::RPG::GameCore::DynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x34200);
		}
		static ::RPG::GameCore::DynamicFloat** StaticGet_ZERO()
		{
			return (::RPG::GameCore::DynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x34208);
		}
		::RPG::GameCore::FixPoint fixedValue; // 0x10
		::Struct_2_1958EDD0843A6E37 postfixExpr; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_79908043EE0BD956(::System::Int32 a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_79908043EE0BD956_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_E83C519CAA6854AF(::System::Decimal a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_E83C519CAA6854AF_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_F06B17D67D5067C6(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_F06B17D67D5067C6_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_FBDC5F72FD2730B3(::System::Single a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_FBDC5F72FD2730B3_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_0854E9454645D1B7(::RPG::GameCore::DynamicFloat* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_0854E9454645D1B7_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_1_E1B33223F9F2D6BB(::RPG::GameCore::DynamicFloat* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_E1B33223F9F2D6BB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_533C5677051CA131(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_533C5677051CA131_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_1DCC0C7F8AC23022(::System::String* a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_1DCC0C7F8AC23022_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_2A5E94F9B9A71A0B(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_2A5E94F9B9A71A0B_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_28C8D0626FC9B6CE(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_28C8D0626FC9B6CE_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_1_F7097473EC9DE578(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_F7097473EC9DE578_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_GET_ISDYNAMIC_OFFSET))(this);
		}
	};
}
