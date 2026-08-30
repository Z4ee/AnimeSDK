#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FIXVEC2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B8C610)
#define RPG_GAMECORE_FIXVEC2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B8CEE0)
#define RPG_GAMECORE_FIXVEC2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B8CE60)
#define RPG_GAMECORE_FIXVEC2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1D6FFE70)
#define RPG_GAMECORE_FIXVEC2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3B8CA00)
#define RPG_GAMECORE_FIXVEC2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1D6FFE80)
#define RPG_GAMECORE_FIXVEC2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3B8D030)
#define RPG_GAMECORE_FIXVEC2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x3B8CC50)
#define RPG_GAMECORE_FIXVEC2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1D6FFE50)
#define RPG_GAMECORE_FIXVEC2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1D6FFE90)
#define RPG_GAMECORE_FIXVEC2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3B8D070)
#define RPG_GAMECORE_FIXVEC2_GET_UP_OFFSET UNITYSDK_OFFSET(0x1D6FFE60)
#define RPG_GAMECORE_FIXVEC2_GET_X0Y_OFFSET UNITYSDK_OFFSET(0x3B8C9E0)
#define RPG_GAMECORE_FIXVEC2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1D6FFE40)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_040FF5E115E8DA0F_1_OFFSET UNITYSDK_OFFSET(0x1D6FF730)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_040FF5E115E8DA0F_OFFSET UNITYSDK_OFFSET(0x1D6FF6C0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_15296CD266168B4A_OFFSET UNITYSDK_OFFSET(0x1D6FFEA0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_215024F61ED2D79C_OFFSET UNITYSDK_OFFSET(0x1D6FF790)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_2CB79273C9E51EAF_OFFSET UNITYSDK_OFFSET(0x1D700060)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_3188AB065B8D1B06_OFFSET UNITYSDK_OFFSET(0x1D6FF150)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_458D7FF0D1CDB6BB_OFFSET UNITYSDK_OFFSET(0x1D6FFD00)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_1_OFFSET UNITYSDK_OFFSET(0x1D6FF830)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_2_OFFSET UNITYSDK_OFFSET(0x1D6FF880)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_3_OFFSET UNITYSDK_OFFSET(0x1D6FF8D0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_4_OFFSET UNITYSDK_OFFSET(0x1D6FF920)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_OFFSET UNITYSDK_OFFSET(0x1D6FDF70)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_5A00620B0FB82103_OFFSET UNITYSDK_OFFSET(0x1D6FEFC0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_6C231A6035A748D1_OFFSET UNITYSDK_OFFSET(0x1D6FFF00)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0x3B8CB40)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_7D3A5829086CF05F_OFFSET UNITYSDK_OFFSET(0x1D6FE6E0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_826DB21F891A2DE0_1_OFFSET UNITYSDK_OFFSET(0x1D6FF020)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_826DB21F891A2DE0_OFFSET UNITYSDK_OFFSET(0x1D6FEBB0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_8B07058C5BA3335F_OFFSET UNITYSDK_OFFSET(0x1D6FE840)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_9A7ACA313C070FD8_OFFSET UNITYSDK_OFFSET(0x1D6FFBA0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_A06F358C7C67331A_OFFSET UNITYSDK_OFFSET(0x1D6FDD90)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_A2C943B2F91CA2F4_1_OFFSET UNITYSDK_OFFSET(0x1D6FF370)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_A2C943B2F91CA2F4_OFFSET UNITYSDK_OFFSET(0x1D6FF1D0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_A7B84BFB162895B0_OFFSET UNITYSDK_OFFSET(0x1D6FDB70)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_B5439B77743BCA15_OFFSET UNITYSDK_OFFSET(0x3B8D070)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_B9139A3FF38768A5_OFFSET UNITYSDK_OFFSET(0x1D6FDD10)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_B9EBFD65B1CD5AF3_1_OFFSET UNITYSDK_OFFSET(0x1D6FF510)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_B9EBFD65B1CD5AF3_OFFSET UNITYSDK_OFFSET(0x1D6FE640)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_BED408F7209517E8_OFFSET UNITYSDK_OFFSET(0x3B8CB00)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_C53DBD8B14EA0BDD_OFFSET UNITYSDK_OFFSET(0x1D6FFE30)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_C55DB3D9B4439C33_1_OFFSET UNITYSDK_OFFSET(0x3B8D140)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_C55DB3D9B4439C33_OFFSET UNITYSDK_OFFSET(0x3B8D0B0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_D80DE2E28C259EF0_OFFSET UNITYSDK_OFFSET(0x1D6FED90)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_D81EB8406103E65B_OFFSET UNITYSDK_OFFSET(0x1D6FF970)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_D85F7717AC150448_OFFSET UNITYSDK_OFFSET(0x1D6FE920)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_DAA155E8ED1FEFBC_OFFSET UNITYSDK_OFFSET(0x1D7000C0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_DB2E908A7DF6C5EB_1_OFFSET UNITYSDK_OFFSET(0x1D6FE800)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_DB2E908A7DF6C5EB_OFFSET UNITYSDK_OFFSET(0x1D6FE7C0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_DEF6E2C8E6261748_1_OFFSET UNITYSDK_OFFSET(0x1D6FFB20)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_DEF6E2C8E6261748_2_OFFSET UNITYSDK_OFFSET(0x1D6FFB60)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_DEF6E2C8E6261748_OFFSET UNITYSDK_OFFSET(0x1D6FFAE0)
#define RPG_GAMECORE_FIXVEC2_METHOD_2_F73ABB3E14131F9A_OFFSET UNITYSDK_OFFSET(0x80380)
#define RPG_GAMECORE_FIXVEC2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3B8CA80)
#define RPG_GAMECORE_FIXVEC2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B8CD60)
#define RPG_GAMECORE_FIXVEC2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D700220)
#define RPG_GAMECORE_FIXVEC2__CTOR_OFFSET UNITYSDK_OFFSET(0x80380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixVec2_TypeDefinitionIndex = 9886;

	struct alignas(8) FixVec2
	{
		static ::RPG::GameCore::FixVec2* StaticGet_zeroVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x1EF0);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_downVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x1F00);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_rightVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x1F10);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_leftVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x1F20);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_upVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x1F30);
		}
		static ::RPG::GameCore::FixVec2* StaticGet_oneVector()
		{
			return (::RPG::GameCore::FixVec2*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x1F40);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_EpsilonNormalSqrt()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixVec2_TypeDefinitionIndex)->GetStaticField(0x1F50);
		}
		::RPG::GameCore::FixPoint x; // 0x10
		::RPG::GameCore::FixPoint y; // 0x18

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2__CCTOR_OFFSET))();
		}

		/*
		::RPG::GameCore::FixVec3 get_x0y()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_X0Y_OFFSET))(this);
		}
		*/

		::RPG::GameCore::FixPoint get_Item(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_F73ABB3E14131F9A(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_F73ABB3E14131F9A_OFFSET))(this, a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_A7B84BFB162895B0(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_A7B84BFB162895B0_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec2 Method_2_B9139A3FF38768A5(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_B9139A3FF38768A5_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec2 Method_2_A06F358C7C67331A(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_A06F358C7C67331A_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec2 Method_2_46811FD3675F4395(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_OFFSET))(a1, a2);
		}

		::System::Void Method_2_BED408F7209517E8(::RPG::GameCore::FixVec2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_BED408F7209517E8_OFFSET))(this, a1);
		}

		::System::Void Method_2_7A150941533E8F96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_7A150941533E8F96_OFFSET))(this);
		}

		::RPG::GameCore::FixVec2 get_normalized()
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_NORMALIZED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::FixVec2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EQUALS_1_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FixVec2 Method_2_B9EBFD65B1CD5AF3(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_B9EBFD65B1CD5AF3_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_7D3A5829086CF05F(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_7D3A5829086CF05F_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Method_2_DB2E908A7DF6C5EB(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_DB2E908A7DF6C5EB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_DB2E908A7DF6C5EB_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_DB2E908A7DF6C5EB_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_8B07058C5BA3335F(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_8B07058C5BA3335F_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_D85F7717AC150448(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_D85F7717AC150448_OFFSET))(a1, a2);
		}

		::RPG::GameCore::FixPoint get_magnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_MAGNITUDE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_sqrMagnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint Method_2_826DB21F891A2DE0(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_826DB21F891A2DE0_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_D80DE2E28C259EF0(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_D80DE2E28C259EF0_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_5A00620B0FB82103(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_5A00620B0FB82103_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_826DB21F891A2DE0_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_826DB21F891A2DE0_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_3188AB065B8D1B06(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_3188AB065B8D1B06_OFFSET))(a1);
		}

		::RPG::GameCore::FixPoint Method_2_B5439B77743BCA15()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_B5439B77743BCA15_OFFSET))(this);
		}

		static ::RPG::GameCore::FixVec2 Method_2_A2C943B2F91CA2F4(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_A2C943B2F91CA2F4_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_A2C943B2F91CA2F4_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_A2C943B2F91CA2F4_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_B9EBFD65B1CD5AF3_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_B9EBFD65B1CD5AF3_1_OFFSET))(a1, a2);
		}

		::RPG::GameCore::FixVec2 Method_2_C55DB3D9B4439C33(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_C55DB3D9B4439C33_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixVec2 Method_2_C55DB3D9B4439C33_1(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_C55DB3D9B4439C33_1_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FixVec2 Method_2_040FF5E115E8DA0F(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_040FF5E115E8DA0F_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixVec2 Method_2_040FF5E115E8DA0F_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_040FF5E115E8DA0F_1_OFFSET))(a1);
		}

		/*
		static ::RPG::GameCore::FixVec2 Method_2_215024F61ED2D79C(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixMatrix3x2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixMatrix3x2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_215024F61ED2D79C_OFFSET))(a1, a2);
		}
		*/

		static ::RPG::GameCore::FixVec2 Method_2_46811FD3675F4395_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_46811FD3675F4395_2(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_46811FD3675F4395_3(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_3_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_46811FD3675F4395_4(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_46811FD3675F4395_4_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_D81EB8406103E65B(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_D81EB8406103E65B_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixVec2 Method_2_DEF6E2C8E6261748(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_DEF6E2C8E6261748_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_DEF6E2C8E6261748_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_DEF6E2C8E6261748_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 Method_2_DEF6E2C8E6261748_2(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_DEF6E2C8E6261748_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_9A7ACA313C070FD8(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_9A7ACA313C070FD8_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_458D7FF0D1CDB6BB(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_458D7FF0D1CDB6BB_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::GameCore::FixVec2 Method_2_C53DBD8B14EA0BDD(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_C53DBD8B14EA0BDD_OFFSET))(a1);
		}
		*/

		static ::RPG::GameCore::FixVec2 get_zero()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ZERO_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_one()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ONE_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_up()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_UP_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_down()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_DOWN_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_left()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_LEFT_OFFSET))();
		}

		static ::RPG::GameCore::FixVec2 get_right()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_RIGHT_OFFSET))();
		}

		/*
		static ::RPG::MVector2 Method_2_15296CD266168B4A(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::MVector2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_15296CD266168B4A_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 Method_2_6C231A6035A748D1(::RPG::MVector2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_6C231A6035A748D1_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector2 Method_2_2CB79273C9E51EAF(::RPG::GameCore::FixVec2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_2CB79273C9E51EAF_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 Method_2_DAA155E8ED1FEFBC(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_METHOD_2_DAA155E8ED1FEFBC_OFFSET))(a1);
		}
		*/
	};
}
