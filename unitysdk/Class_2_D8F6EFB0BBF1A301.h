#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3DA1D1484278689C_ReceiveMode.h"
#include "unitysdk/Class_1_E0103A0EA6CD0F4C.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameClientNetMode.h"

class Class_0_16E4307DCC419505_38;
class Class_1_2375E47039821420;
class Class_1_4CD8A1ACD565F336;
class Class_3_49128057410E0DBC;
class Class_3_9F40BD36E5F30CAE;
namespace Google::Protobuf { class ByteString; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D8F6EFB0BBF1A301_GET_CLIENTPREDICATETIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1922C9F0)
#define CLASS_2_D8F6EFB0BBF1A301_GET_CLIENTREPLAYTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1922CA10)
#define CLASS_2_D8F6EFB0BBF1A301_GET_ISPAUSEREPLAY_OFFSET UNITYSDK_OFFSET(0x1922CA30)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_02DC14AEDD53F663_OFFSET UNITYSDK_OFFSET(0x1922B990)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x1922BCE0)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x1922C770)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_2F5AC4358F4D89A9_OFFSET UNITYSDK_OFFSET(0x1922C9D0)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x1922BE10)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x1922B750)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_9407410AABC43F0E_OFFSET UNITYSDK_OFFSET(0x1922C9E0)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_A7AE8381C96B12F1_1_OFFSET UNITYSDK_OFFSET(0x1922C6A0)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_A7AE8381C96B12F1_OFFSET UNITYSDK_OFFSET(0x1922C5D0)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1922AB70)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x1922C100)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_D30CC5B4F0E44E1B_OFFSET UNITYSDK_OFFSET(0x1922BAE0)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x1922BB40)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_F239777256F9BA8F_1_OFFSET UNITYSDK_OFFSET(0x1922CA60)
#define CLASS_2_D8F6EFB0BBF1A301_METHOD_2_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x1922CA50)
#define CLASS_2_D8F6EFB0BBF1A301_SET_CLIENTPREDICATETIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1922CA00)
#define CLASS_2_D8F6EFB0BBF1A301_SET_CLIENTREPLAYTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1922CA20)
#define CLASS_2_D8F6EFB0BBF1A301_SET_ISPAUSEREPLAY_OFFSET UNITYSDK_OFFSET(0x1922CA40)
#define CLASS_2_D8F6EFB0BBF1A301__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1922BF10)
#define CLASS_2_D8F6EFB0BBF1A301__CTOR_OFFSET UNITYSDK_OFFSET(0x1922CA70)
#define CLASS_2_D8F6EFB0BBF1A301__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1922C360)
#define CLASS_2_D8F6EFB0BBF1A301__ONINIT_OFFSET UNITYSDK_OFFSET(0x1922ABB0)
#define CLASS_2_D8F6EFB0BBF1A301__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1922BF50)
#define CLASS_2_D8F6EFB0BBF1A301__ONSTART_OFFSET UNITYSDK_OFFSET(0x1922AE70)
#define CLASS_2_D8F6EFB0BBF1A301__ONTICK_OFFSET UNITYSDK_OFFSET(0x1922B0A0)

inline static constexpr unsigned int Class_2_D8F6EFB0BBF1A301_TypeDefinitionIndex = 57848;

class Class_2_D8F6EFB0BBF1A301 : public ::Class_1_E0103A0EA6CD0F4C
{
public:
	::System::Action* Field_2_0; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x80
	::System::Action_1<::Class_1_2375E47039821420*>* Field_2_2; // 0x88
	::Class_3_49128057410E0DBC* Field_2_3; // 0x90
	::Class_0_16E4307DCC419505_38* Field_2_4; // 0x98
	::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* Field_2_5; // 0xA0
	::Class_3_9F40BD36E5F30CAE* Field_2_6; // 0xA8
	::System::UInt64 Field_2_7; // 0xB0
	::System::UInt64 _ClientReplayTimeStampMs_k__BackingField; // 0xB8
	::Class_1_3DA1D1484278689C_ReceiveMode Field_2_9; // 0xC0
	::System::UInt32 Field_2_10; // 0xC4
	::System::UInt64 _ClientPredicateTimeStampMs_k__BackingField; // 0xC8
	::System::Boolean _IsPauseReplay_k__BackingField; // 0xD0
	::RPG::Client::LittleGameShare::LittleGameClientNetMode Field_2_13; // 0xD1
	::System::Boolean Field_2_14; // 0xD2
	::System::UInt32 Field_2_15; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnInit(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301__ONINIT_OFFSET))(this, a1);
	}

	::System::Void _OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301__ONSTART_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301__ONTICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_0EB2899F45F512FE_OFFSET))(this);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::UInt64 Method_2_D30CC5B4F0E44E1B(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_D30CC5B4F0E44E1B_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301__ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_A7AE8381C96B12F1(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_1<::Class_1_2375E47039821420*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_1<::Class_1_2375E47039821420*>*))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_A7AE8381C96B12F1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A7AE8381C96B12F1_1(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_1<::Class_1_2375E47039821420*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_1<::Class_1_2375E47039821420*>*))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_A7AE8381C96B12F1_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::LittleGameClientNetMode Method_2_2F5AC4358F4D89A9()
	{
		return ((::RPG::Client::LittleGameShare::LittleGameClientNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_2F5AC4358F4D89A9_OFFSET))(this);
	}

	::System::Void Method_2_9407410AABC43F0E(::RPG::Client::LittleGameShare::LittleGameClientNetMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameClientNetMode))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_9407410AABC43F0E_OFFSET))(this, a1);
	}

	::System::UInt64 Method_2_02DC14AEDD53F663()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_02DC14AEDD53F663_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt64 get_ClientPredicateTimeStampMs()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_GET_CLIENTPREDICATETIMESTAMPMS_OFFSET))(this);
	}

	::System::Void set_ClientPredicateTimeStampMs(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_SET_CLIENTPREDICATETIMESTAMPMS_OFFSET))(this, a1);
	}

	::System::UInt64 get_ClientReplayTimeStampMs()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_GET_CLIENTREPLAYTIMESTAMPMS_OFFSET))(this);
	}

	::System::Void set_ClientReplayTimeStampMs(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_SET_CLIENTREPLAYTIMESTAMPMS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPauseReplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_GET_ISPAUSEREPLAY_OFFSET))(this);
	}

	::System::Void set_IsPauseReplay(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_SET_ISPAUSEREPLAY_OFFSET))(this, a1);
	}

	::Class_3_9F40BD36E5F30CAE* Method_2_F239777256F9BA8F()
	{
		return ((::Class_3_9F40BD36E5F30CAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_F239777256F9BA8F_OFFSET))(this);
	}

	::Class_3_49128057410E0DBC* Method_2_F239777256F9BA8F_1()
	{
		return ((::Class_3_49128057410E0DBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8F6EFB0BBF1A301_METHOD_2_F239777256F9BA8F_1_OFFSET))(this);
	}
};
