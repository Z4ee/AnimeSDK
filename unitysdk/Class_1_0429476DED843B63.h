#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0429476DED843B63_ConvinceState.h"
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

#define CLASS_1_0429476DED843B63_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18EC9840)
#define CLASS_1_0429476DED843B63_METHOD_1_03380540BD508141_OFFSET UNITYSDK_OFFSET(0x18ECCDA0)
#define CLASS_1_0429476DED843B63_METHOD_1_05891E8E87C14559_OFFSET UNITYSDK_OFFSET(0x18ECC370)
#define CLASS_1_0429476DED843B63_METHOD_1_0601CA9867E1A0E0_OFFSET UNITYSDK_OFFSET(0x18ECCA90)
#define CLASS_1_0429476DED843B63_METHOD_1_0A5DD54A2675889F_OFFSET UNITYSDK_OFFSET(0x18EC97B0)
#define CLASS_1_0429476DED843B63_METHOD_1_0AFA90E4B45F47A7_OFFSET UNITYSDK_OFFSET(0x18ECBF80)
#define CLASS_1_0429476DED843B63_METHOD_1_19AB066C9CD92308_OFFSET UNITYSDK_OFFSET(0x18ECB820)
#define CLASS_1_0429476DED843B63_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x18ECA980)
#define CLASS_1_0429476DED843B63_METHOD_1_1B8C2E0E6B250730_OFFSET UNITYSDK_OFFSET(0x18ECABA0)
#define CLASS_1_0429476DED843B63_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x18ECA230)
#define CLASS_1_0429476DED843B63_METHOD_1_260587A7D2464CC3_OFFSET UNITYSDK_OFFSET(0x18ECBC10)
#define CLASS_1_0429476DED843B63_METHOD_1_2A5185680805E0E9_OFFSET UNITYSDK_OFFSET(0x18ECA5C0)
#define CLASS_1_0429476DED843B63_METHOD_1_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x18ECB730)
#define CLASS_1_0429476DED843B63_METHOD_1_3205930DFC799097_OFFSET UNITYSDK_OFFSET(0x18ECBA90)
#define CLASS_1_0429476DED843B63_METHOD_1_3AC94EEB348AAF2D_1_OFFSET UNITYSDK_OFFSET(0x18ECA9D0)
#define CLASS_1_0429476DED843B63_METHOD_1_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x18EC9F20)
#define CLASS_1_0429476DED843B63_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x18ECB400)
#define CLASS_1_0429476DED843B63_METHOD_1_48838CDCB359D9A4_OFFSET UNITYSDK_OFFSET(0x18ECC610)
#define CLASS_1_0429476DED843B63_METHOD_1_489B506CDCF48995_OFFSET UNITYSDK_OFFSET(0x18ECA030)
#define CLASS_1_0429476DED843B63_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x18ECA690)
#define CLASS_1_0429476DED843B63_METHOD_1_69CC15F95D80B420_OFFSET UNITYSDK_OFFSET(0x18ECCD90)
#define CLASS_1_0429476DED843B63_METHOD_1_70FCFB0CD184ECB9_OFFSET UNITYSDK_OFFSET(0x18ECA730)
#define CLASS_1_0429476DED843B63_METHOD_1_72B5BB1310911F6A_OFFSET UNITYSDK_OFFSET(0x18ECCCA0)
#define CLASS_1_0429476DED843B63_METHOD_1_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0x18ECA4B0)
#define CLASS_1_0429476DED843B63_METHOD_1_80C5A4DCD2D91940_OFFSET UNITYSDK_OFFSET(0x18ECBCF0)
#define CLASS_1_0429476DED843B63_METHOD_1_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x18ECBBA0)
#define CLASS_1_0429476DED843B63_METHOD_1_998258065BD82906_OFFSET UNITYSDK_OFFSET(0x18ECC990)
#define CLASS_1_0429476DED843B63_METHOD_1_9A46AC484AD81C57_OFFSET UNITYSDK_OFFSET(0x18ECAE80)
#define CLASS_1_0429476DED843B63_METHOD_1_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x18EC9890)
#define CLASS_1_0429476DED843B63_METHOD_1_9C73DA90A30983CE_OFFSET UNITYSDK_OFFSET(0x18ECC430)
#define CLASS_1_0429476DED843B63_METHOD_1_A0727F544AFBB0C5_OFFSET UNITYSDK_OFFSET(0x18ECC690)
#define CLASS_1_0429476DED843B63_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x18ECB7D0)
#define CLASS_1_0429476DED843B63_METHOD_1_AF41871495D26C35_OFFSET UNITYSDK_OFFSET(0x18ECA8D0)
#define CLASS_1_0429476DED843B63_METHOD_1_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x18ECB920)
#define CLASS_1_0429476DED843B63_METHOD_1_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x18ECB490)
#define CLASS_1_0429476DED843B63_METHOD_1_B9AA60CDBAC790D6_OFFSET UNITYSDK_OFFSET(0x18ECBEE0)
#define CLASS_1_0429476DED843B63_METHOD_1_BCA0AFC599FFC0E0_OFFSET UNITYSDK_OFFSET(0x18ECB8C0)
#define CLASS_1_0429476DED843B63_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18ECCD80)
#define CLASS_1_0429476DED843B63_METHOD_1_D4196F501CFA084B_OFFSET UNITYSDK_OFFSET(0x18ECCD10)
#define CLASS_1_0429476DED843B63_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x18ECC920)
#define CLASS_1_0429476DED843B63_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x18ECC310)
#define CLASS_1_0429476DED843B63_METHOD_1_DAC952C593466294_OFFSET UNITYSDK_OFFSET(0x18ECB690)
#define CLASS_1_0429476DED843B63_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x18EC9D60)
#define CLASS_1_0429476DED843B63_METHOD_1_E5CBFF352D0AA0A9_OFFSET UNITYSDK_OFFSET(0x18EC9CD0)
#define CLASS_1_0429476DED843B63_METHOD_1_E9BCC4C7DCC8C682_OFFSET UNITYSDK_OFFSET(0x18ECCB20)
#define CLASS_1_0429476DED843B63_METHOD_1_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0x18ECC5B0)
#define CLASS_1_0429476DED843B63_METHOD_1_EDAF753250338F11_OFFSET UNITYSDK_OFFSET(0x18ECB520)
#define CLASS_1_0429476DED843B63_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18ECCD70)
#define CLASS_1_0429476DED843B63_METHOD_1_F3D8E729BEEF4D7D_OFFSET UNITYSDK_OFFSET(0x18ECCC60)
#define CLASS_1_0429476DED843B63_METHOD_1_F7E4CF2BB55691F2_OFFSET UNITYSDK_OFFSET(0x18ECC6F0)
#define CLASS_1_0429476DED843B63_TICK_OFFSET UNITYSDK_OFFSET(0x18EC9720)
#define CLASS_1_0429476DED843B63__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ECDF10)
#define CLASS_1_0429476DED843B63__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECDE80)

