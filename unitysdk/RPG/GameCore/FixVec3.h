#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FIXVEC3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3ACFCE0)
#define RPG_GAMECORE_FIXVEC3_EQUALS_OFFSET UNITYSDK_OFFSET(0x3ACFAE0)
#define RPG_GAMECORE_FIXVEC3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3ACFA20)
#define RPG_GAMECORE_FIXVEC3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1CEF3770)
#define RPG_GAMECORE_FIXVEC3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1CEF37B0)
#define RPG_GAMECORE_FIXVEC3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1CEF3750)
#define RPG_GAMECORE_FIXVEC3_GET_FWD_OFFSET UNITYSDK_OFFSET(0x1CEF4100)
#define RPG_GAMECORE_FIXVEC3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3ACF8A0)
#define RPG_GAMECORE_FIXVEC3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1CEF37D0)
#define RPG_GAMECORE_FIXVEC3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3AD0080)
#define RPG_GAMECORE_FIXVEC3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x3AD0030)
#define RPG_GAMECORE_FIXVEC3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1CEF3730)
#define RPG_GAMECORE_FIXVEC3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1CEF37F0)
#define RPG_GAMECORE_FIXVEC3_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3AD00E0)
#define RPG_GAMECORE_FIXVEC3_GET_UP_OFFSET UNITYSDK_OFFSET(0x1CEF3790)
#define RPG_GAMECORE_FIXVEC3_GET_XY_OFFSET UNITYSDK_OFFSET(0x165450)
#define RPG_GAMECORE_FIXVEC3_GET_XZ_OFFSET UNITYSDK_OFFSET(0x3ACF880)
#define RPG_GAMECORE_FIXVEC3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1CEF3710)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0483E405DC5EFB0D_1_OFFSET UNITYSDK_OFFSET(0x1CEF3810)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0483E405DC5EFB0D_2_OFFSET UNITYSDK_OFFSET(0x1CEF3870)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0483E405DC5EFB0D_OFFSET UNITYSDK_OFFSET(0x1CEF1820)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_04DE913CA13722FE_OFFSET UNITYSDK_OFFSET(0x1CEF2260)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0C276D4CAA55DC2B_OFFSET UNITYSDK_OFFSET(0x1CEF47E0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0D8DB2DC8B47A973_OFFSET UNITYSDK_OFFSET(0x3ACFEE0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_10B802F77E3369F9_OFFSET UNITYSDK_OFFSET(0x1CEF13F0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_1563A666453BBBB2_1_OFFSET UNITYSDK_OFFSET(0x1CEF2480)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_1563A666453BBBB2_2_OFFSET UNITYSDK_OFFSET(0x1CEF4370)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_1563A666453BBBB2_OFFSET UNITYSDK_OFFSET(0x1CEF22C0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_219F37B1275BCEED_OFFSET UNITYSDK_OFFSET(0x1CEF14A0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_2BEB92E13C9D2062_OFFSET UNITYSDK_OFFSET(0x1CEF1F70)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_5D2C484C175532FD_OFFSET UNITYSDK_OFFSET(0x1CEF3C00)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_5D334664A89E8DD8_OFFSET UNITYSDK_OFFSET(0x1CEF4880)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_730F6855E35F7312_OFFSET UNITYSDK_OFFSET(0x1CEF29F0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_7A8BB132B01936B4_OFFSET UNITYSDK_OFFSET(0x2F01D90)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_80A3F81FB25AA558_OFFSET UNITYSDK_OFFSET(0x1CEF4120)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_891CC377BBC157E5_OFFSET UNITYSDK_OFFSET(0x1CEF2EF0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_924FC7D6D54F285B_OFFSET UNITYSDK_OFFSET(0x1CEF45F0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_9BF093623F0A2B58_OFFSET UNITYSDK_OFFSET(0x1CEF2690)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_B2B817B205D2DE60_OFFSET UNITYSDK_OFFSET(0x1CEF4550)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_B66CCEA2A7696AFB_OFFSET UNITYSDK_OFFSET(0x1CEF3E10)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_BA446F8CEC46B475_OFFSET UNITYSDK_OFFSET(0x1CEF3130)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_C1CAD10FC51C932C_OFFSET UNITYSDK_OFFSET(0x3ACF9D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_CA810E4588083203_OFFSET UNITYSDK_OFFSET(0x1CEF3070)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_CD80CD320226CF4A_OFFSET UNITYSDK_OFFSET(0x1CEF1220)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_D97CFE4C8151B0B4_1_OFFSET UNITYSDK_OFFSET(0x1CEF1E70)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_D97CFE4C8151B0B4_OFFSET UNITYSDK_OFFSET(0x1CEF18D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_EC412A6B863471CB_1_OFFSET UNITYSDK_OFFSET(0x1CEF3470)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_EC412A6B863471CB_OFFSET UNITYSDK_OFFSET(0x1CEF31D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_EE5CF82A4F6246E3_OFFSET UNITYSDK_OFFSET(0x1CEF38D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_F84391413EE8BA40_1_OFFSET UNITYSDK_OFFSET(0x1CEF3B40)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_F84391413EE8BA40_2_OFFSET UNITYSDK_OFFSET(0x1CEF3BA0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_F84391413EE8BA40_OFFSET UNITYSDK_OFFSET(0x1CEF3AE0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_FEEE95599A5BDDBB_OFFSET UNITYSDK_OFFSET(0x1CEF2E60)
#define RPG_GAMECORE_FIXVEC3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3ACF920)
#define RPG_GAMECORE_FIXVEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AD0130)
#define RPG_GAMECORE_FIXVEC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEF4A70)
#define RPG_GAMECORE_FIXVEC3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3ACF9B0)
#define RPG_GAMECORE_FIXVEC3__CTOR_OFFSET UNITYSDK_OFFSET(0x2F01D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixVec3_TypeDefinitionIndex = 9608;

	struct alignas(8) FixVec3
	{
		static ::RPG::GameCore::FixVec3* StaticGet_oneVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x2D50);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_upVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x2D68);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_leftVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x2D80);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_forwardVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x2D98);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_EpsilonNormalSqrt()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x2DB0);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_rightVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x2DB8);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_backVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x2DD0);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_downVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x2DE8);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_zeroVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x2E00);
		}
		::RPG::GameCore::FixPoint x; // 0x10
		::RPG::GameCore::FixPoint y; // 0x18
		::RPG::GameCore::FixPoint z; // 0x20

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3__CCTOR_OFFSET))();
		}

		/*
		::RPG::GameCore::FixVec2 get_xy()
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_XY_OFFSET))(this);
		}
		*/

		/*
		::RPG::GameCore::FixVec2 get_xz()
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_XZ_OFFSET))(this);
		}
		*/

		static ::RPG::GameCore::FixVec3 Method_2_CD80CD320226CF4A(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_CD80CD320226CF4A_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec3 Method_2_10B802F77E3369F9(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_10B802F77E3369F9_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec3 Method_2_219F37B1275BCEED(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_219F37B1275BCEED_OFFSET))(a1, a2, a3);
		}

		::RPG::GameCore::FixPoint get_Item(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_7A8BB132B01936B4(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_7A8BB132B01936B4_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec3 Method_2_0483E405DC5EFB0D(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_0483E405DC5EFB0D_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C1CAD10FC51C932C(::RPG::GameCore::FixVec3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_C1CAD10FC51C932C_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FixVec3 Method_2_D97CFE4C8151B0B4(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_D97CFE4C8151B0B4_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::FixVec3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_EQUALS_1_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FixVec3 Method_2_D97CFE4C8151B0B4_1(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_D97CFE4C8151B0B4_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_2BEB92E13C9D2062(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_2BEB92E13C9D2062_OFFSET))(a1);
		}

		::System::Void Method_2_0D8DB2DC8B47A973()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_0D8DB2DC8B47A973_OFFSET))(this);
		}

		::RPG::GameCore::FixVec3 get_normalized()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_NORMALIZED_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint Method_2_04DE913CA13722FE(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_04DE913CA13722FE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_1563A666453BBBB2(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_1563A666453BBBB2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_1563A666453BBBB2_1(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_1563A666453BBBB2_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_9BF093623F0A2B58(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_9BF093623F0A2B58_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_730F6855E35F7312(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2, ::RPG::GameCore::FixVec3 a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_730F6855E35F7312_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint Method_2_FEEE95599A5BDDBB(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_FEEE95599A5BDDBB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_891CC377BBC157E5(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_891CC377BBC157E5_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_CA810E4588083203(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_CA810E4588083203_OFFSET))(a1);
		}

		::RPG::GameCore::FixPoint get_magnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_MAGNITUDE_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint Method_2_BA446F8CEC46B475(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_BA446F8CEC46B475_OFFSET))(a1);
		}

		::RPG::GameCore::FixPoint get_sqrMagnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::RPG::GameCore::FixVec3 Method_2_EC412A6B863471CB(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_EC412A6B863471CB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_EC412A6B863471CB_1(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_EC412A6B863471CB_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 get_zero()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_ZERO_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_one()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_ONE_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_forward()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_FORWARD_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_back()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_BACK_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_up()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_UP_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_down()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_DOWN_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_left()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_LEFT_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_right()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_RIGHT_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 Method_2_0483E405DC5EFB0D_1(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_0483E405DC5EFB0D_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_0483E405DC5EFB0D_2(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_0483E405DC5EFB0D_2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_EE5CF82A4F6246E3(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_EE5CF82A4F6246E3_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixVec3 Method_2_F84391413EE8BA40(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_F84391413EE8BA40_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_F84391413EE8BA40_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_F84391413EE8BA40_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_F84391413EE8BA40_2(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_F84391413EE8BA40_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_5D2C484C175532FD(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_5D2C484C175532FD_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_B66CCEA2A7696AFB(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_B66CCEA2A7696AFB_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_TOSTRING_OFFSET))(this);
		}

		static ::RPG::GameCore::FixVec3 get_fwd()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_FWD_OFFSET))();
		}

		static ::RPG::GameCore::FixPoint Method_2_80A3F81FB25AA558(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_80A3F81FB25AA558_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_1563A666453BBBB2_2(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_1563A666453BBBB2_2_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::MVector3 Method_2_B2B817B205D2DE60(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_B2B817B205D2DE60_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec3 Method_2_924FC7D6D54F285B(::RPG::MVector3 a1)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_924FC7D6D54F285B_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector3 Method_2_0C276D4CAA55DC2B(::RPG::GameCore::FixVec3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_0C276D4CAA55DC2B_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec3 Method_2_5D334664A89E8DD8(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::GameCore::FixVec3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_5D334664A89E8DD8_OFFSET))(a1);
		}
		*/
	};
}
