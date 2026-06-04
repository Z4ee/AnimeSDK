#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_356;
class Class_0_16E4307DCC419505_358;
class Class_1_6A1DFE1822B872F8;
class Class_1_7A22A3DBEEDD1F80;
namespace Google::Protobuf { class ByteString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_051DF7EE0B465B33_METHOD_1_0072A2CE2BC9C16B_OFFSET UNITYSDK_OFFSET(0x13943440)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_0D87E7AD42435A1D_OFFSET UNITYSDK_OFFSET(0x13943FA0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_0F40033028C887AE_OFFSET UNITYSDK_OFFSET(0x13947980)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_12F2F30AA607700B_OFFSET UNITYSDK_OFFSET(0x13943C10)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_158DDEF2BDDB23FA_1_OFFSET UNITYSDK_OFFSET(0x13944530)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_158DDEF2BDDB23FA_OFFSET UNITYSDK_OFFSET(0x13942F00)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_16A88F7DE6D13900_OFFSET UNITYSDK_OFFSET(0x13943070)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_1D1E92CE8815DB85_OFFSET UNITYSDK_OFFSET(0x13945080)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_2D88E3127D5FA483_OFFSET UNITYSDK_OFFSET(0x139453D0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_31033CDCFDBD2556_1_OFFSET UNITYSDK_OFFSET(0x139437E0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_31033CDCFDBD2556_2_OFFSET UNITYSDK_OFFSET(0x139456D0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_31033CDCFDBD2556_OFFSET UNITYSDK_OFFSET(0x139436E0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_35A0BD556D6BF954_OFFSET UNITYSDK_OFFSET(0x13945990)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3645A4E736D48F30_1_OFFSET UNITYSDK_OFFSET(0x13946E60)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3645A4E736D48F30_OFFSET UNITYSDK_OFFSET(0x139461C0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3BBDC5EE96CDED90_OFFSET UNITYSDK_OFFSET(0x13946F20)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_1_OFFSET UNITYSDK_OFFSET(0x13944410)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_2_OFFSET UNITYSDK_OFFSET(0x139446A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_3_OFFSET UNITYSDK_OFFSET(0x139470D0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0x139442F0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3C8592D0EE605757_1_OFFSET UNITYSDK_OFFSET(0x13945DF0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3C8592D0EE605757_OFFSET UNITYSDK_OFFSET(0x13945CA0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_438126F0AC127E39_OFFSET UNITYSDK_OFFSET(0x13945130)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43B9626D1ABEA7B1_OFFSET UNITYSDK_OFFSET(0x13947F60)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_1_OFFSET UNITYSDK_OFFSET(0x13944F10)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_2_OFFSET UNITYSDK_OFFSET(0x13946AC0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_3_OFFSET UNITYSDK_OFFSET(0x13946B70)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_4_OFFSET UNITYSDK_OFFSET(0x13946C20)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_OFFSET UNITYSDK_OFFSET(0x13943210)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_478A47F7ED86FD83_OFFSET UNITYSDK_OFFSET(0x13945F40)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_4921FEDA99EFAB05_OFFSET UNITYSDK_OFFSET(0x13943D70)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_4BEA6AF2E9152F68_OFFSET UNITYSDK_OFFSET(0x13946D80)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_4F2FF4C9310A0F53_OFFSET UNITYSDK_OFFSET(0x139477C0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_59D09FABE6B59443_OFFSET UNITYSDK_OFFSET(0x13944A90)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_631D2F9F05C7B729_OFFSET UNITYSDK_OFFSET(0x139481A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_67A670689035E9D6_OFFSET UNITYSDK_OFFSET(0x13943600)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_6A47E919513E3EEC_OFFSET UNITYSDK_OFFSET(0x139428B0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_749948B663FCCCEF_1_OFFSET UNITYSDK_OFFSET(0x13943170)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_749948B663FCCCEF_2_OFFSET UNITYSDK_OFFSET(0x13947030)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x139430D0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_76B73AF189282465_OFFSET UNITYSDK_OFFSET(0x13944C20)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_78A1456A6DBF4558_OFFSET UNITYSDK_OFFSET(0x13947DA0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_797A699EED121969_OFFSET UNITYSDK_OFFSET(0x139405E0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_79D8F58393184EAE_OFFSET UNITYSDK_OFFSET(0x13944140)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_81BD8966CB494E69_OFFSET UNITYSDK_OFFSET(0x13946890)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_83A6AA039A87DA45_1_OFFSET UNITYSDK_OFFSET(0x13942D30)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_83A6AA039A87DA45_OFFSET UNITYSDK_OFFSET(0x13942C20)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_84ABFF4369ABABA8_OFFSET UNITYSDK_OFFSET(0x139469A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_8657C62DB172F375_1_OFFSET UNITYSDK_OFFSET(0x13944DA0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_8657C62DB172F375_OFFSET UNITYSDK_OFFSET(0x13944CE0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_86DE64A6C2CCC02D_OFFSET UNITYSDK_OFFSET(0x139454F0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_8D499215905103F3_1_OFFSET UNITYSDK_OFFSET(0x13945AE0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_8D499215905103F3_OFFSET UNITYSDK_OFFSET(0x139457D0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_932BC234D35144E8_OFFSET UNITYSDK_OFFSET(0x139476E0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_95DEEC393C4C0BF7_1_OFFSET UNITYSDK_OFFSET(0x13946370)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_95DEEC393C4C0BF7_2_OFFSET UNITYSDK_OFFSET(0x13946460)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_95DEEC393C4C0BF7_OFFSET UNITYSDK_OFFSET(0x13946280)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_966EDE07FE271747_OFFSET UNITYSDK_OFFSET(0x13948080)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_9C6A4202BD49F547_OFFSET UNITYSDK_OFFSET(0x139438E0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_A3A311326D005F67_OFFSET UNITYSDK_OFFSET(0x13947BB0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_A88CDF038776FAA5_OFFSET UNITYSDK_OFFSET(0x139447C0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_A8BDFA0D4DF05A96_1_OFFSET UNITYSDK_OFFSET(0x13944AF0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_A8BDFA0D4DF05A96_OFFSET UNITYSDK_OFFSET(0x13943AE0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_ACEE40394550C74A_OFFSET UNITYSDK_OFFSET(0x139429B0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_AD851080DF060FF0_OFFSET UNITYSDK_OFFSET(0x139452B0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_AFE15EB4CFBCD8D3_OFFSET UNITYSDK_OFFSET(0x13943E80)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B27C7FF7B4D36EB3_1_OFFSET UNITYSDK_OFFSET(0x13947B50)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B27C7FF7B4D36EB3_OFFSET UNITYSDK_OFFSET(0x13947A80)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B2DC796212A64DBE_OFFSET UNITYSDK_OFFSET(0x13944FC0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B3AE3C1FD9D54995_OFFSET UNITYSDK_OFFSET(0x13946050)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_1_OFFSET UNITYSDK_OFFSET(0x13945620)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_2_OFFSET UNITYSDK_OFFSET(0x13946CD0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_3_OFFSET UNITYSDK_OFFSET(0x139471F0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_4_OFFSET UNITYSDK_OFFSET(0x139472A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_5_OFFSET UNITYSDK_OFFSET(0x13947350)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_6_OFFSET UNITYSDK_OFFSET(0x13947400)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_OFFSET UNITYSDK_OFFSET(0x13944E60)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B571F95255C25AB8_1_OFFSET UNITYSDK_OFFSET(0x13946690)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B571F95255C25AB8_OFFSET UNITYSDK_OFFSET(0x13946550)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_BDF6FC06516C975B_OFFSET UNITYSDK_OFFSET(0x139439A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_C31480916099843E_OFFSET UNITYSDK_OFFSET(0x13942E40)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x13948020)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_CF1F51BB8D8D7B68_OFFSET UNITYSDK_OFFSET(0x13948130)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_D29E141E6BA32C39_OFFSET UNITYSDK_OFFSET(0x139432C0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_D3423CC2A44F3625_OFFSET UNITYSDK_OFFSET(0x13947AE0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_D6A423C7D4B0EFDC_1_OFFSET UNITYSDK_OFFSET(0x13942B70)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_D6A423C7D4B0EFDC_OFFSET UNITYSDK_OFFSET(0x13942AC0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_E0C1EEE779E3ED8A_OFFSET UNITYSDK_OFFSET(0x13947E90)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_E39B4279BF06EB37_OFFSET UNITYSDK_OFFSET(0x139474B0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_E54BDAC1DE7B950E_OFFSET UNITYSDK_OFFSET(0x13944870)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x139480E0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x139480F0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F0E31A4D53DB6DC4_OFFSET UNITYSDK_OFFSET(0x139467D0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x13947670)
#define CLASS_1_051DF7EE0B465B33__CCTOR_OFFSET UNITYSDK_OFFSET(0x13948210)

inline static constexpr unsigned int Class_1_051DF7EE0B465B33_TypeDefinitionIndex = 52364;

class Class_1_051DF7EE0B465B33 : public ::System::Object
{
public:
	static ::Class_1_7A22A3DBEEDD1F80** StaticGet_Field_1_0()
	{
		return (::Class_1_7A22A3DBEEDD1F80**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x2670);
	}
	static ::Il2CppArray<::Class_1_6A1DFE1822B872F8*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_1_6A1DFE1822B872F8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x2678);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x2680);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x1050);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x1054);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x1058);
	}
	// static const ::System::String* Field_1_6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_797A699EED121969()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_797A699EED121969_OFFSET))();
	}

	static ::Class_1_6A1DFE1822B872F8* Method_1_6A47E919513E3EEC()
	{
		return ((::Class_1_6A1DFE1822B872F8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_6A47E919513E3EEC_OFFSET))();
	}

	static ::System::Void Method_1_D6A423C7D4B0EFDC(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_D6A423C7D4B0EFDC_OFFSET))(a1);
	}

	static ::System::Void Method_1_D6A423C7D4B0EFDC_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_D6A423C7D4B0EFDC_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_83A6AA039A87DA45(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_83A6AA039A87DA45_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_83A6AA039A87DA45_1(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_83A6AA039A87DA45_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C31480916099843E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_C31480916099843E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_158DDEF2BDDB23FA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_158DDEF2BDDB23FA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_749948B663FCCCEF_OFFSET))();
	}

	static ::System::Void Method_1_749948B663FCCCEF_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_749948B663FCCCEF_1_OFFSET))();
	}

	static ::System::Void Method_1_43EB35212D1A55A8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_OFFSET))(a1);
	}

	static ::System::Void Method_1_D29E141E6BA32C39(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_D29E141E6BA32C39_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0072A2CE2BC9C16B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Byte a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Byte, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_0072A2CE2BC9C16B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_67A670689035E9D6(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_67A670689035E9D6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_31033CDCFDBD2556(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_31033CDCFDBD2556_OFFSET))(a1);
	}

	static ::System::Void Method_1_31033CDCFDBD2556_1(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_31033CDCFDBD2556_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_9C6A4202BD49F547(::System::UInt32 a1, ::RPG::GameCore::TurnState a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_9C6A4202BD49F547_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BDF6FC06516C975B(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_BDF6FC06516C975B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A8BDFA0D4DF05A96(::RPG::GameCore::GameEntity* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_A8BDFA0D4DF05A96_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_12F2F30AA607700B(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::System::Byte a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::System::String*, ::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_12F2F30AA607700B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_4921FEDA99EFAB05(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_4921FEDA99EFAB05_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AFE15EB4CFBCD8D3(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::Byte a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_AFE15EB4CFBCD8D3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0D87E7AD42435A1D(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_0D87E7AD42435A1D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_79D8F58393184EAE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_79D8F58393184EAE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_3C111959D3BB5616(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C111959D3BB5616_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_158DDEF2BDDB23FA_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_158DDEF2BDDB23FA_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C111959D3BB5616_2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_A88CDF038776FAA5(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_A88CDF038776FAA5_OFFSET))(a1);
	}

	static ::System::Void Method_1_E54BDAC1DE7B950E(::Class_0_16E4307DCC419505_356* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::GameEntity* a5, ::RPG::GameCore::GameEntity* a6)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_356*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_E54BDAC1DE7B950E_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_A8BDFA0D4DF05A96_1(::RPG::GameCore::GameEntity* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_A8BDFA0D4DF05A96_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_76B73AF189282465(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_76B73AF189282465_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8657C62DB172F375(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_8657C62DB172F375_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8657C62DB172F375_1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_8657C62DB172F375_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B55327F2B1D9F668(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_OFFSET))(a1);
	}

	static ::System::Void Method_1_43EB35212D1A55A8_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_B2DC796212A64DBE(::RPG::GameCore::TurnState a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B2DC796212A64DBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D1E92CE8815DB85(::RPG::GameCore::TurnState a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_1D1E92CE8815DB85_OFFSET))(a1);
	}

	static ::System::Void Method_1_438126F0AC127E39(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_438126F0AC127E39_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AD851080DF060FF0(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_AD851080DF060FF0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2D88E3127D5FA483(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_2D88E3127D5FA483_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_86DE64A6C2CCC02D(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_86DE64A6C2CCC02D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_31033CDCFDBD2556_2(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_31033CDCFDBD2556_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_8D499215905103F3(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_8D499215905103F3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_35A0BD556D6BF954(::Class_0_16E4307DCC419505_356* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_356*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_35A0BD556D6BF954_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8D499215905103F3_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_8D499215905103F3_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3C8592D0EE605757(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3C8592D0EE605757_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C8592D0EE605757_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3C8592D0EE605757_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_478A47F7ED86FD83(::System::String* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_478A47F7ED86FD83_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B3AE3C1FD9D54995(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B3AE3C1FD9D54995_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3645A4E736D48F30(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3645A4E736D48F30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_95DEEC393C4C0BF7(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_95DEEC393C4C0BF7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_95DEEC393C4C0BF7_1(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_95DEEC393C4C0BF7_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_95DEEC393C4C0BF7_2(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_95DEEC393C4C0BF7_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B571F95255C25AB8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B571F95255C25AB8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B571F95255C25AB8_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B571F95255C25AB8_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F0E31A4D53DB6DC4(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_F0E31A4D53DB6DC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_81BD8966CB494E69(::RPG::GameCore::TaskContext* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_81BD8966CB494E69_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_84ABFF4369ABABA8(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_84ABFF4369ABABA8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_43EB35212D1A55A8_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_43EB35212D1A55A8_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_3_OFFSET))(a1);
	}

	static ::System::Void Method_1_43EB35212D1A55A8_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_4_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_4BEA6AF2E9152F68(::System::Int32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::System::Int32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_4BEA6AF2E9152F68_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3645A4E736D48F30_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3645A4E736D48F30_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3BBDC5EE96CDED90(::RPG::GameCore::TaskContext* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3BBDC5EE96CDED90_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_749948B663FCCCEF_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_749948B663FCCCEF_2_OFFSET))();
	}

	static ::System::Void Method_1_3C111959D3BB5616_3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_3_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_3(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_3_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_4_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_5(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_5_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_6(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_6_OFFSET))(a1);
	}

	static ::System::Void Method_1_E39B4279BF06EB37()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_E39B4279BF06EB37_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_932BC234D35144E8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_932BC234D35144E8_OFFSET))();
	}

	static ::Google::Protobuf::ByteString* Method_1_4F2FF4C9310A0F53()
	{
		return ((::Google::Protobuf::ByteString*(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_4F2FF4C9310A0F53_OFFSET))();
	}

	static ::System::Void Method_1_0F40033028C887AE(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_0F40033028C887AE_OFFSET))(a1);
	}

	static ::System::Void Method_1_B27C7FF7B4D36EB3(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B27C7FF7B4D36EB3_OFFSET))(a1);
	}

	static ::System::Void Method_1_D3423CC2A44F3625(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_D3423CC2A44F3625_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B27C7FF7B4D36EB3_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_B27C7FF7B4D36EB3_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_A3A311326D005F67(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_A3A311326D005F67_OFFSET))(a1);
	}

	static ::System::String* Method_1_78A1456A6DBF4558(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_78A1456A6DBF4558_OFFSET))(a1);
	}

	static ::System::Void Method_1_E0C1EEE779E3ED8A(::Class_1_7A22A3DBEEDD1F80* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_E0C1EEE779E3ED8A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43B9626D1ABEA7B1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_43B9626D1ABEA7B1_OFFSET))(a1, a2);
	}

	static ::Class_1_6A1DFE1822B872F8* Method_1_ACEE40394550C74A(::RPG::GameCore::LogSamplerType a1)
	{
		return ((::Class_1_6A1DFE1822B872F8*(*)(::RPG::GameCore::LogSamplerType))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_ACEE40394550C74A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::UInt64 Method_1_966EDE07FE271747()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_966EDE07FE271747_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::String* Method_1_16A88F7DE6D13900(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_16A88F7DE6D13900_OFFSET))(a1);
	}

	static ::System::String* Method_1_CF1F51BB8D8D7B68(::Class_0_16E4307DCC419505_358* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_CF1F51BB8D8D7B68_OFFSET))(a1);
	}

	static ::System::String* Method_1_59D09FABE6B59443(::Class_0_16E4307DCC419505_356* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_356*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_59D09FABE6B59443_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_631D2F9F05C7B729(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_631D2F9F05C7B729_OFFSET))(a1);
	}
};
