#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C.h"
#include "unitysdk/System/Object.h"

class Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C;
namespace MoleMole { class ConfigDownloader; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class ManualResetEvent; }

#define CLASS_1_9B1573C48BB491FD_ADDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x10D15D80)
#define CLASS_1_9B1573C48BB491FD_CLOSE_OFFSET UNITYSDK_OFFSET(0x10D16B70)
#define CLASS_1_9B1573C48BB491FD_GETTOTALDOWNLOADEDSIZE_OFFSET UNITYSDK_OFFSET(0x10D169D0)
#define CLASS_1_9B1573C48BB491FD_GETTOTALDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x10D16A90)
#define CLASS_1_9B1573C48BB491FD_GETTOTALNEEDDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x10D16FA0)
#define CLASS_1_9B1573C48BB491FD_GET_ISENABLEVERIFIER_OFFSET UNITYSDK_OFFSET(0x10D15D60)
#define CLASS_1_9B1573C48BB491FD_GET_ISSHOWALIVEKEEPER_OFFSET UNITYSDK_OFFSET(0x10D15D40)
#define CLASS_1_9B1573C48BB491FD_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x10D15B20)
#define CLASS_1_9B1573C48BB491FD_GET_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x10D15B00)
#define CLASS_1_9B1573C48BB491FD_GET_ONUPDATEDELTA_OFFSET UNITYSDK_OFFSET(0x10D15AE0)
#define CLASS_1_9B1573C48BB491FD_GET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10D15AC0)
#define CLASS_1_9B1573C48BB491FD_GET_ONWEBRESPONSE_OFFSET UNITYSDK_OFFSET(0x10D15AA0)
#define CLASS_1_9B1573C48BB491FD_ISDONE_OFFSET UNITYSDK_OFFSET(0x10D16EF0)
#define CLASS_1_9B1573C48BB491FD_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x10D16F50)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_0F2122513F9EAC21_OFFSET UNITYSDK_OFFSET(0x10D17150)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_16FB233A057EAA95_OFFSET UNITYSDK_OFFSET(0x10D18670)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_26EDB267E37FAB3C_OFFSET UNITYSDK_OFFSET(0x10D17FA0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x10D18ED0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_36F0C0302DBA2CE4_OFFSET UNITYSDK_OFFSET(0x10D18C50)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_39FFE99F2DCEB398_OFFSET UNITYSDK_OFFSET(0x10D174F0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_3AC8F91835D61B3F_OFFSET UNITYSDK_OFFSET(0x10D15F00)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x10D174A0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x10D16290)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_58D830BED947ACCC_OFFSET UNITYSDK_OFFSET(0x10D17610)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_6A521C35B3EF553F_OFFSET UNITYSDK_OFFSET(0x10D17370)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_6B5EA38BAE5646C2_OFFSET UNITYSDK_OFFSET(0x10D17280)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_70BBBEA481107523_OFFSET UNITYSDK_OFFSET(0x10D1ABB0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_8A87B4D6FB7FDD03_OFFSET UNITYSDK_OFFSET(0x10D18EE0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_906C7A2F4FE684C4_OFFSET UNITYSDK_OFFSET(0x10D17770)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_9500614C417C9194_OFFSET UNITYSDK_OFFSET(0x10D1A680)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10D17410)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_9B81597B4B113C3D_1_OFFSET UNITYSDK_OFFSET(0x10D1AA40)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_9B81597B4B113C3D_OFFSET UNITYSDK_OFFSET(0x10D17500)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x10D1AB60)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_A5B6063FFC26FC8F_1_OFFSET UNITYSDK_OFFSET(0x10D18990)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x10D1A780)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_A93B7CD3768E295E_OFFSET UNITYSDK_OFFSET(0x10D18EB0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x10D18EC0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_AD0F9D7AB7E793D8_OFFSET UNITYSDK_OFFSET(0x10D17EE0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_AD3BA6426D34368E_OFFSET UNITYSDK_OFFSET(0x10D19230)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_AF16C96C0D113C49_OFFSET UNITYSDK_OFFSET(0x10D17020)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10D16E40)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_B283605EECB8DCF3_OFFSET UNITYSDK_OFFSET(0x10D1A4D0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x10D174C0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x10D17400)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C2B24D724C7D351B_OFFSET UNITYSDK_OFFSET(0x10D1ABC0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x10D174E0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10D17490)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x10D174B0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x10D1A660)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x10D1A670)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0x10D1AB50)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x10D17140)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_D03F13E5EC3F80DD_OFFSET UNITYSDK_OFFSET(0x10D174D0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10D16150)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_D3B9FBAF07067BAD_OFFSET UNITYSDK_OFFSET(0x10D18080)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0x10D16980)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x10D181D0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_EE5D71FBB4261BF2_OFFSET UNITYSDK_OFFSET(0x10D1A750)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x10D17010)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x10D1A650)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x10D1A760)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x10D1A770)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10D17000)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_F0B1C7F469B30FE7_OFFSET UNITYSDK_OFFSET(0x10D18770)
#define CLASS_1_9B1573C48BB491FD_PAUSE_OFFSET UNITYSDK_OFFSET(0x10D16CD0)
#define CLASS_1_9B1573C48BB491FD_SET_ISENABLEVERIFIER_OFFSET UNITYSDK_OFFSET(0x10D15D70)
#define CLASS_1_9B1573C48BB491FD_SET_ISSHOWALIVEKEEPER_OFFSET UNITYSDK_OFFSET(0x10D15D50)
#define CLASS_1_9B1573C48BB491FD_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x10D15B30)
#define CLASS_1_9B1573C48BB491FD_SET_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x10D15B10)
#define CLASS_1_9B1573C48BB491FD_SET_ONUPDATEDELTA_OFFSET UNITYSDK_OFFSET(0x10D15AF0)
#define CLASS_1_9B1573C48BB491FD_SET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10D15AD0)
#define CLASS_1_9B1573C48BB491FD_SET_ONWEBRESPONSE_OFFSET UNITYSDK_OFFSET(0x10D15AB0)
#define CLASS_1_9B1573C48BB491FD_START_OFFSET UNITYSDK_OFFSET(0x10D15F90)
#define CLASS_1_9B1573C48BB491FD_UNPAUSE_OFFSET UNITYSDK_OFFSET(0x10D16D80)
#define CLASS_1_9B1573C48BB491FD_UPDATE_OFFSET UNITYSDK_OFFSET(0x10D16660)
#define CLASS_1_9B1573C48BB491FD__CTOR_OFFSET UNITYSDK_OFFSET(0x10D15B40)

