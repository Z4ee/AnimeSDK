#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_BIGFIXPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x22BC210)
#define RPG_GAMECORE_BIGFIXPOINT_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0xE2500)
#define RPG_GAMECORE_BIGFIXPOINT_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x7AEA80)
#define RPG_GAMECORE_BIGFIXPOINT_GET_SIGN_OFFSET UNITYSDK_OFFSET(0x22BC0B0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_0D3CEA11284B35A1_OFFSET UNITYSDK_OFFSET(0x22BC1F0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_0DF6722CA961AF3A_OFFSET UNITYSDK_OFFSET(0x22BC170)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_0EB68403FAE04FCA_OFFSET UNITYSDK_OFFSET(0x22BC2F0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1A63F017E94973D4_OFFSET UNITYSDK_OFFSET(0x22BC300)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_1_OFFSET UNITYSDK_OFFSET(0x191937C0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_2_OFFSET UNITYSDK_OFFSET(0x19193910)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_3_OFFSET UNITYSDK_OFFSET(0x191939B0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_4_OFFSET UNITYSDK_OFFSET(0x19193B00)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_5_OFFSET UNITYSDK_OFFSET(0x19193BA0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_6_OFFSET UNITYSDK_OFFSET(0x19193CF0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_7_OFFSET UNITYSDK_OFFSET(0x19193D90)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_OFFSET UNITYSDK_OFFSET(0x19193720)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x22BC320)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_26250BA3B9F633C8_OFFSET UNITYSDK_OFFSET(0x19193FE0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_2647ABE2B6E35F87_OFFSET UNITYSDK_OFFSET(0x19194AA0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_3BE22A09A2BF985A_OFFSET UNITYSDK_OFFSET(0x19194580)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5AD1F8C5AF1C10D4_OFFSET UNITYSDK_OFFSET(0x19193FB0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_1_OFFSET UNITYSDK_OFFSET(0x191934F0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_2_OFFSET UNITYSDK_OFFSET(0x191936C0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_3_OFFSET UNITYSDK_OFFSET(0x191938B0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_4_OFFSET UNITYSDK_OFFSET(0x19193AA0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_5_OFFSET UNITYSDK_OFFSET(0x19193C90)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_OFFSET UNITYSDK_OFFSET(0x19192F70)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_612C6A227243DC81_OFFSET UNITYSDK_OFFSET(0x19193F30)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_63D2C61679EAFA76_1_OFFSET UNITYSDK_OFFSET(0x191929A0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_63D2C61679EAFA76_OFFSET UNITYSDK_OFFSET(0x191926C0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_689B88E4918A8C65_1_OFFSET UNITYSDK_OFFSET(0x19194250)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_689B88E4918A8C65_OFFSET UNITYSDK_OFFSET(0x19194160)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_71B753E97FC89D17_1_OFFSET UNITYSDK_OFFSET(0x19193050)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_71B753E97FC89D17_2_OFFSET UNITYSDK_OFFSET(0x19193550)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_71B753E97FC89D17_3_OFFSET UNITYSDK_OFFSET(0x191935E0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_71B753E97FC89D17_OFFSET UNITYSDK_OFFSET(0x19192FD0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_7D0C675CB65264B9_OFFSET UNITYSDK_OFFSET(0x19193E80)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_8681B5B9AC51C071_1_OFFSET UNITYSDK_OFFSET(0x19194330)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_8681B5B9AC51C071_OFFSET UNITYSDK_OFFSET(0x191940E0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_892729331B73F522_OFFSET UNITYSDK_OFFSET(0x19195200)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_8A9FA3D1486F4186_OFFSET UNITYSDK_OFFSET(0x19194850)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_8C9F9156096BC897_OFFSET UNITYSDK_OFFSET(0x19193F80)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_93B1074A0931E02F_OFFSET UNITYSDK_OFFSET(0x19192620)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_959BBC7EC595A010_OFFSET UNITYSDK_OFFSET(0x19194010)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_983398A871464FD3_OFFSET UNITYSDK_OFFSET(0x191953C0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_B59D57ADF7CD00C7_1_OFFSET UNITYSDK_OFFSET(0x19192B60)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_B59D57ADF7CD00C7_OFFSET UNITYSDK_OFFSET(0x19192880)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_B75F5224D0247A91_OFFSET UNITYSDK_OFFSET(0x191946B0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_B919B34D890E7701_OFFSET UNITYSDK_OFFSET(0x22BC150)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_BF033D39B39FDBCC_OFFSET UNITYSDK_OFFSET(0x19192910)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_C1F3B472073A838A_OFFSET UNITYSDK_OFFSET(0x22BC370)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_C568AAB7C0733F07_1_OFFSET UNITYSDK_OFFSET(0x19192E50)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_C568AAB7C0733F07_OFFSET UNITYSDK_OFFSET(0x19192CB0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_C6DC32A3D1353C67_OFFSET UNITYSDK_OFFSET(0x22BC310)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E2D316EA34AB7F35_1_OFFSET UNITYSDK_OFFSET(0x19192A60)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E2D316EA34AB7F35_OFFSET UNITYSDK_OFFSET(0x19192780)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E33D8B19C5DC642D_OFFSET UNITYSDK_OFFSET(0x22BC280)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E7CFA32B8F5A1E9C_1_OFFSET UNITYSDK_OFFSET(0x19194490)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E7CFA32B8F5A1E9C_OFFSET UNITYSDK_OFFSET(0x191943B0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E84BE7C890822A98_OFFSET UNITYSDK_OFFSET(0x19192340)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8832DFFFED41339_OFFSET UNITYSDK_OFFSET(0x19192F30)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_10_OFFSET UNITYSDK_OFFSET(0x19193E30)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_11_OFFSET UNITYSDK_OFFSET(0x19193E50)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_1_OFFSET UNITYSDK_OFFSET(0x191934C0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_2_OFFSET UNITYSDK_OFFSET(0x19193670)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_3_OFFSET UNITYSDK_OFFSET(0x19193690)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_4_OFFSET UNITYSDK_OFFSET(0x19193860)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_5_OFFSET UNITYSDK_OFFSET(0x19193880)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_6_OFFSET UNITYSDK_OFFSET(0x19193A50)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_7_OFFSET UNITYSDK_OFFSET(0x19193A70)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_8_OFFSET UNITYSDK_OFFSET(0x19193C40)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_9_OFFSET UNITYSDK_OFFSET(0x19193C60)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_OFFSET UNITYSDK_OFFSET(0x191930D0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_EE263763F9B0544C_1_OFFSET UNITYSDK_OFFSET(0x19192D90)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_EE263763F9B0544C_OFFSET UNITYSDK_OFFSET(0x19192BF0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_FAAE8ECA98A37577_1_OFFSET UNITYSDK_OFFSET(0x19194FC0)
#define RPG_GAMECORE_BIGFIXPOINT_METHOD_2_FAAE8ECA98A37577_OFFSET UNITYSDK_OFFSET(0x19194DA0)
#define RPG_GAMECORE_BIGFIXPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22BC270)
#define RPG_GAMECORE_BIGFIXPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19195DC0)
#define RPG_GAMECORE_BIGFIXPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22BC0F0)
#define RPG_GAMECORE_BIGFIXPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x22BC0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BigFixPoint_TypeDefinitionIndex = 9588;

	struct alignas(8) BigFixPoint
	{
		static ::RPG::GameCore::BigFixPoint* StaticGet_Zero()
		{
			return (::RPG::GameCore::BigFixPoint*)Il2CppClass::FromTypeDefinitionIndex(BigFixPoint_TypeDefinitionIndex)->GetStaticField(0x400C0);
		}
		static ::RPG::GameCore::BigFixPoint* StaticGet_BitMask_One()
		{
			return (::RPG::GameCore::BigFixPoint*)Il2CppClass::FromTypeDefinitionIndex(BigFixPoint_TypeDefinitionIndex)->GetStaticField(0x400D0);
		}
		static ::RPG::GameCore::BigFixPoint* StaticGet_One()
		{
			return (::RPG::GameCore::BigFixPoint*)Il2CppClass::FromTypeDefinitionIndex(BigFixPoint_TypeDefinitionIndex)->GetStaticField(0x400E0);
		}
		static ::System::Int64* StaticGet_Raw_Max_FixPoint()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(BigFixPoint_TypeDefinitionIndex)->GetStaticField(0xE630);
		}
		static ::System::Int64* StaticGet_Raw_Min_FixPoint()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(BigFixPoint_TypeDefinitionIndex)->GetStaticField(0xE638);
		}
		// static const ::System::Int32 FRACTIONAL_SLIDE = 0x0; // 0x0
		// static const ::System::Int32 FRACTIONAL_PLACES = 0x20; // 0x0
		// static const ::System::Int64 ONE = 0x100000000; // 0x0
		::System::Numerics::BigInteger _RawValue; // 0x10

		/*
		::System::Void _ctor(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT__CTOR_OFFSET))(this, a1);
		}
		*/

		::System::Void _ctor_1(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_GET_ISZERO_OFFSET))(this);
		}

		::System::Int32 get_Sign()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_GET_SIGN_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_RawValue()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_GET_RAWVALUE_OFFSET))(this);
		}

		static ::RPG::GameCore::BigFixPoint Method_2_93B1074A0931E02F(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_93B1074A0931E02F_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::GameCore::BigFixPoint Method_2_63D2C61679EAFA76(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_63D2C61679EAFA76_OFFSET))(a1, a2);
		}
		*/

		static ::RPG::GameCore::BigFixPoint Method_2_E2D316EA34AB7F35(::RPG::GameCore::BigFixPoint a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E2D316EA34AB7F35_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::BigFixPoint Method_2_B59D57ADF7CD00C7(::RPG::GameCore::BigFixPoint a1, ::System::Int64 a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_B59D57ADF7CD00C7_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::BigFixPoint Method_2_BF033D39B39FDBCC(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_BF033D39B39FDBCC_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::GameCore::BigFixPoint Method_2_63D2C61679EAFA76_1(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_63D2C61679EAFA76_1_OFFSET))(a1, a2);
		}
		*/

		static ::RPG::GameCore::BigFixPoint Method_2_E2D316EA34AB7F35_1(::RPG::GameCore::BigFixPoint a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E2D316EA34AB7F35_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::BigFixPoint Method_2_B59D57ADF7CD00C7_1(::RPG::GameCore::BigFixPoint a1, ::System::Int64 a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_B59D57ADF7CD00C7_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::BigFixPoint Method_2_EE263763F9B0544C(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_EE263763F9B0544C_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::GameCore::BigFixPoint Method_2_C568AAB7C0733F07(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_C568AAB7C0733F07_OFFSET))(a1, a2);
		}
		*/

		static ::RPG::GameCore::BigFixPoint Method_2_EE263763F9B0544C_1(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_EE263763F9B0544C_1_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::GameCore::BigFixPoint Method_2_C568AAB7C0733F07_1(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_C568AAB7C0733F07_1_OFFSET))(a1, a2);
		}
		*/

		static ::RPG::GameCore::BigFixPoint Method_2_E8832DFFFED41339(::RPG::GameCore::BigFixPoint a1)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8832DFFFED41339_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_5D8CC6802B5DB498(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_OFFSET))(a1, a2);
		}

		/*
		static ::System::Boolean Method_2_71B753E97FC89D17(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_71B753E97FC89D17_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_71B753E97FC89D17_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_71B753E97FC89D17_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2(::RPG::GameCore::BigFixPoint a1, ::Struct_2_31FA970B95D81C5B a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::Struct_2_31FA970B95D81C5B))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2_1(::Struct_2_31FA970B95D81C5B a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::Struct_2_31FA970B95D81C5B, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_1_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean Method_2_5D8CC6802B5DB498_1(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_1_OFFSET))(a1, a2);
		}

		/*
		static ::System::Boolean Method_2_71B753E97FC89D17_2(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_71B753E97FC89D17_2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_71B753E97FC89D17_3(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_71B753E97FC89D17_3_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2_2(::RPG::GameCore::BigFixPoint a1, ::Struct_2_31FA970B95D81C5B a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::Struct_2_31FA970B95D81C5B))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2_3(::Struct_2_31FA970B95D81C5B a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::Struct_2_31FA970B95D81C5B, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_3_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean Method_2_5D8CC6802B5DB498_2(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_2_OFFSET))(a1, a2);
		}

		/*
		static ::System::Boolean Method_2_1C924584331A2010(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_1C924584331A2010_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2_4(::RPG::GameCore::BigFixPoint a1, ::Struct_2_31FA970B95D81C5B a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::Struct_2_31FA970B95D81C5B))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_4_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2_5(::Struct_2_31FA970B95D81C5B a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::Struct_2_31FA970B95D81C5B, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_5_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean Method_2_5D8CC6802B5DB498_3(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_3_OFFSET))(a1, a2);
		}

		/*
		static ::System::Boolean Method_2_1C924584331A2010_2(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_1C924584331A2010_3(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_3_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2_6(::RPG::GameCore::BigFixPoint a1, ::Struct_2_31FA970B95D81C5B a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::Struct_2_31FA970B95D81C5B))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_6_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2_7(::Struct_2_31FA970B95D81C5B a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::Struct_2_31FA970B95D81C5B, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_7_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean Method_2_5D8CC6802B5DB498_4(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_4_OFFSET))(a1, a2);
		}

		/*
		static ::System::Boolean Method_2_1C924584331A2010_4(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_4_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_1C924584331A2010_5(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_5_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2_8(::RPG::GameCore::BigFixPoint a1, ::Struct_2_31FA970B95D81C5B a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::Struct_2_31FA970B95D81C5B))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_8_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2_9(::Struct_2_31FA970B95D81C5B a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::Struct_2_31FA970B95D81C5B, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_9_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean Method_2_5D8CC6802B5DB498_5(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5D8CC6802B5DB498_5_OFFSET))(a1, a2);
		}

		/*
		static ::System::Boolean Method_2_1C924584331A2010_6(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_6_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_1C924584331A2010_7(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1C924584331A2010_7_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2_10(::RPG::GameCore::BigFixPoint a1, ::Struct_2_31FA970B95D81C5B a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::Struct_2_31FA970B95D81C5B))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_10_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean Method_2_E8FAF342ADF8BCF2_11(::Struct_2_31FA970B95D81C5B a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::Struct_2_31FA970B95D81C5B, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E8FAF342ADF8BCF2_11_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Decimal Method_2_7D0C675CB65264B9(::RPG::GameCore::BigFixPoint a1)
		{
			return ((::System::Decimal(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_7D0C675CB65264B9_OFFSET))(a1);
		}
		*/

		static ::System::Double Method_2_612C6A227243DC81(::RPG::GameCore::BigFixPoint a1)
		{
			return ((::System::Double(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_612C6A227243DC81_OFFSET))(a1);
		}

		/*
		static ::RPG::GameCore::BigFixPoint Method_2_8C9F9156096BC897(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_8C9F9156096BC897_OFFSET))(a1);
		}
		*/

		static ::RPG::GameCore::BigFixPoint Method_2_5AD1F8C5AF1C10D4(::System::Int32 a1)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_5AD1F8C5AF1C10D4_OFFSET))(a1);
		}

		static ::RPG::GameCore::BigFixPoint Method_2_26250BA3B9F633C8(::System::Int64 a1)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_26250BA3B9F633C8_OFFSET))(a1);
		}

		static ::RPG::GameCore::BigFixPoint Method_2_959BBC7EC595A010(::RPG::GameCore::BigFixPoint a1)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_959BBC7EC595A010_OFFSET))(a1);
		}

		static ::RPG::GameCore::BigFixPoint Method_2_8681B5B9AC51C071(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_8681B5B9AC51C071_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::GameCore::BigFixPoint Method_2_689B88E4918A8C65(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_689B88E4918A8C65_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::BigFixPoint Method_2_689B88E4918A8C65_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_689B88E4918A8C65_1_OFFSET))(a1, a2);
		}
		*/

		static ::RPG::GameCore::BigFixPoint Method_2_8681B5B9AC51C071_1(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_8681B5B9AC51C071_1_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::GameCore::BigFixPoint Method_2_E7CFA32B8F5A1E9C(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E7CFA32B8F5A1E9C_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::BigFixPoint Method_2_E7CFA32B8F5A1E9C_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E7CFA32B8F5A1E9C_1_OFFSET))(a1, a2);
		}
		*/

		static ::RPG::GameCore::BigFixPoint Method_2_3BE22A09A2BF985A(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2, ::RPG::GameCore::BigFixPoint a3)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_3BE22A09A2BF985A_OFFSET))(a1, a2, a3);
		}

		/*
		static ::RPG::GameCore::FixPoint Method_2_B75F5224D0247A91(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_B75F5224D0247A91_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Method_2_8A9FA3D1486F4186(::RPG::GameCore::BigFixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_8A9FA3D1486F4186_OFFSET))(a1);
		}
		*/

		static ::RPG::GameCore::BigFixPoint Method_2_2647ABE2B6E35F87(::RPG::GameCore::BigFixPoint a1)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_2647ABE2B6E35F87_OFFSET))(a1);
		}

		static ::RPG::GameCore::BigFixPoint Method_2_FAAE8ECA98A37577(::RPG::GameCore::BigFixPoint a1)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_FAAE8ECA98A37577_OFFSET))(a1);
		}

		static ::RPG::GameCore::BigFixPoint Method_2_FAAE8ECA98A37577_1(::RPG::GameCore::BigFixPoint a1)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_FAAE8ECA98A37577_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_892729331B73F522(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_892729331B73F522_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_983398A871464FD3(::RPG::GameCore::BigFixPoint a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_983398A871464FD3_OFFSET))(a1);
		}

		::System::Int32 Method_2_B919B34D890E7701(::RPG::GameCore::BigFixPoint a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_B919B34D890E7701_OFFSET))(this, a1);
		}

		/*
		::System::Int32 Method_2_0DF6722CA961AF3A(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_0DF6722CA961AF3A_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Int32 Method_2_0D3CEA11284B35A1(::Struct_2_31FA970B95D81C5B a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Struct_2_31FA970B95D81C5B))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_0D3CEA11284B35A1_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::RPG::GameCore::BigFixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_TOSTRING_OFFSET))(this);
		}

		::System::String* Method_2_E33D8B19C5DC642D(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E33D8B19C5DC642D_OFFSET))(this, a1);
		}

		/*
		::RPG::GameCore::FixPoint Method_2_0EB68403FAE04FCA()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_0EB68403FAE04FCA_OFFSET))(this);
		}
		*/

		/*
		::RPG::GameCore::FixPoint Method_2_1A63F017E94973D4(::System::Boolean& a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1A63F017E94973D4_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void Method_2_C6DC32A3D1353C67(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::FixPoint& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_C6DC32A3D1353C67_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::Struct_2_31FA970B95D81C5B Method_2_1F8314262457963A()
		{
			return ((::Struct_2_31FA970B95D81C5B(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_1F8314262457963A_OFFSET))(this);
		}
		*/

		/*
		static ::RPG::GameCore::BigFixPoint Method_2_E84BE7C890822A98(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::BigFixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_E84BE7C890822A98_OFFSET))(a1, a2);
		}
		*/

		::System::Boolean Method_2_C1F3B472073A838A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINT_METHOD_2_C1F3B472073A838A_OFFSET))(this);
		}
	};
}
