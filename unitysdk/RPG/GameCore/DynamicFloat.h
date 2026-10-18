#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_1958EDD0843A6E37.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICFLOAT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1D5F9E80)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_0854E9454645D1B7_OFFSET UNITYSDK_OFFSET(0x1D5F9E60)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_1DCC0C7F8AC23022_OFFSET UNITYSDK_OFFSET(0x1D5F9EF0)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_28C8D0626FC9B6CE_OFFSET UNITYSDK_OFFSET(0x1D5FA270)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_3067CA610DDF54A5_OFFSET UNITYSDK_OFFSET(0x1D5F9B40)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_489E71857D4AA76C_OFFSET UNITYSDK_OFFSET(0x1D5F9A80)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_5E7F0F255B1949DC_OFFSET UNITYSDK_OFFSET(0x1D5F9C70)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_681969B4CEFE2E05_OFFSET UNITYSDK_OFFSET(0x1D5F9BC0)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_83E0EBB29FC64260_OFFSET UNITYSDK_OFFSET(0x1D5F9E90)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_85C6A441D4AD49B0_OFFSET UNITYSDK_OFFSET(0x1D5F9D10)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_A218C1184B27468C_OFFSET UNITYSDK_OFFSET(0x1D5F9F90)
#define RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_F7097473EC9DE578_OFFSET UNITYSDK_OFFSET(0x1D5FA9F0)
#define RPG_GAMECORE_DYNAMICFLOAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D5FA900)
#define RPG_GAMECORE_DYNAMICFLOAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5FAE30)
#define RPG_GAMECORE_DYNAMICFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F9EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicFloat_TypeDefinitionIndex = 10836;

	class DynamicFloat : public ::System::Object
	{
	public:
		static ::RPG::GameCore::DynamicFloat** StaticGet_THREESIXZERO()
		{
			return (::RPG::GameCore::DynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x215F0);
		}
		static ::RPG::GameCore::DynamicFloat** StaticGet_ONEHUNDRED()
		{
			return (::RPG::GameCore::DynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x215F8);
		}
		static ::RPG::GameCore::DynamicFloat** StaticGet_ONE()
		{
			return (::RPG::GameCore::DynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x21600);
		}
		static ::RPG::GameCore::DynamicFloat** StaticGet_ZERO()
		{
			return (::RPG::GameCore::DynamicFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_TypeDefinitionIndex)->GetStaticField(0x21608);
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

		static ::RPG::GameCore::DynamicFloat* Method_1_489E71857D4AA76C(::System::Int32 a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_489E71857D4AA76C_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_681969B4CEFE2E05(::System::Decimal a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_681969B4CEFE2E05_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_5E7F0F255B1949DC(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_5E7F0F255B1949DC_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_85C6A441D4AD49B0(::System::Single a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_85C6A441D4AD49B0_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_0854E9454645D1B7(::RPG::GameCore::DynamicFloat* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_0854E9454645D1B7_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_1_83E0EBB29FC64260(::RPG::GameCore::DynamicFloat* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_83E0EBB29FC64260_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_3067CA610DDF54A5(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_3067CA610DDF54A5_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_1DCC0C7F8AC23022(::System::String* a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_1DCC0C7F8AC23022_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* Method_1_A218C1184B27468C(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_METHOD_1_A218C1184B27468C_OFFSET))(a1);
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
