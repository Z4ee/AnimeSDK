#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_380;
class Class_0_16E4307DCC419505_382;
class Class_1_0FEB237AF044DA54;
class Class_1_7A22A3DBEEDD1F80;
namespace Google::Protobuf { class ByteString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_051DF7EE0B465B33_METHOD_1_0055E22907775622_OFFSET UNITYSDK_OFFSET(0x172138D0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_0BC3B5E76F5AA6FE_OFFSET UNITYSDK_OFFSET(0x1589C1C0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_0D87E7AD42435A1D_OFFSET UNITYSDK_OFFSET(0x17214410)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_0F40033028C887AE_OFFSET UNITYSDK_OFFSET(0x1589DB00)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_0FA01BAC945012AA_OFFSET UNITYSDK_OFFSET(0x1589CA00)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_12F2F30AA607700B_OFFSET UNITYSDK_OFFSET(0x17214080)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_16A88F7DE6D13900_OFFSET UNITYSDK_OFFSET(0x1589B320)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_1D1E92CE8815DB85_OFFSET UNITYSDK_OFFSET(0x1589B0F0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_2D88E3127D5FA483_OFFSET UNITYSDK_OFFSET(0x1589B4A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_35247481C8EFA7DB_1_OFFSET UNITYSDK_OFFSET(0x1589BF40)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_35247481C8EFA7DB_OFFSET UNITYSDK_OFFSET(0x1589BDE0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3645A4E736D48F30_1_OFFSET UNITYSDK_OFFSET(0x1589CFE0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3645A4E736D48F30_OFFSET UNITYSDK_OFFSET(0x1589C330)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3942BBCCBEFF93A0_1_OFFSET UNITYSDK_OFFSET(0x17213C60)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3942BBCCBEFF93A0_2_OFFSET UNITYSDK_OFFSET(0x1589B7A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3942BBCCBEFF93A0_OFFSET UNITYSDK_OFFSET(0x17213B60)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_1_OFFSET UNITYSDK_OFFSET(0x17214860)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_2_OFFSET UNITYSDK_OFFSET(0x17214AE0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_3_OFFSET UNITYSDK_OFFSET(0x1589D250)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0x17214750)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_438126F0AC127E39_OFFSET UNITYSDK_OFFSET(0x1589B1A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43B9626D1ABEA7B1_OFFSET UNITYSDK_OFFSET(0x1589E0E0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_1_OFFSET UNITYSDK_OFFSET(0x1589AF80)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_2_OFFSET UNITYSDK_OFFSET(0x1589CC40)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_3_OFFSET UNITYSDK_OFFSET(0x1589CCF0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_4_OFFSET UNITYSDK_OFFSET(0x1589CDA0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_OFFSET UNITYSDK_OFFSET(0x172136A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_4921FEDA99EFAB05_OFFSET UNITYSDK_OFFSET(0x172141E0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_4BEA6AF2E9152F68_OFFSET UNITYSDK_OFFSET(0x1589CF00)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_4D92CAACEA159BBF_1_OFFSET UNITYSDK_OFFSET(0x17213060)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_4D92CAACEA159BBF_OFFSET UNITYSDK_OFFSET(0x17212FB0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_4F2FF4C9310A0F53_OFFSET UNITYSDK_OFFSET(0x1589D940)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_4F5054FA4196367C_1_OFFSET UNITYSDK_OFFSET(0x17213220)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_4F5054FA4196367C_OFFSET UNITYSDK_OFFSET(0x17213110)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_59D09FABE6B59443_OFFSET UNITYSDK_OFFSET(0x1589BBC0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_631D2F9F05C7B729_OFFSET UNITYSDK_OFFSET(0x1589E320)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_67A670689035E9D6_OFFSET UNITYSDK_OFFSET(0x17213A80)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_6D554F489FE74143_1_OFFSET UNITYSDK_OFFSET(0x17214970)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_6D554F489FE74143_OFFSET UNITYSDK_OFFSET(0x172133F0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_6E83CA0CEE642853_1_OFFSET UNITYSDK_OFFSET(0x1589BC20)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_6E83CA0CEE642853_OFFSET UNITYSDK_OFFSET(0x1589B8A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_76B73AF189282465_OFFSET UNITYSDK_OFFSET(0x17214FD0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_78A1456A6DBF4558_OFFSET UNITYSDK_OFFSET(0x1589DF20)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_797A699EED121969_OFFSET UNITYSDK_OFFSET(0x17210B80)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_7A2477337EDAA9B7_OFFSET UNITYSDK_OFFSET(0x172145B0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_817E24AFC944DF99_OFFSET UNITYSDK_OFFSET(0x1589CB20)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_8657C62DB172F375_1_OFFSET UNITYSDK_OFFSET(0x1589AE10)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_8657C62DB172F375_OFFSET UNITYSDK_OFFSET(0x1589AC40)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_86DE64A6C2CCC02D_OFFSET UNITYSDK_OFFSET(0x1589B5C0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_8FCB36A1E588EE6A_OFFSET UNITYSDK_OFFSET(0x1589D0A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_932BC234D35144E8_OFFSET UNITYSDK_OFFSET(0x1589D860)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_95DEEC393C4C0BF7_1_OFFSET UNITYSDK_OFFSET(0x1589C4E0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_95DEEC393C4C0BF7_2_OFFSET UNITYSDK_OFFSET(0x1589C5D0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_95DEEC393C4C0BF7_OFFSET UNITYSDK_OFFSET(0x1589C3F0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_966EDE07FE271747_OFFSET UNITYSDK_OFFSET(0x1589E200)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_9C6A4202BD49F547_OFFSET UNITYSDK_OFFSET(0x17213D60)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_A3A311326D005F67_OFFSET UNITYSDK_OFFSET(0x1589DD30)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_A8BDFA0D4DF05A96_1_OFFSET UNITYSDK_OFFSET(0x17214EB0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_A8BDFA0D4DF05A96_OFFSET UNITYSDK_OFFSET(0x17213F60)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_ACEE40394550C74A_OFFSET UNITYSDK_OFFSET(0x1589AD00)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_AD41B3912BFEEE96_OFFSET UNITYSDK_OFFSET(0x1589BA60)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_AD851080DF060FF0_OFFSET UNITYSDK_OFFSET(0x1589B380)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_AFE15EB4CFBCD8D3_OFFSET UNITYSDK_OFFSET(0x172142F0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B2DC796212A64DBE_OFFSET UNITYSDK_OFFSET(0x1589B030)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_1_OFFSET UNITYSDK_OFFSET(0x1589B6F0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_2_OFFSET UNITYSDK_OFFSET(0x1589CE50)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_3_OFFSET UNITYSDK_OFFSET(0x1589D370)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_4_OFFSET UNITYSDK_OFFSET(0x1589D420)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_5_OFFSET UNITYSDK_OFFSET(0x1589D4D0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_6_OFFSET UNITYSDK_OFFSET(0x1589D580)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B55327F2B1D9F668_OFFSET UNITYSDK_OFFSET(0x1589AED0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B571F95255C25AB8_1_OFFSET UNITYSDK_OFFSET(0x1589C800)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_B571F95255C25AB8_OFFSET UNITYSDK_OFFSET(0x1589C6C0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_BDF6FC06516C975B_OFFSET UNITYSDK_OFFSET(0x17213E20)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_C15D3DC756EBDDA4_OFFSET UNITYSDK_OFFSET(0x17214BF0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_C31480916099843E_OFFSET UNITYSDK_OFFSET(0x17213330)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_C82282B9E7AF46CB_OFFSET UNITYSDK_OFFSET(0x1589DC60)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1589E1A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_CF1F51BB8D8D7B68_OFFSET UNITYSDK_OFFSET(0x1589E2B0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_CF54D1A276A16A63_1_OFFSET UNITYSDK_OFFSET(0x1589DCD0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_CF54D1A276A16A63_OFFSET UNITYSDK_OFFSET(0x1589DC00)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_E0C1EEE779E3ED8A_OFFSET UNITYSDK_OFFSET(0x1589E010)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_E39B4279BF06EB37_OFFSET UNITYSDK_OFFSET(0x1589D630)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_E54BDAC1DE7B950E_OFFSET UNITYSDK_OFFSET(0x17214CA0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0x17212E50)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_EE57E0826ECE83B6_OFFSET UNITYSDK_OFFSET(0x1589C0A0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1589E260)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1589E270)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F0E31A4D53DB6DC4_OFFSET UNITYSDK_OFFSET(0x1589C940)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F35A1BF4912F6AAE_OFFSET UNITYSDK_OFFSET(0x17213750)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F7300E87EC49A206_1_OFFSET UNITYSDK_OFFSET(0x17213600)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F7300E87EC49A206_2_OFFSET UNITYSDK_OFFSET(0x1589D1B0)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x17213560)
#define CLASS_1_051DF7EE0B465B33_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1589D7F0)
#define CLASS_1_051DF7EE0B465B33__CCTOR_OFFSET UNITYSDK_OFFSET(0x1589E390)

inline static constexpr unsigned int Class_1_051DF7EE0B465B33_TypeDefinitionIndex = 53568;

class Class_1_051DF7EE0B465B33 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_1_0FEB237AF044DA54*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_1_0FEB237AF044DA54*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x93C0);
	}
	static ::Class_1_7A22A3DBEEDD1F80** StaticGet_Field_1_1()
	{
		return (::Class_1_7A22A3DBEEDD1F80**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x93C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x93D0);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x3820);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x3824);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_051DF7EE0B465B33_TypeDefinitionIndex)->GetStaticField(0x3828);
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

	static ::Class_1_0FEB237AF044DA54* Method_1_E681B6D41E5607D0()
	{
		return ((::Class_1_0FEB237AF044DA54*(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_E681B6D41E5607D0_OFFSET))();
	}

	static ::System::Void Method_1_4D92CAACEA159BBF(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_4D92CAACEA159BBF_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D92CAACEA159BBF_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_4D92CAACEA159BBF_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_4F5054FA4196367C(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_4F5054FA4196367C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4F5054FA4196367C_1(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_4F5054FA4196367C_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C31480916099843E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_C31480916099843E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D554F489FE74143(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_6D554F489FE74143_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_F7300E87EC49A206_OFFSET))();
	}

	static ::System::Void Method_1_F7300E87EC49A206_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_F7300E87EC49A206_1_OFFSET))();
	}

	static ::System::Void Method_1_43EB35212D1A55A8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_43EB35212D1A55A8_OFFSET))(a1);
	}

	static ::System::Void Method_1_F35A1BF4912F6AAE(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_F35A1BF4912F6AAE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0055E22907775622(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Byte a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Byte, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_0055E22907775622_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_67A670689035E9D6(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_67A670689035E9D6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3942BBCCBEFF93A0(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3942BBCCBEFF93A0_OFFSET))(a1);
	}

	static ::System::Void Method_1_3942BBCCBEFF93A0_1(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3942BBCCBEFF93A0_1_OFFSET))(a1);
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

	static ::System::Void Method_1_7A2477337EDAA9B7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_7A2477337EDAA9B7_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_3C111959D3BB5616(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C111959D3BB5616_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_6D554F489FE74143_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_6D554F489FE74143_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3C111959D3BB5616_2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3C111959D3BB5616_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_C15D3DC756EBDDA4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_C15D3DC756EBDDA4_OFFSET))(a1);
	}

	static ::System::Void Method_1_E54BDAC1DE7B950E(::Class_0_16E4307DCC419505_380* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::GameEntity* a5, ::RPG::GameCore::GameEntity* a6)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_380*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_E54BDAC1DE7B950E_OFFSET))(a1, a2, a3, a4, a5, a6);
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

	static ::System::Void Method_1_3942BBCCBEFF93A0_2(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_3942BBCCBEFF93A0_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_6E83CA0CEE642853(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_6E83CA0CEE642853_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AD41B3912BFEEE96(::Class_0_16E4307DCC419505_380* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_380*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_AD41B3912BFEEE96_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E83CA0CEE642853_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_6E83CA0CEE642853_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_35247481C8EFA7DB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_35247481C8EFA7DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_35247481C8EFA7DB_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_35247481C8EFA7DB_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EE57E0826ECE83B6(::System::String* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_EE57E0826ECE83B6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0BC3B5E76F5AA6FE(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_0BC3B5E76F5AA6FE_OFFSET))(a1, a2, a3);
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

	static ::System::Void Method_1_0FA01BAC945012AA(::RPG::GameCore::TaskContext* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_0FA01BAC945012AA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_817E24AFC944DF99(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_817E24AFC944DF99_OFFSET))(a1, a2, a3);
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

	static ::System::Void Method_1_8FCB36A1E588EE6A(::RPG::GameCore::TaskContext* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_8FCB36A1E588EE6A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F7300E87EC49A206_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_F7300E87EC49A206_2_OFFSET))();
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

	static ::System::Void Method_1_CF54D1A276A16A63(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_CF54D1A276A16A63_OFFSET))(a1);
	}

	static ::System::Void Method_1_C82282B9E7AF46CB(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_C82282B9E7AF46CB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF54D1A276A16A63_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_CF54D1A276A16A63_1_OFFSET))(a1);
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

	static ::Class_1_0FEB237AF044DA54* Method_1_ACEE40394550C74A(::RPG::GameCore::LogSamplerType a1)
	{
		return ((::Class_1_0FEB237AF044DA54*(*)(::RPG::GameCore::LogSamplerType))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_ACEE40394550C74A_OFFSET))(a1);
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

	static ::System::String* Method_1_CF1F51BB8D8D7B68(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_CF1F51BB8D8D7B68_OFFSET))(a1);
	}

	static ::System::String* Method_1_59D09FABE6B59443(::Class_0_16E4307DCC419505_380* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_380*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_59D09FABE6B59443_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_631D2F9F05C7B729(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051DF7EE0B465B33_METHOD_1_631D2F9F05C7B729_OFFSET))(a1);
	}
};
