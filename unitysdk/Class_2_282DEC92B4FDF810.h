#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_151B93D9C4BBDCA4.h"
#include "unitysdk/Class_1_3DA1D1484278689C_ReceiveMode.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameClientNetMode.h"

class Class_0_16E4307DCC419505_30;
class Class_1_75C90E178B164D38;
class Class_3_C66DEDBB208C643C;
class Class_3_C96CADB16834C680;
namespace Google::Protobuf { class ByteString; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_282DEC92B4FDF810_GET_CLIENTPREDICATETIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x9529010)
#define CLASS_2_282DEC92B4FDF810_GET_CLIENTREPLAYTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x9529030)
#define CLASS_2_282DEC92B4FDF810_GET_ISPAUSEREPLAY_OFFSET UNITYSDK_OFFSET(0x9529050)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_02DC14AEDD53F663_OFFSET UNITYSDK_OFFSET(0x9528160)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x9528DD0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x9527F60)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_2F5AC4358F4D89A9_OFFSET UNITYSDK_OFFSET(0x9528FF0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_3C029C534AE1FB6B_OFFSET UNITYSDK_OFFSET(0x95288B0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x95285C0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_4E84FD21E7EECC5B_OFFSET UNITYSDK_OFFSET(0x9528470)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_8F4CDE31FF46216D_1_OFFSET UNITYSDK_OFFSET(0x9528CF0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_8F4CDE31FF46216D_OFFSET UNITYSDK_OFFSET(0x9528C10)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_9407410AABC43F0E_OFFSET UNITYSDK_OFFSET(0x9529000)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x95278C0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x95282B0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_F239777256F9BA8F_1_OFFSET UNITYSDK_OFFSET(0x9529080)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x9529070)
#define CLASS_2_282DEC92B4FDF810_SET_CLIENTPREDICATETIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x9529020)
#define CLASS_2_282DEC92B4FDF810_SET_CLIENTREPLAYTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x9529040)
#define CLASS_2_282DEC92B4FDF810_SET_ISPAUSEREPLAY_OFFSET UNITYSDK_OFFSET(0x9529060)
#define CLASS_2_282DEC92B4FDF810__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x95286C0)
#define CLASS_2_282DEC92B4FDF810__CTOR_OFFSET UNITYSDK_OFFSET(0x9529090)
#define CLASS_2_282DEC92B4FDF810__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x9528B10)
#define CLASS_2_282DEC92B4FDF810__ONINIT_OFFSET UNITYSDK_OFFSET(0x9527900)
#define CLASS_2_282DEC92B4FDF810__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9528700)
#define CLASS_2_282DEC92B4FDF810__ONSTART_OFFSET UNITYSDK_OFFSET(0x9527B00)
#define CLASS_2_282DEC92B4FDF810__ONTICK_OFFSET UNITYSDK_OFFSET(0x9527C20)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9529310)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x9529240)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0x9529170)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9529380)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONSTART_OFFSET UNITYSDK_OFFSET(0x95291E0)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x95292A0)

inline static constexpr unsigned int Class_2_282DEC92B4FDF810_TypeDefinitionIndex = 55847;

class Class_2_282DEC92B4FDF810 : public ::Class_1_151B93D9C4BBDCA4
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_12; // 0x78
	::Class_3_C96CADB16834C680* Field_2_9; // 0x80
	::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* Field_2_0; // 0x88
	::System::Action* Field_2_2; // 0x90
	::Class_3_C66DEDBB208C643C* Field_2_8; // 0x98
	::Class_0_16E4307DCC419505_30* Field_2_10; // 0xA0
	::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* Field_2_1; // 0xA8
	::System::UInt64 _ClientReplayTimeStampMs_k__BackingField; // 0xB0
	::System::Boolean _IsPauseReplay_k__BackingField; // 0xB8
	::System::Boolean Field_2_6; // 0xB9
	::RPG::Client::LittleGameShare::LittleGameClientNetMode Field_2_7; // 0xBA
	::Class_1_3DA1D1484278689C_ReceiveMode Field_2_11; // 0xBC
	::System::UInt32 Field_2_15; // 0xC0
	::System::UInt32 Field_2_13; // 0xC4
	::System::UInt32 Field_2_14; // 0xC8
	::System::UInt64 _ClientPredicateTimeStampMs_k__BackingField; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnInit(::Class_1_75C90E178B164D38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__ONINIT_OFFSET))(this, a1);
	}

	::System::Void _OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__ONSTART_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__ONTICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4E84FD21E7EECC5B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_4E84FD21E7EECC5B_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Boolean _CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C029C534AE1FB6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_3C029C534AE1FB6B_OFFSET))(this);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_8F4CDE31FF46216D(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_8F4CDE31FF46216D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8F4CDE31FF46216D_1(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_8F4CDE31FF46216D_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::LittleGameClientNetMode Method_2_2F5AC4358F4D89A9()
	{
		return ((::RPG::Client::LittleGameShare::LittleGameClientNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_2F5AC4358F4D89A9_OFFSET))(this);
	}

	::System::Void Method_2_9407410AABC43F0E(::RPG::Client::LittleGameShare::LittleGameClientNetMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameClientNetMode))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_9407410AABC43F0E_OFFSET))(this, a1);
	}

	::System::UInt64 Method_2_02DC14AEDD53F663()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_02DC14AEDD53F663_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt64 get_ClientPredicateTimeStampMs()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_GET_CLIENTPREDICATETIMESTAMPMS_OFFSET))(this);
	}

	::System::Void set_ClientPredicateTimeStampMs(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_SET_CLIENTPREDICATETIMESTAMPMS_OFFSET))(this, value);
	}

	::System::UInt64 get_ClientReplayTimeStampMs()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_GET_CLIENTREPLAYTIMESTAMPMS_OFFSET))(this);
	}

	::System::Void set_ClientReplayTimeStampMs(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_SET_CLIENTREPLAYTIMESTAMPMS_OFFSET))(this, value);
	}

	::System::Boolean get_IsPauseReplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_GET_ISPAUSEREPLAY_OFFSET))(this);
	}

	::System::Void set_IsPauseReplay(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_SET_ISPAUSEREPLAY_OFFSET))(this, value);
	}

	::Class_3_C66DEDBB208C643C* Method_2_F239777256F9BA8F()
	{
		return ((::Class_3_C66DEDBB208C643C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_F239777256F9BA8F_OFFSET))(this);
	}

	::Class_3_C96CADB16834C680* Method_2_F239777256F9BA8F_1()
	{
		return ((::Class_3_C96CADB16834C680*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_F239777256F9BA8F_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInit(::Class_1_75C90E178B164D38* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90E178B164D38*))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONINIT_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy__CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnLateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONLATEUPDATE_OFFSET))(this, P0);
	}
};