inline static constexpr unsigned int Class_1_0429476DED843B63_TypeDefinitionIndex = 57960;

class Class_1_0429476DED843B63 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0429476DED843B63_TypeDefinitionIndex)->GetStaticField(0x35DB0);
	}
	// static const ::System::Int32 Field_1_1 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xFFFFFFFF; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_10; // 0x10
	::System::String* Field_1_11; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_1_12; // 0x20
	::RPG::GameCore::ConvinceInitialize* Field_1_13; // 0x28
	::System::Action* Field_1_14; // 0x30
	::RPG::Client::ConvinceTrickSkillGroup* Field_1_15; // 0x38
	::RPG::GameCore::TaskContext* Field_1_16; // 0x40
	::RPG::Client::ConvinceConfig* Field_1_17; // 0x48
	::Class_1_E6E7F06AF7486BD3* Field_1_18; // 0x50
	::System::Collections::Generic::HashSet_1<::RPG::Client::TextID>* Field_1_19; // 0x58
	::System::Int32 Field_1_20; // 0x60
	::System::UInt32 Field_1_21; // 0x64
	::System::UInt32 Field_1_22; // 0x68
	::System::Int32 Field_1_23; // 0x6C
	::RPG::Client::TalkConvinceTalkingSide Field_1_24; // 0x70
	::System::Int32 Field_1_25; // 0x74
	::Class_1_0429476DED843B63_ConvinceState Field_1_26; // 0x78
	::RPG::Client::TextID Field_1_27; // 0x80
	::RPG::Client::TextID Field_1_28; // 0x90
	::RPG::Client::TextID Field_1_29; // 0xA0
	::System::Boolean Field_1_30; // 0xB0
	::System::Int32 Field_1_31; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63__CCTOR_OFFSET))();
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A5DD54A2675889F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_0A5DD54A2675889F_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_1_489B506CDCF48995(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_489B506CDCF48995_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A5185680805E0E9(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_2A5185680805E0E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B8C2E0E6B250730(::RPG::GameCore::ConvinceInitialize* a1, ::RPG::GameCore::TaskContext* a2, ::System::String* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceInitialize*, ::RPG::GameCore::TaskContext*, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_1B8C2E0E6B250730_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9A46AC484AD81C57(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_9A46AC484AD81C57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_1_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_B799DB9989A18F1D_OFFSET))(this);
	}

	::System::Void Method_1_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Void Method_1_E5CBFF352D0AA0A9(::Class_1_0429476DED843B63_ConvinceState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0429476DED843B63_ConvinceState))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_E5CBFF352D0AA0A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_19AB066C9CD92308(::Class_1_0429476DED843B63_ConvinceState a1, ::Class_1_0429476DED843B63_ConvinceState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0429476DED843B63_ConvinceState, ::Class_1_0429476DED843B63_ConvinceState))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_19AB066C9CD92308_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BCA0AFC599FFC0E0(::Class_1_0429476DED843B63_ConvinceState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0429476DED843B63_ConvinceState))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_BCA0AFC599FFC0E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_7FD7D34994C88765_OFFSET))(this);
	}

	::System::Void Method_1_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Method_1_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Method_1_260587A7D2464CC3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_260587A7D2464CC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_3AC94EEB348AAF2D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_3AC94EEB348AAF2D_1_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_3205930DFC799097(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_3205930DFC799097_OFFSET))(this, a1);
	}

	::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>* Method_1_DAC952C593466294()
	{
		return ((::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_DAC952C593466294_OFFSET))(this);
	}

	::System::Tuple_2<::System::Int32, ::System::Int32>* Method_1_B9AA60CDBAC790D6()
	{
		return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_B9AA60CDBAC790D6_OFFSET))(this);
	}

	::System::Void Method_1_AF41871495D26C35(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_AF41871495D26C35_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AFA90E4B45F47A7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_0AFA90E4B45F47A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_1_05891E8E87C14559(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_05891E8E87C14559_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBAF10BBA97B82DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_EBAF10BBA97B82DD_OFFSET))(this);
	}

	::System::Void Method_1_9C73DA90A30983CE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_9C73DA90A30983CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_70FCFB0CD184ECB9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_70FCFB0CD184ECB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7E4CF2BB55691F2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_F7E4CF2BB55691F2_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_48838CDCB359D9A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_48838CDCB359D9A4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_998258065BD82906(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_998258065BD82906_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0727F544AFBB0C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_A0727F544AFBB0C5_OFFSET))(this);
	}

	::System::Void Method_1_0601CA9867E1A0E0(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_0601CA9867E1A0E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9BCC4C7DCC8C682(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_E9BCC4C7DCC8C682_OFFSET))(this, a1);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_EDAF753250338F11(::RPG::Client::TalkConvinceTalkingSide a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkConvinceTalkingSide))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_EDAF753250338F11_OFFSET))(this, a1);
	}

	::RPG::Client::TalkConvinceTalkingSide Method_1_F3D8E729BEEF4D7D()
	{
		return ((::RPG::Client::TalkConvinceTalkingSide(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_F3D8E729BEEF4D7D_OFFSET))(this);
	}

	::RPGTools::Timeline::CameraShakeConfig* Method_1_72B5BB1310911F6A(::System::String* a1)
	{
		return ((::RPGTools::Timeline::CameraShakeConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_72B5BB1310911F6A_OFFSET))(this, a1);
	}

	::Class_1_469A5FF005CF3F5C* Method_1_D4196F501CFA084B(::RPG::GameCore::VCameraShakeV2* a1)
	{
		return ((::Class_1_469A5FF005CF3F5C*(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_D4196F501CFA084B_OFFSET))(this, a1);
	}

	::System::Void Method_1_80C5A4DCD2D91940(::RPG::GameCore::ConvinceTrickSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_80C5A4DCD2D91940_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::Client::ConvinceTrickSkillGroup* Method_1_69CC15F95D80B420()
	{
		return ((::RPG::Client::ConvinceTrickSkillGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_69CC15F95D80B420_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_1_03380540BD508141()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0429476DED843B63_METHOD_1_03380540BD508141_OFFSET))(this);
	}
};
