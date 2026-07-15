#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E3EC8A06BA0E94D6_Struct_2_BB5652B98DD9D8F8.h"
#include "unitysdk/Class_1_E3EC8A06BA0E94D6_Struct_2_BB5652B98DD9D8F8_1.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingEffectRemoveReason.h"
#include "unitysdk/System/Object.h"

class Class_1_AA3647312B318D6B;
class Class_1_D8354001CDC8D6DC;
class Class_1_E3EC8A06BA0E94D6_Class_1_13830412DB948710;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_08C9C0A8B14F560B_OFFSET UNITYSDK_OFFSET(0x15FC1410)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x15FC0A20)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_243D2795A92ED1E3_OFFSET UNITYSDK_OFFSET(0x15FC1250)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_55453D239C1B177E_OFFSET UNITYSDK_OFFSET(0x15FC0F60)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x15FC0A80)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_84F065DEC7C65871_OFFSET UNITYSDK_OFFSET(0x15FC1690)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_8B3CF8F3DEB29818_OFFSET UNITYSDK_OFFSET(0x15FC10C0)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_95D40074EC7C1AA6_OFFSET UNITYSDK_OFFSET(0x15FC0EA0)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x15FC1560)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_A7779A60D33081E8_OFFSET UNITYSDK_OFFSET(0x15FC1B90)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_BA58EC2C2F774FB9_OFFSET UNITYSDK_OFFSET(0x15FC1C80)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_CB026BE48D698998_OFFSET UNITYSDK_OFFSET(0x15FC0D70)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x15FC0A00)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_F6E2E8C63EE5720D_OFFSET UNITYSDK_OFFSET(0x15FC1720)
#define CLASS_1_E3EC8A06BA0E94D6_METHOD_1_FC06A50FF639EA07_OFFSET UNITYSDK_OFFSET(0x15FC18E0)
#define CLASS_1_E3EC8A06BA0E94D6__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC0690)

inline static constexpr unsigned int Class_1_E3EC8A06BA0E94D6_TypeDefinitionIndex = 73880;

class Class_1_E3EC8A06BA0E94D6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E3EC8A06BA0E94D6_Class_1_13830412DB948710*>* Field_1_0; // 0x10
	::System::Collections::Generic::Queue_1<::System::Single>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E3EC8A06BA0E94D6_Struct_2_BB5652B98DD9D8F8>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E3EC8A06BA0E94D6_Struct_2_BB5652B98DD9D8F8_1>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_6; // 0x40
	::Class_1_D8354001CDC8D6DC* Field_1_7; // 0x48
	::System::Int64 Field_1_8; // 0x50
	::System::Single Field_1_9; // 0x58
	::System::Int32 Field_1_10; // 0x5C
	::System::Int32 Field_1_11; // 0x60
	::System::Int32 Field_1_12; // 0x64
	::System::Int32 Field_1_13; // 0x68
	::System::Int64 Field_1_14; // 0x70
	::System::Int32 Field_1_15; // 0x78
	::System::Int32 Field_1_16; // 0x7C
	::System::Int64 Field_1_17; // 0x80
	::System::Int64 Field_1_18; // 0x88
	::System::Int32 Field_1_19; // 0x90
	::System::Int32 Field_1_20; // 0x94
	::System::Int64 Field_1_21; // 0x98
	::System::Single Field_1_22; // 0xA0
	::System::Int32 Field_1_23; // 0xA4
	::System::Int64 Field_1_24; // 0xA8

	::System::Void _ctor(::Class_1_D8354001CDC8D6DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8354001CDC8D6DC*))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_1_CB026BE48D698998(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_CB026BE48D698998_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8B3CF8F3DEB29818(::System::UInt32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_8B3CF8F3DEB29818_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_243D2795A92ED1E3(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_243D2795A92ED1E3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_84F065DEC7C65871(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_84F065DEC7C65871_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F6E2E8C63EE5720D(::System::UInt32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_F6E2E8C63EE5720D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_FC06A50FF639EA07(::System::UInt32 a1, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_FC06A50FF639EA07_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A7779A60D33081E8(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_A7779A60D33081E8_OFFSET))(this, a1, a2);
	}

	::Class_1_AA3647312B318D6B* Method_1_BA58EC2C2F774FB9(::System::Int32 a1)
	{
		return ((::Class_1_AA3647312B318D6B*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_BA58EC2C2F774FB9_OFFSET))(this, a1);
	}

	::Class_1_E3EC8A06BA0E94D6_Class_1_13830412DB948710* Method_1_55453D239C1B177E(::System::String* a1)
	{
		return ((::Class_1_E3EC8A06BA0E94D6_Class_1_13830412DB948710*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_55453D239C1B177E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_08C9C0A8B14F560B(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_08C9C0A8B14F560B_OFFSET))(a1, a2);
	}

	::System::Void Method_1_95D40074EC7C1AA6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_METHOD_1_95D40074EC7C1AA6_OFFSET))(this, a1);
	}
};
