#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FIXVEC3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B8D630)
#define RPG_GAMECORE_FIXVEC3_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B8D430)
#define RPG_GAMECORE_FIXVEC3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B8D370)
#define RPG_GAMECORE_FIXVEC3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1D702820)
#define RPG_GAMECORE_FIXVEC3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1D702860)
#define RPG_GAMECORE_FIXVEC3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1D702800)
#define RPG_GAMECORE_FIXVEC3_GET_FWD_OFFSET UNITYSDK_OFFSET(0x1D7031B0)
#define RPG_GAMECORE_FIXVEC3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3B8D1F0)
#define RPG_GAMECORE_FIXVEC3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1D702880)
#define RPG_GAMECORE_FIXVEC3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3B8D9D0)
#define RPG_GAMECORE_FIXVEC3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x3B8D980)
#define RPG_GAMECORE_FIXVEC3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1D7027E0)
#define RPG_GAMECORE_FIXVEC3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1D7028A0)
#define RPG_GAMECORE_FIXVEC3_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3B8DA30)
#define RPG_GAMECORE_FIXVEC3_GET_UP_OFFSET UNITYSDK_OFFSET(0x1D702840)
#define RPG_GAMECORE_FIXVEC3_GET_XY_OFFSET UNITYSDK_OFFSET(0x2DFB9E0)
#define RPG_GAMECORE_FIXVEC3_GET_XZ_OFFSET UNITYSDK_OFFSET(0x3B8D1D0)
#define RPG_GAMECORE_FIXVEC3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1D7027C0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0483E405DC5EFB0D_1_OFFSET UNITYSDK_OFFSET(0x1D7028C0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0483E405DC5EFB0D_2_OFFSET UNITYSDK_OFFSET(0x1D702920)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0483E405DC5EFB0D_OFFSET UNITYSDK_OFFSET(0x1D7008D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_04DE913CA13722FE_OFFSET UNITYSDK_OFFSET(0x1D701310)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0C276D4CAA55DC2B_OFFSET UNITYSDK_OFFSET(0x1D703890)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0D8DB2DC8B47A973_OFFSET UNITYSDK_OFFSET(0x3B8D830)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_10B802F77E3369F9_OFFSET UNITYSDK_OFFSET(0x1D7004A0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_1563A666453BBBB2_1_OFFSET UNITYSDK_OFFSET(0x1D701530)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_1563A666453BBBB2_2_OFFSET UNITYSDK_OFFSET(0x1D703420)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_1563A666453BBBB2_OFFSET UNITYSDK_OFFSET(0x1D701370)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_219F37B1275BCEED_OFFSET UNITYSDK_OFFSET(0x1D700550)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_2BEB92E13C9D2062_OFFSET UNITYSDK_OFFSET(0x1D701020)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_5D2C484C175532FD_OFFSET UNITYSDK_OFFSET(0x1D702CB0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_5D334664A89E8DD8_OFFSET UNITYSDK_OFFSET(0x1D703930)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_730F6855E35F7312_OFFSET UNITYSDK_OFFSET(0x1D701AA0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_7A8BB132B01936B4_OFFSET UNITYSDK_OFFSET(0x2ED20)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_80A3F81FB25AA558_OFFSET UNITYSDK_OFFSET(0x1D7031D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_891CC377BBC157E5_OFFSET UNITYSDK_OFFSET(0x1D701FA0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_924FC7D6D54F285B_OFFSET UNITYSDK_OFFSET(0x1D7036A0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_9BF093623F0A2B58_OFFSET UNITYSDK_OFFSET(0x1D701740)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_B2B817B205D2DE60_OFFSET UNITYSDK_OFFSET(0x1D703600)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_B66CCEA2A7696AFB_OFFSET UNITYSDK_OFFSET(0x1D702EC0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_BA446F8CEC46B475_OFFSET UNITYSDK_OFFSET(0x1D7021E0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_C1CAD10FC51C932C_OFFSET UNITYSDK_OFFSET(0x3B8D320)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_CA810E4588083203_OFFSET UNITYSDK_OFFSET(0x1D702120)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_CD80CD320226CF4A_OFFSET UNITYSDK_OFFSET(0x1D7002D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_D97CFE4C8151B0B4_1_OFFSET UNITYSDK_OFFSET(0x1D700F20)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_D97CFE4C8151B0B4_OFFSET UNITYSDK_OFFSET(0x1D700980)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_EC412A6B863471CB_1_OFFSET UNITYSDK_OFFSET(0x1D702520)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_EC412A6B863471CB_OFFSET UNITYSDK_OFFSET(0x1D702280)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_EE5CF82A4F6246E3_OFFSET UNITYSDK_OFFSET(0x1D702980)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_F84391413EE8BA40_1_OFFSET UNITYSDK_OFFSET(0x1D702BF0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_F84391413EE8BA40_2_OFFSET UNITYSDK_OFFSET(0x1D702C50)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_F84391413EE8BA40_OFFSET UNITYSDK_OFFSET(0x1D702B90)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_FEEE95599A5BDDBB_OFFSET UNITYSDK_OFFSET(0x1D701F10)
#define RPG_GAMECORE_FIXVEC3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3B8D270)
#define RPG_GAMECORE_FIXVEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B8DA80)
#define RPG_GAMECORE_FIXVEC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D703B20)
#define RPG_GAMECORE_FIXVEC3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B8D300)
#define RPG_GAMECORE_FIXVEC3__CTOR_OFFSET UNITYSDK_OFFSET(0x2ED20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixVec3_TypeDefinitionIndex = 9887;

	struct alignas(8) FixVec3
	{
		static ::RPG::GameCore::FixVec3* StaticGet_oneVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0xC6E0);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_leftVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0xC6F8);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_rightVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0xC710);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_zeroVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0xC728);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_EpsilonNormalSqrt()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0xC740);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_backVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0xC748);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_upVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0xC760);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_downVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0xC778);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_forwardVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0xC790);
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
