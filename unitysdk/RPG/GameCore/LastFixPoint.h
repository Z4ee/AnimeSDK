#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_LASTFIXPOINT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3BD2430)
#define RPG_GAMECORE_LASTFIXPOINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x84C2D0)
#define RPG_GAMECORE_LASTFIXPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C68F00)
#define RPG_GAMECORE_LASTFIXPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B67D00)
#define RPG_GAMECORE_LASTFIXPOINT_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x161E0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_05A8CEBA1136902B_OFFSET UNITYSDK_OFFSET(0x1EC61700)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1634B374B620CAB5_OFFSET UNITYSDK_OFFSET(0x1EC60CD0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_17E7E136A54D4A03_OFFSET UNITYSDK_OFFSET(0x1EC60D20)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_19670C25E7A4C8C8_OFFSET UNITYSDK_OFFSET(0x1EC62860)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_1_OFFSET UNITYSDK_OFFSET(0x1EC60B30)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_2_OFFSET UNITYSDK_OFFSET(0x1EC60B40)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_3_OFFSET UNITYSDK_OFFSET(0x1EC60B70)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_4_OFFSET UNITYSDK_OFFSET(0x1EC60CA0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_5_OFFSET UNITYSDK_OFFSET(0x1EC63020)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_6_OFFSET UNITYSDK_OFFSET(0x1EC63030)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_OFFSET UNITYSDK_OFFSET(0x1EC4E410)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1ED86B30A0AA91F2_OFFSET UNITYSDK_OFFSET(0x1EC60F60)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2073A237D87A42BF_OFFSET UNITYSDK_OFFSET(0x1EC62AD0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2336B6B1CEFCB2DE_OFFSET UNITYSDK_OFFSET(0x1EC4E620)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_23742EB8FCB2D68A_OFFSET UNITYSDK_OFFSET(0x1EC628D0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_23A7695E09CAA22D_1_OFFSET UNITYSDK_OFFSET(0x1EC612A0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_23A7695E09CAA22D_2_OFFSET UNITYSDK_OFFSET(0x1EC612B0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_23A7695E09CAA22D_OFFSET UNITYSDK_OFFSET(0x1EC61A50)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_24A6A5AD9D094EF3_OFFSET UNITYSDK_OFFSET(0x1EC62890)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2E1CA500ED272DCB_1_OFFSET UNITYSDK_OFFSET(0x1EC60A70)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2E1CA500ED272DCB_2_OFFSET UNITYSDK_OFFSET(0x1EC4E400)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2E1CA500ED272DCB_3_OFFSET UNITYSDK_OFFSET(0x1EC61510)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2E1CA500ED272DCB_4_OFFSET UNITYSDK_OFFSET(0x1EC628B0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2E1CA500ED272DCB_OFFSET UNITYSDK_OFFSET(0x1EC60A60)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2FB33185CFAE7902_1_OFFSET UNITYSDK_OFFSET(0x1EC60A80)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2FB33185CFAE7902_2_OFFSET UNITYSDK_OFFSET(0x1EC60F80)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2FB33185CFAE7902_OFFSET UNITYSDK_OFFSET(0x1EC4E440)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_319BD92A411D59A6_OFFSET UNITYSDK_OFFSET(0x1EC62810)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_32B428A4DB5C30AD_OFFSET UNITYSDK_OFFSET(0x1EC60FF0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_481BDCDB20848274_OFFSET UNITYSDK_OFFSET(0x1EC61A80)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x3C68F40)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_5B1A9BC53BD5D0A7_OFFSET UNITYSDK_OFFSET(0x1EC60B80)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_6D2509FD3C7F75C4_1_OFFSET UNITYSDK_OFFSET(0x1EC61A70)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_6D2509FD3C7F75C4_OFFSET UNITYSDK_OFFSET(0x1EC61A60)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_8C8713C7EBF5C697_OFFSET UNITYSDK_OFFSET(0x1EC612C0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x1EC620B0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AB9519FD4B49C0AD_OFFSET UNITYSDK_OFFSET(0x1EC60BA0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_1_OFFSET UNITYSDK_OFFSET(0x1EC60FB0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_2_OFFSET UNITYSDK_OFFSET(0x1EC60FC0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_3_OFFSET UNITYSDK_OFFSET(0x1EC60FD0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_4_OFFSET UNITYSDK_OFFSET(0x1EC4E470)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_5_OFFSET UNITYSDK_OFFSET(0x1EC60FE0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_OFFSET UNITYSDK_OFFSET(0x1EC60FA0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_B14048237263DFDC_OFFSET UNITYSDK_OFFSET(0x1EC62920)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_BA0EA45EEE7FA614_OFFSET UNITYSDK_OFFSET(0x1EC60AD0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_BAAF49D24B1D585A_1_OFFSET UNITYSDK_OFFSET(0x1EC52C20)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_BAAF49D24B1D585A_OFFSET UNITYSDK_OFFSET(0x1EC52C30)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_CF667B25396A76F4_OFFSET UNITYSDK_OFFSET(0x1EC61B90)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_D826F5DC70436677_OFFSET UNITYSDK_OFFSET(0x1EC62980)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_EF16EBF6101689CB_OFFSET UNITYSDK_OFFSET(0x1EC61550)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_F28E7BF4A80ED513_1_OFFSET UNITYSDK_OFFSET(0x1EC62800)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_F28E7BF4A80ED513_OFFSET UNITYSDK_OFFSET(0x1EC61B20)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_F631F7D557F488AA_1_OFFSET UNITYSDK_OFFSET(0x1EC630B0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_F631F7D557F488AA_OFFSET UNITYSDK_OFFSET(0x1EC63040)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_FABB3B05C850E193_1_OFFSET UNITYSDK_OFFSET(0x1EC61290)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_FABB3B05C850E193_2_OFFSET UNITYSDK_OFFSET(0x1EC4E3F0)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_FABB3B05C850E193_OFFSET UNITYSDK_OFFSET(0x1EC60A40)
#define RPG_GAMECORE_LASTFIXPOINT_METHOD_2_FC2A4D98E469130D_OFFSET UNITYSDK_OFFSET(0x1EC60F20)
#define RPG_GAMECORE_LASTFIXPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C68F20)
#define RPG_GAMECORE_LASTFIXPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC63120)
#define RPG_GAMECORE_LASTFIXPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C68F30)
#define RPG_GAMECORE_LASTFIXPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x16050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LastFixPoint_TypeDefinitionIndex = 9888;

	struct alignas(8) LastFixPoint
	{
		static ::RPG::GameCore::LastFixPoint* StaticGet_InvalidLastFixPoint()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x108C0);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_Log2Max()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x108C8);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_MinValue()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x108D0);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_LutInterval()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x108D8);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_MaxValue()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x108E0);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_Epsilon()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x108E8);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_Pi()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x108F0);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_Zero()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x108F8);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_PiTimes2()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x10900);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_One()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x10908);
		}
		static ::System::Decimal* StaticGet_Precision()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x10910);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_PiInv()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x10920);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_PiOver2Inv()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x10928);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_PiOver2()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x10930);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_Ln2()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x10938);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_s_FixEpsilon()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x10940);
		}
		static ::RPG::GameCore::LastFixPoint* StaticGet_Log2Min()
		{
			return (::RPG::GameCore::LastFixPoint*)Il2CppClass::FromTypeDefinitionIndex(LastFixPoint_TypeDefinitionIndex)->GetStaticField(0x10948);
		}
		// static const ::System::Int64 MAX_VALUE = 0x7FFFFFFFFFFFFFFF; // 0x0
		// static const ::System::Int64 MIN_VALUE = 0x8000000000000000; // 0x0
		// static const ::System::Int32 NUM_BITS = 0x40; // 0x0
		// static const ::System::Int32 FRACTIONAL_SLIDE = 0x0; // 0x0
		// static const ::System::Int32 FRACTIONAL_PLACES = 0x20; // 0x0
		// static const ::System::Int64 ONE = 0x100000000; // 0x0
		// static const ::System::Int64 PI_TIMES_2 = 0x6487ED511; // 0x0
		// static const ::System::Int64 PI = 0x3243F6A88; // 0x0
		// static const ::System::Int64 PI_OVER_2 = 0x1921FB544; // 0x0
		// static const ::System::Int64 LN2 = 0xB17217F7; // 0x0
		// static const ::System::Int64 LOG2MAX = 0x1F00000000; // 0x0
		// static const ::System::Int64 LOG2MIN = 0xFFFFFFE000000000; // 0x0
		// static const ::System::Int64 EPSILON = 0x1000; // 0x0
		// static const ::System::Int32 LUT_SIZE = 0x3243F; // 0x0
		// static const ::System::Int64 FRACTIONAL_CUT = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt64 INTEGER_CUT = 0xFFFFFFFF00000000; // 0x0
		::System::Int64 m_rawValue; // 0x10

		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT__CCTOR_OFFSET))();
		}

		static ::System::Int32 Method_2_FABB3B05C850E193(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_FABB3B05C850E193_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_2FB33185CFAE7902(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2FB33185CFAE7902_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_2E1CA500ED272DCB(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2E1CA500ED272DCB_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_2E1CA500ED272DCB_1(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2E1CA500ED272DCB_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_2FB33185CFAE7902_1(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2FB33185CFAE7902_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_BA0EA45EEE7FA614(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_BA0EA45EEE7FA614_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_2E1CA500ED272DCB_2(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2E1CA500ED272DCB_2_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_1DFDF000E14C6D7B(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_1DFDF000E14C6D7B_1(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_1DFDF000E14C6D7B_2(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_1DFDF000E14C6D7B_3(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_3_OFFSET))(a1, a2);
		}

		static ::System::Int64 Method_2_5B1A9BC53BD5D0A7(::System::Int64 a1, ::System::Int64 a2, ::System::Boolean& a3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_5B1A9BC53BD5D0A7_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_AB9519FD4B49C0AD(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AB9519FD4B49C0AD_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_1DFDF000E14C6D7B_4(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_4_OFFSET))(a1, a2);
		}

		static ::System::Int32 Method_2_1634B374B620CAB5(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1634B374B620CAB5_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_17E7E136A54D4A03(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_17E7E136A54D4A03_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_FC2A4D98E469130D(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_FC2A4D98E469130D_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_1ED86B30A0AA91F2(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1ED86B30A0AA91F2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_2FB33185CFAE7902_2(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2FB33185CFAE7902_2_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_AFF1A89C4884608F(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_AFF1A89C4884608F_1(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_AFF1A89C4884608F_2(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_AFF1A89C4884608F_3(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_AFF1A89C4884608F_4(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_AFF1A89C4884608F_5(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_AFF1A89C4884608F_5_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_32B428A4DB5C30AD(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_32B428A4DB5C30AD_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_8C8713C7EBF5C697(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_8C8713C7EBF5C697_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_2E1CA500ED272DCB_3(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2E1CA500ED272DCB_3_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_EF16EBF6101689CB(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_EF16EBF6101689CB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_05A8CEBA1136902B(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_05A8CEBA1136902B_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_23A7695E09CAA22D(::System::Int64 a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_23A7695E09CAA22D_OFFSET))(a1);
		}

		static ::System::Int64 Method_2_23A7695E09CAA22D_1(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_23A7695E09CAA22D_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_6D2509FD3C7F75C4(::System::Single a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_6D2509FD3C7F75C4_OFFSET))(a1);
		}

		static ::System::Single Method_2_6D2509FD3C7F75C4_1(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_6D2509FD3C7F75C4_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_BAAF49D24B1D585A(::System::Double a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::System::Double))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_BAAF49D24B1D585A_OFFSET))(a1);
		}

		static ::System::Double Method_2_BAAF49D24B1D585A_1(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Double(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_BAAF49D24B1D585A_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_481BDCDB20848274(::System::Decimal a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_481BDCDB20848274_OFFSET))(a1);
		}

		static ::System::UInt32 Method_2_F28E7BF4A80ED513(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_F28E7BF4A80ED513_OFFSET))(a1);
		}

		static ::System::Decimal Method_2_2336B6B1CEFCB2DE(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Decimal(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2336B6B1CEFCB2DE_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_TOSTRING_OFFSET))(this);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_23A7695E09CAA22D_2(::System::Int64 a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_23A7695E09CAA22D_2_OFFSET))(a1);
		}

		static ::System::Void Method_2_CF667B25396A76F4()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_CF667B25396A76F4_OFFSET))();
		}

		static ::System::Void Method_2_A2172401030892FD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_A2172401030892FD_OFFSET))();
		}

		::System::Int64 get_RawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_GET_RAWVALUE_OFFSET))(this);
		}

		::System::Single Method_2_5323F2DF46A044DA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_FABB3B05C850E193_1(::System::Int32 a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_FABB3B05C850E193_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_F28E7BF4A80ED513_1(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_F28E7BF4A80ED513_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_319BD92A411D59A6(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_319BD92A411D59A6_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_19670C25E7A4C8C8(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_19670C25E7A4C8C8_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_24A6A5AD9D094EF3(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2, ::RPG::GameCore::LastFixPoint a3)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_24A6A5AD9D094EF3_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_2E1CA500ED272DCB_4(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2E1CA500ED272DCB_4_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_23742EB8FCB2D68A(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_23742EB8FCB2D68A_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_FABB3B05C850E193_2(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_FABB3B05C850E193_2_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_B14048237263DFDC(::RPG::GameCore::LastFixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_B14048237263DFDC_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_D826F5DC70436677(::RPG::GameCore::LastFixPoint a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_D826F5DC70436677_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_2073A237D87A42BF(::System::String* a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_2073A237D87A42BF_OFFSET))(a1);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_1DFDF000E14C6D7B_5(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_5_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LastFixPoint Method_2_1DFDF000E14C6D7B_6(::RPG::GameCore::LastFixPoint a1, ::RPG::GameCore::LastFixPoint a2)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::LastFixPoint, ::RPG::GameCore::LastFixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_1DFDF000E14C6D7B_6_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::GameCore::LastFixPoint Method_2_F631F7D557F488AA(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_F631F7D557F488AA_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::LastFixPoint Method_2_F631F7D557F488AA_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::LastFixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LASTFIXPOINT_METHOD_2_F631F7D557F488AA_1_OFFSET))(a1);
		}
		*/
	};
}