inline static constexpr unsigned int Class_1_9B1573C48BB491FD_TypeDefinitionIndex = 86309;

class Class_1_9B1573C48BB491FD : public ::System::Object
{
public:
	// static const ::System::String* Field_1_27; // 0x0
	::System::Collections::Generic::Queue_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_28; // 0x10
	::System::Action_2<::System::Single, ::System::Int64>* Field_1_19; // 0x18
	::System::Action_1<::System::Int64>* Field_1_18; // 0x20
	::System::Threading::ManualResetEvent* Field_1_34; // 0x28
	::System::Action_1<::System::Boolean>* Field_1_20; // 0x30
	::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>* Field_1_17; // 0x38
	::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_4; // 0x40
	::System::Collections::Generic::Queue_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_35; // 0x48
	::System::Action_4<::System::Int64, ::System::Int64, ::System::Single, ::System::Single>* Field_1_12; // 0x50
	::System::Action_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_23; // 0x58
	::System::Action_2<::System::String*, ::System::Boolean>* Field_1_13; // 0x60
	::System::Action_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_21; // 0x68
	::System::Action_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_22; // 0x70
	::System::Action_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_16; // 0x78
	::System::Exception* Field_1_8; // 0x80
	::System::Collections::Generic::Queue_1<::System::Single>* Field_1_29; // 0x88
	::System::Int32 Field_1_38; // 0x90
	::System::Int32 Field_1_33; // 0x94
	::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46 Field_1_10; // 0x98
	::System::Int32 Field_1_43; // 0x9C
	::System::Int64 Field_1_24; // 0xA0
	::System::Boolean Field_1_6; // 0xA8
	::System::Boolean Field_1_5; // 0xA9
	::System::Boolean Field_1_40; // 0xAA
	::System::Single Field_1_30; // 0xAC
	::System::Int32 Field_1_9; // 0xB0
	::System::Int32 Field_1_39; // 0xB4
	::System::Int64 Field_1_25; // 0xB8
	::System::Boolean Field_1_14; // 0xC0
	::System::Boolean Field_1_15; // 0xC1
	::System::Boolean Field_1_41; // 0xC2
	::System::Boolean Field_1_7; // 0xC3
	::System::Single Field_1_42; // 0xC4
	::System::Int64 Field_1_26; // 0xC8
	::System::Int32 Field_1_32; // 0xD0
	::System::Single Field_1_31; // 0xD4
	::Enum_3_0A3761FE34514D6C Field_1_0; // 0xD8
	::System::Int32 Field_1_37; // 0xDC
	::System::Int32 Field_1_11; // 0xE0
	::System::Int32 Field_1_36; // 0xE4

