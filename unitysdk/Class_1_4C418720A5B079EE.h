#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4C418720A5B079EE_ConvinceState.h"
#include "unitysdk/RPG/Client/TalkConvinceTalkingSide.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ConvinceTrickSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_469A5FF005CF3F5C;
class Class_1_E6E7F06AF7486BD3;
namespace RPG::Client { class ConvinceConfig; }
namespace RPG::Client { class ConvinceTrickSkillGroup; }
namespace RPG::GameCore { class ConvinceInitialize; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace RPGTools::Timeline { class CameraShakeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_4C418720A5B079EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105D8FB0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_012635F874FB0120_OFFSET UNITYSDK_OFFSET(0x105D9E00)
#define CLASS_1_4C418720A5B079EE_METHOD_1_053CE3279F0130E4_OFFSET UNITYSDK_OFFSET(0x105D97F0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_0899A0ED00E4B85E_OFFSET UNITYSDK_OFFSET(0x105DC1B0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x105DB170)
#define CLASS_1_4C418720A5B079EE_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x105D9AB0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_235D058510899FEE_OFFSET UNITYSDK_OFFSET(0x105DBD70)
#define CLASS_1_4C418720A5B079EE_METHOD_1_260587A7D2464CC3_OFFSET UNITYSDK_OFFSET(0x105DB460)
#define CLASS_1_4C418720A5B079EE_METHOD_1_260F776C5DE0BF54_OFFSET UNITYSDK_OFFSET(0x105DB540)
#define CLASS_1_4C418720A5B079EE_METHOD_1_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x105DAF80)
#define CLASS_1_4C418720A5B079EE_METHOD_1_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x105DBD10)
#define CLASS_1_4C418720A5B079EE_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x105DAC70)
#define CLASS_1_4C418720A5B079EE_METHOD_1_4975BB0CE2B1559A_OFFSET UNITYSDK_OFFSET(0x105DA3B0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x105DBA70)
#define CLASS_1_4C418720A5B079EE_METHOD_1_59387A6A4FE132CC_OFFSET UNITYSDK_OFFSET(0x105DC2F0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_5B155239D69269F7_OFFSET UNITYSDK_OFFSET(0x105DC0C0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_5D6CD31BA2372F92_OFFSET UNITYSDK_OFFSET(0x105DA1E0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_69CC15F95D80B420_OFFSET UNITYSDK_OFFSET(0x105DC370)
#define CLASS_1_4C418720A5B079EE_METHOD_1_6C19D4BE6FF4BC99_OFFSET UNITYSDK_OFFSET(0x105D9720)
#define CLASS_1_4C418720A5B079EE_METHOD_1_72B5BB1310911F6A_OFFSET UNITYSDK_OFFSET(0x105DC280)
#define CLASS_1_4C418720A5B079EE_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x105DAD00)
#define CLASS_1_4C418720A5B079EE_METHOD_1_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x105D9D30)
#define CLASS_1_4C418720A5B079EE_METHOD_1_88E99A17C817F5C9_OFFSET UNITYSDK_OFFSET(0x105C7410)
#define CLASS_1_4C418720A5B079EE_METHOD_1_8DCF15AB7598259E_OFFSET UNITYSDK_OFFSET(0x105DB7B0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_8F32B859C6782463_OFFSET UNITYSDK_OFFSET(0x105DB2D0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x105DB3F0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_91B902E2F7112B2E_OFFSET UNITYSDK_OFFSET(0x105D9F70)
#define CLASS_1_4C418720A5B079EE_METHOD_1_9A46AC484AD81C57_OFFSET UNITYSDK_OFFSET(0x105DA660)
#define CLASS_1_4C418720A5B079EE_METHOD_1_A412EB7E0E3EEED5_OFFSET UNITYSDK_OFFSET(0x105DBB90)
#define CLASS_1_4C418720A5B079EE_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x105D9ED0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x105DB020)
#define CLASS_1_4C418720A5B079EE_METHOD_1_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0x105DBAD0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_B280CE45C98AD449_OFFSET UNITYSDK_OFFSET(0x105DA0E0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x105DA190)
#define CLASS_1_4C418720A5B079EE_METHOD_1_B841B6BC141F7AE8_OFFSET UNITYSDK_OFFSET(0x105DB070)
#define CLASS_1_4C418720A5B079EE_METHOD_1_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x105DBDF0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_BCA0AFC599FFC0E0_1_OFFSET UNITYSDK_OFFSET(0x105DB110)
#define CLASS_1_4C418720A5B079EE_METHOD_1_BCA0AFC599FFC0E0_OFFSET UNITYSDK_OFFSET(0x105D94C0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x105DC360)
#define CLASS_1_4C418720A5B079EE_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x105D9000)
#define CLASS_1_4C418720A5B079EE_METHOD_1_CB47EF435F4257BC_OFFSET UNITYSDK_OFFSET(0x105D8F20)
#define CLASS_1_4C418720A5B079EE_METHOD_1_D4BCC98D310B1E45_OFFSET UNITYSDK_OFFSET(0x105DB730)
#define CLASS_1_4C418720A5B079EE_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x105DC050)
#define CLASS_1_4C418720A5B079EE_METHOD_1_D8F4643E3DD4863D_OFFSET UNITYSDK_OFFSET(0x105DAD80)
#define CLASS_1_4C418720A5B079EE_METHOD_1_D970F4C66278E018_OFFSET UNITYSDK_OFFSET(0x105DC380)
#define CLASS_1_4C418720A5B079EE_METHOD_1_DAC952C593466294_OFFSET UNITYSDK_OFFSET(0x105DAEE0)
#define CLASS_1_4C418720A5B079EE_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x105D9560)
#define CLASS_1_4C418720A5B079EE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x105DC350)
#define CLASS_1_4C418720A5B079EE_METHOD_1_F3D8E729BEEF4D7D_OFFSET UNITYSDK_OFFSET(0x105DC240)
#define CLASS_1_4C418720A5B079EE_METHOD_1_F70A53FBF5F86D7B_OFFSET UNITYSDK_OFFSET(0x105DBE50)
#define CLASS_1_4C418720A5B079EE_TICK_OFFSET UNITYSDK_OFFSET(0x105D8E90)
#define CLASS_1_4C418720A5B079EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x105DDAC0)
#define CLASS_1_4C418720A5B079EE__CTOR_OFFSET UNITYSDK_OFFSET(0x105DDA40)

inline static constexpr unsigned int Class_1_4C418720A5B079EE_TypeDefinitionIndex = 49161;

class Class_1_4C418720A5B079EE : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_31()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C418720A5B079EE_TypeDefinitionIndex)->GetStaticField(0x1E6D0);
	}
	// static const ::System::Int32 Field_1_15 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x6; // 0x0
	// static const ::System::Single Field_1_20; // 0x0
	// static const ::System::Single Field_1_21; // 0x0
	// static const ::System::Single Field_1_22; // 0x0
	// static const ::System::String* Field_1_23; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::Int32 Field_1_25 = 0xFFFFFFFF; // 0x0
	// static const ::System::String* Field_1_29; // 0x0
	::RPG::GameCore::TaskContext* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_14; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_1_27; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::Client::TextID>* Field_1_9; // 0x28
	::System::Action* Field_1_2; // 0x30
	::RPG::GameCore::ConvinceInitialize* Field_1_0; // 0x38
	::Class_1_E6E7F06AF7486BD3* Field_1_6; // 0x40
	::RPG::Client::ConvinceTrickSkillGroup* Field_1_26; // 0x48
	::RPG::Client::ConvinceConfig* Field_1_28; // 0x50
	::System::String* Field_1_3; // 0x58
	::System::Int32 Field_1_18; // 0x60
	::System::Boolean Field_1_8; // 0x64
	::RPG::Client::TextID Field_1_12; // 0x68
	::System::Int32 Field_1_17; // 0x78
	::RPG::Client::TalkConvinceTalkingSide Field_1_13; // 0x7C
	::System::UInt32 Field_1_5; // 0x80
	::System::UInt32 Field_1_4; // 0x84
	::System::Int32 Field_1_19; // 0x88
	::RPG::Client::TextID Field_1_11; // 0x90
	::Class_1_4C418720A5B079EE_ConvinceState Field_1_7; // 0xA0
	::System::Int32 Field_1_30; // 0xA4
	::RPG::Client::TextID Field_1_10; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE__CCTOR_OFFSET))();
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB47EF435F4257BC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_CB47EF435F4257BC_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_1_053CE3279F0130E4(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_053CE3279F0130E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_012635F874FB0120(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_012635F874FB0120_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4975BB0CE2B1559A(::RPG::GameCore::ConvinceInitialize* a1, ::RPG::GameCore::TaskContext* a2, ::System::String* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceInitialize*, ::RPG::GameCore::TaskContext*, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_4975BB0CE2B1559A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9A46AC484AD81C57(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_9A46AC484AD81C57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Void Method_1_BCA0AFC599FFC0E0(::Class_1_4C418720A5B079EE_ConvinceState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C418720A5B079EE_ConvinceState))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_BCA0AFC599FFC0E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B841B6BC141F7AE8(::Class_1_4C418720A5B079EE_ConvinceState a1, ::Class_1_4C418720A5B079EE_ConvinceState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C418720A5B079EE_ConvinceState, ::Class_1_4C418720A5B079EE_ConvinceState))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_B841B6BC141F7AE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BCA0AFC599FFC0E0_1(::Class_1_4C418720A5B079EE_ConvinceState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C418720A5B079EE_ConvinceState))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_BCA0AFC599FFC0E0_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_1_6C19D4BE6FF4BC99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_6C19D4BE6FF4BC99_OFFSET))(this);
	}

	::System::Void Method_1_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_260587A7D2464CC3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_260587A7D2464CC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D6CD31BA2372F92()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_5D6CD31BA2372F92_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_8F32B859C6782463(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_8F32B859C6782463_OFFSET))(this, a1);
	}

	::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>* Method_1_DAC952C593466294()
	{
		return ((::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_DAC952C593466294_OFFSET))(this);
	}

	::System::Tuple_2<::System::Int32, ::System::Int32>* Method_1_D4BCC98D310B1E45()
	{
		return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_D4BCC98D310B1E45_OFFSET))(this);
	}

	::System::Void Method_1_B280CE45C98AD449(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_B280CE45C98AD449_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DCF15AB7598259E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_8DCF15AB7598259E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_1_AEA938E393CB58B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_AEA938E393CB58B0_OFFSET))(this, a1);
	}

	::System::Void Method_1_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_1_A412EB7E0E3EEED5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_A412EB7E0E3EEED5_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_91B902E2F7112B2E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_91B902E2F7112B2E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F70A53FBF5F86D7B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_F70A53FBF5F86D7B_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_235D058510899FEE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_235D058510899FEE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5B155239D69269F7(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_5B155239D69269F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_1_0899A0ED00E4B85E(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_0899A0ED00E4B85E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_88E99A17C817F5C9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_88E99A17C817F5C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_D8F4643E3DD4863D(::RPG::Client::TalkConvinceTalkingSide a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkConvinceTalkingSide))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_D8F4643E3DD4863D_OFFSET))(this, a1);
	}

	::RPG::Client::TalkConvinceTalkingSide Method_1_F3D8E729BEEF4D7D()
	{
		return ((::RPG::Client::TalkConvinceTalkingSide(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_F3D8E729BEEF4D7D_OFFSET))(this);
	}

	::RPGTools::Timeline::CameraShakeConfig* Method_1_72B5BB1310911F6A(::System::String* a1)
	{
		return ((::RPGTools::Timeline::CameraShakeConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_72B5BB1310911F6A_OFFSET))(this, a1);
	}

	::Class_1_469A5FF005CF3F5C* Method_1_59387A6A4FE132CC(::RPG::GameCore::VCameraShakeV2* a1)
	{
		return ((::Class_1_469A5FF005CF3F5C*(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_59387A6A4FE132CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_260F776C5DE0BF54(::RPG::GameCore::ConvinceTrickSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_260F776C5DE0BF54_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::Client::ConvinceTrickSkillGroup* Method_1_69CC15F95D80B420()
	{
		return ((::RPG::Client::ConvinceTrickSkillGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_69CC15F95D80B420_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_1_D970F4C66278E018()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C418720A5B079EE_METHOD_1_D970F4C66278E018_OFFSET))(this);
	}
};
