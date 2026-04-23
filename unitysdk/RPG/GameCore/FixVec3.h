#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FIXVEC3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22BD9B0)
#define RPG_GAMECORE_FIXVEC3_EQUALS_OFFSET UNITYSDK_OFFSET(0x22BD970)
#define RPG_GAMECORE_FIXVEC3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22BD930)
#define RPG_GAMECORE_FIXVEC3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x191A4770)
#define RPG_GAMECORE_FIXVEC3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x191A47B0)
#define RPG_GAMECORE_FIXVEC3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x191A4750)
#define RPG_GAMECORE_FIXVEC3_GET_FWD_OFFSET UNITYSDK_OFFSET(0x191A5110)
#define RPG_GAMECORE_FIXVEC3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x22BD550)
#define RPG_GAMECORE_FIXVEC3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x191A47D0)
#define RPG_GAMECORE_FIXVEC3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x22BDB20)
#define RPG_GAMECORE_FIXVEC3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x22BDA80)
#define RPG_GAMECORE_FIXVEC3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x191A4730)
#define RPG_GAMECORE_FIXVEC3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x191A47F0)
#define RPG_GAMECORE_FIXVEC3_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x22BDCA0)
#define RPG_GAMECORE_FIXVEC3_GET_UP_OFFSET UNITYSDK_OFFSET(0x191A4790)
#define RPG_GAMECORE_FIXVEC3_GET_XY_OFFSET UNITYSDK_OFFSET(0x7AEA80)
#define RPG_GAMECORE_FIXVEC3_GET_XZ_OFFSET UNITYSDK_OFFSET(0x22BD530)
#define RPG_GAMECORE_FIXVEC3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x191A4710)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0290F76B9C68EABC_1_OFFSET UNITYSDK_OFFSET(0x191A4390)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0290F76B9C68EABC_OFFSET UNITYSDK_OFFSET(0x191A4090)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_03E3131CCBF6F6BE_1_OFFSET UNITYSDK_OFFSET(0x1919F890)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_03E3131CCBF6F6BE_OFFSET UNITYSDK_OFFSET(0x1919F410)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_0BCAF079412B5AF4_OFFSET UNITYSDK_OFFSET(0x191A1A60)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_18D41210A63F269C_OFFSET UNITYSDK_OFFSET(0x191A3CC0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_23411E7301D1E121_OFFSET UNITYSDK_OFFSET(0x22BD680)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_344A6729AF11D685_OFFSET UNITYSDK_OFFSET(0x1919FCB0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_40A147C4E7E9BFE3_OFFSET UNITYSDK_OFFSET(0x191A5130)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_659A0F427B1B65E0_OFFSET UNITYSDK_OFFSET(0x191A52A0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_67815985D98AC440_OFFSET UNITYSDK_OFFSET(0x191A2D80)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_7A8BB132B01936B4_OFFSET UNITYSDK_OFFSET(0x29C30)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_7D0F08D1CA929CD2_OFFSET UNITYSDK_OFFSET(0x191A2970)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_8A7B9F704DB716F4_1_OFFSET UNITYSDK_OFFSET(0x191A5020)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_8A7B9F704DB716F4_OFFSET UNITYSDK_OFFSET(0x191A4FF0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_8BBE2686635C899D_OFFSET UNITYSDK_OFFSET(0x191A3AC0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_8D542DC3B2164113_OFFSET UNITYSDK_OFFSET(0x191A1240)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_9861764A91FE3D43_1_OFFSET UNITYSDK_OFFSET(0x191A5810)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_9861764A91FE3D43_OFFSET UNITYSDK_OFFSET(0x191A57D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_99D937FA1EF8766C_1_OFFSET UNITYSDK_OFFSET(0x191A46D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_99D937FA1EF8766C_OFFSET UNITYSDK_OFFSET(0x191A4690)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_AFD7019F6E0903A7_OFFSET UNITYSDK_OFFSET(0x191A0A70)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_B7A738CD55E0055A_1_OFFSET UNITYSDK_OFFSET(0x191A48D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_B7A738CD55E0055A_OFFSET UNITYSDK_OFFSET(0x191A4810)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_BAFB9FCCA9C915FF_OFFSET UNITYSDK_OFFSET(0x191A04F0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_DFCE5FBD69D2450A_1_OFFSET UNITYSDK_OFFSET(0x191A4CB0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_DFCE5FBD69D2450A_OFFSET UNITYSDK_OFFSET(0x191A49D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_E4BCDE132D2324FF_OFFSET UNITYSDK_OFFSET(0x191A1DC0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_E54375A9EA64BA10_1_OFFSET UNITYSDK_OFFSET(0x191A5790)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_E54375A9EA64BA10_OFFSET UNITYSDK_OFFSET(0x191A5750)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_E910149FA9429785_OFFSET UNITYSDK_OFFSET(0x22BD9E0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_F43FE83FC69869F6_OFFSET UNITYSDK_OFFSET(0x191A4970)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_F7ECFFD32EEBAD44_1_OFFSET UNITYSDK_OFFSET(0x191A24C0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_F7ECFFD32EEBAD44_OFFSET UNITYSDK_OFFSET(0x191A20D0)
#define RPG_GAMECORE_FIXVEC3_METHOD_2_F84391413EE8BA40_OFFSET UNITYSDK_OFFSET(0x191A4F90)
#define RPG_GAMECORE_FIXVEC3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x22BD5D0)
#define RPG_GAMECORE_FIXVEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22BDCB0)
#define RPG_GAMECORE_FIXVEC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x191A5850)
#define RPG_GAMECORE_FIXVEC3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22BD660)
#define RPG_GAMECORE_FIXVEC3__CTOR_OFFSET UNITYSDK_OFFSET(0x29C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixVec3_TypeDefinitionIndex = 9596;

	struct alignas(8) FixVec3
	{
		static ::RPG::GameCore::FixVec3* StaticGet_downVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x5F70);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_rightVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x5F88);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_forwardVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x5FA0);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_backVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x5FB8);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_zeroVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x5FD0);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_leftVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x5FE8);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_oneVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x6000);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_EpsilonNormalSqrt()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x6018);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_upVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x6020);
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

		static ::RPG::GameCore::FixVec3 Method_2_03E3131CCBF6F6BE(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_03E3131CCBF6F6BE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec3 Method_2_03E3131CCBF6F6BE_1(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_03E3131CCBF6F6BE_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec3 Method_2_344A6729AF11D685(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_344A6729AF11D685_OFFSET))(a1, a2, a3);
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

		static ::RPG::GameCore::FixVec3 Method_2_BAFB9FCCA9C915FF(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_BAFB9FCCA9C915FF_OFFSET))(a1, a2);
		}

		::System::Void Method_2_23411E7301D1E121(::RPG::GameCore::FixVec3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_23411E7301D1E121_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FixVec3 Method_2_AFD7019F6E0903A7(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_AFD7019F6E0903A7_OFFSET))(a1, a2);
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

		static ::RPG::GameCore::FixVec3 Method_2_8D542DC3B2164113(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_8D542DC3B2164113_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_0BCAF079412B5AF4(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_0BCAF079412B5AF4_OFFSET))(a1);
		}

		::System::Void Method_2_E910149FA9429785()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_E910149FA9429785_OFFSET))(this);
		}

		::RPG::GameCore::FixVec3 get_normalized()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_NORMALIZED_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint Method_2_E4BCDE132D2324FF(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_E4BCDE132D2324FF_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_F7ECFFD32EEBAD44(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_F7ECFFD32EEBAD44_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_F7ECFFD32EEBAD44_1(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_F7ECFFD32EEBAD44_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_7D0F08D1CA929CD2(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_7D0F08D1CA929CD2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_67815985D98AC440(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2, ::RPG::GameCore::FixVec3 a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_67815985D98AC440_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint Method_2_8BBE2686635C899D(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_8BBE2686635C899D_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_18D41210A63F269C(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_18D41210A63F269C_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Method_2_0290F76B9C68EABC(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_0290F76B9C68EABC_OFFSET))(a1);
		}

		::RPG::GameCore::FixPoint get_magnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_MAGNITUDE_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint Method_2_0290F76B9C68EABC_1(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_0290F76B9C68EABC_1_OFFSET))(a1);
		}

		::RPG::GameCore::FixPoint get_sqrMagnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::RPG::GameCore::FixVec3 Method_2_99D937FA1EF8766C(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_99D937FA1EF8766C_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_99D937FA1EF8766C_1(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_99D937FA1EF8766C_1_OFFSET))(a1, a2);
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

		static ::RPG::GameCore::FixVec3 Method_2_B7A738CD55E0055A(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_B7A738CD55E0055A_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_B7A738CD55E0055A_1(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_B7A738CD55E0055A_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_F43FE83FC69869F6(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_F43FE83FC69869F6_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixVec3 Method_2_DFCE5FBD69D2450A(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_DFCE5FBD69D2450A_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_DFCE5FBD69D2450A_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_DFCE5FBD69D2450A_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_F84391413EE8BA40(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_F84391413EE8BA40_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_8A7B9F704DB716F4(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_8A7B9F704DB716F4_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_8A7B9F704DB716F4_1(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_8A7B9F704DB716F4_1_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_TOSTRING_OFFSET))(this);
		}

		static ::RPG::GameCore::FixVec3 get_fwd()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_FWD_OFFSET))();
		}

		static ::RPG::GameCore::FixPoint Method_2_40A147C4E7E9BFE3(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_40A147C4E7E9BFE3_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec3 Method_2_659A0F427B1B65E0(::RPG::GameCore::FixVec3 a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_659A0F427B1B65E0_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::MVector3 Method_2_E54375A9EA64BA10(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_E54375A9EA64BA10_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec3 Method_2_E54375A9EA64BA10_1(::RPG::MVector3 a1)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_E54375A9EA64BA10_1_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector3 Method_2_9861764A91FE3D43(::RPG::GameCore::FixVec3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_9861764A91FE3D43_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec3 Method_2_9861764A91FE3D43_1(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::GameCore::FixVec3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_METHOD_2_9861764A91FE3D43_1_OFFSET))(a1);
		}
		*/
	};
}