	::System::Void _ctor(::System::Int32 a1, ::MoleMole::ConfigDownloader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ConfigDownloader*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Action_2<::System::String*, ::System::Boolean>* get_onWebResponse()
	{
		return ((::System::Action_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ONWEBRESPONSE_OFFSET))(this);
	}

	::System::Void set_onWebResponse(::System::Action_2<::System::String*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ONWEBRESPONSE_OFFSET))(this, a1);
	}

	::System::Action_4<::System::Int64, ::System::Int64, ::System::Single, ::System::Single>* get_onUpdate()
	{
		return ((::System::Action_4<::System::Int64, ::System::Int64, ::System::Single, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ONUPDATE_OFFSET))(this);
	}

	::System::Void set_onUpdate(::System::Action_4<::System::Int64, ::System::Int64, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_4<::System::Int64, ::System::Int64, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ONUPDATE_OFFSET))(this, a1);
	}

	::System::Action_2<::System::Single, ::System::Int64>* get_onUpdateDelta()
	{
		return ((::System::Action_2<::System::Single, ::System::Int64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ONUPDATEDELTA_OFFSET))(this);
	}

	::System::Void set_onUpdateDelta(::System::Action_2<::System::Single, ::System::Int64>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Single, ::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ONUPDATEDELTA_OFFSET))(this, a1);
	}

	::System::Action_1<::System::Int64>* get_onFinished()
	{
		return ((::System::Action_1<::System::Int64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ONFINISHED_OFFSET))(this);
	}

	::System::Void set_onFinished(::System::Action_1<::System::Int64>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ONFINISHED_OFFSET))(this, a1);
	}

	::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>* get_onFailed()
	{
		return ((::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_onFailed(::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ONFAILED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsShowAliveKeeper()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ISSHOWALIVEKEEPER_OFFSET))(this);
	}

	::System::Void set_IsShowAliveKeeper(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ISSHOWALIVEKEEPER_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEnableVerifier()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ISENABLEVERIFIER_OFFSET))(this);
	}

	::System::Void set_IsEnableVerifier(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ISENABLEVERIFIER_OFFSET))(this, a1);
	}

	::System::Void AddDownload(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int64 a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int64, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_ADDDOWNLOAD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_UPDATE_OFFSET))(this);
	}

	::System::Void Close()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_CLOSE_OFFSET))(this);
	}

	::System::Void Pause()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_PAUSE_OFFSET))(this);
	}

	::System::Void UnPause()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_UNPAUSE_OFFSET))(this);
	}

	::System::Boolean IsDone()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_ISDONE_OFFSET))(this);
	}

	::System::Boolean IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_ISFINISHED_OFFSET))(this);
	}

	::System::Int64 GetTotalDownloadSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GETTOTALDOWNLOADSIZE_OFFSET))(this);
	}

	::System::Int64 GetTotalDownloadedSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GETTOTALDOWNLOADEDSIZE_OFFSET))(this);
	}

	::System::Int64 GetTotalNeedDownloadSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GETTOTALNEEDDOWNLOADSIZE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::String* Method_1_AF16C96C0D113C49(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_AF16C96C0D113C49_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Single Method_1_0F2122513F9EAC21()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_0F2122513F9EAC21_OFFSET))(this);
	}

	::System::Single Method_1_6B5EA38BAE5646C2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_6B5EA38BAE5646C2_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::String* Method_1_6A521C35B3EF553F(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_6A521C35B3EF553F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int64 Method_1_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_D66F211912D83957_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D03F13E5EC3F80DD(::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_D03F13E5EC3F80DD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Exception* Method_1_39FFE99F2DCEB398()
	{
		return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_39FFE99F2DCEB398_OFFSET))(this);
	}

	::System::Int64 Method_1_9B81597B4B113C3D()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_9B81597B4B113C3D_OFFSET))(this);
	}

	::System::Void Method_1_58D830BED947ACCC(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_58D830BED947ACCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_906C7A2F4FE684C4(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_906C7A2F4FE684C4_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_D3B9FBAF07067BAD(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_D3B9FBAF07067BAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_36F0C0302DBA2CE4(::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_36F0C0302DBA2CE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A93B7CD3768E295E(::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_A93B7CD3768E295E_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_8A87B4D6FB7FDD03(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_8A87B4D6FB7FDD03_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_B283605EECB8DCF3(::System::Exception* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_B283605EECB8DCF3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_16FB233A057EAA95(::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46 a1, ::System::Int32 a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46, ::System::Int32, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_16FB233A057EAA95_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD3BA6426D34368E(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_AD3BA6426D34368E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Method_1_EE5D71FBB4261BF2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_EE5D71FBB4261BF2_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_9500614C417C9194(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_9500614C417C9194_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Int32 Method_1_AD0F9D7AB7E793D8(::System::Exception* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_AD0F9D7AB7E793D8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_1_3AC8F91835D61B3F(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_3AC8F91835D61B3F_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_9B81597B4B113C3D_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_9B81597B4B113C3D_1_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_70BBBEA481107523(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_70BBBEA481107523_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5B6063FFC26FC8F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_A5B6063FFC26FC8F_1_OFFSET))(this);
	}

	::System::Int64 Method_1_F0B1C7F469B30FE7(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Int64(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_F0B1C7F469B30FE7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_26EDB267E37FAB3C(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_26EDB267E37FAB3C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C2B24D724C7D351B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C2B24D724C7D351B_OFFSET))(this);
	}
};
