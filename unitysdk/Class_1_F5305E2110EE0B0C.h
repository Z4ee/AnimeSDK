#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_70248E32F82D4889.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ENodeEffect.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ENodeType.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_19461BA1CD085490;
class Class_1_F1B93E9ABCA6C70F;
class Class_2_C2B0CD36FFC49CE8;
class Class_2_EC28E1D3A39EE7DE_15;
class Class_3_2CBAA1B7A86535B9;
namespace MoleMole { class UISimpleParkourNodeWidgetController; }

#define CLASS_1_F5305E2110EE0B0C_METHOD_1_09F11E387E2932A7_OFFSET UNITYSDK_OFFSET(0x159F7430)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_09F513285ED68164_OFFSET UNITYSDK_OFFSET(0x159F7340)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_0F893C10EA78B3F6_OFFSET UNITYSDK_OFFSET(0x159F6ED0)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_24BB8FC4536BDA11_OFFSET UNITYSDK_OFFSET(0x159F70C0)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_44E012A78A449268_OFFSET UNITYSDK_OFFSET(0x159F7C10)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_46D15E576F6BE8A2_OFFSET UNITYSDK_OFFSET(0x159F7BD0)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x159F7450)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x159F7360)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_56CC20959E92F36B_OFFSET UNITYSDK_OFFSET(0x159F7BF0)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_584FD94B60EF6345_OFFSET UNITYSDK_OFFSET(0x159F6930)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_6CD0896EB567C768_OFFSET UNITYSDK_OFFSET(0x159F7650)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_7331A1455F3F12A1_OFFSET UNITYSDK_OFFSET(0x159F7390)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_7FB6B7F702AB8651_OFFSET UNITYSDK_OFFSET(0x159F6E50)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_804C5269D8BA23A0_OFFSET UNITYSDK_OFFSET(0x159F75B0)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_81D14B16204A960F_OFFSET UNITYSDK_OFFSET(0x159F7330)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x159F7700)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_912676B4A11299FE_1_OFFSET UNITYSDK_OFFSET(0x159F6DE0)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_912676B4A11299FE_OFFSET UNITYSDK_OFFSET(0x159F6D70)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_98C4A6C9C107B9C3_OFFSET UNITYSDK_OFFSET(0x159F6600)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_A0986CE5C864837D_OFFSET UNITYSDK_OFFSET(0x159F7470)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_A977A1D96BC50369_OFFSET UNITYSDK_OFFSET(0x159F7660)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_AE6D44E5602930B4_OFFSET UNITYSDK_OFFSET(0x159F7920)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x159F7C00)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x159F7630)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x159F7460)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x159F7BE0)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x159F7380)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_DEDD31AF6F4E4818_OFFSET UNITYSDK_OFFSET(0x159F6C00)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_DF572AF1F7C6F4D7_OFFSET UNITYSDK_OFFSET(0x159F7440)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x159F7370)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x159F7640)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x159F7BC0)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x159F7350)
#define CLASS_1_F5305E2110EE0B0C_METHOD_1_FFECFA5ED1312EEC_OFFSET UNITYSDK_OFFSET(0x159F6CB0)
#define CLASS_1_F5305E2110EE0B0C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159F7320)
#define CLASS_1_F5305E2110EE0B0C__CTOR_OFFSET UNITYSDK_OFFSET(0x159F6530)

inline static constexpr unsigned int Class_1_F5305E2110EE0B0C_TypeDefinitionIndex = 72894;

class Class_1_F5305E2110EE0B0C : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5305E2110EE0B0C_TypeDefinitionIndex)->GetStaticField(0xA400);
	}
	::MoleMole::UISimpleParkourNodeWidgetController* Field_1_10; // 0x10
	::System::Boolean Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x19
	::System::Boolean Field_1_8; // 0x1A
	::MoleMole::MiniUIGame::SimpleParkour::ETrackType Field_1_3; // 0x1C
	::MoleMole::MiniUIGame::SimpleParkour::ENodeEffect Field_1_5; // 0x20
	::System::Single Field_1_2; // 0x24
	::System::Int32 Field_1_1; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Nullable_1<::Enum_3_70248E32F82D4889> Field_1_9; // 0x30
	::MoleMole::MiniUIGame::SimpleParkour::ENodeType Field_1_0; // 0x38

	::System::Void _ctor(::Class_1_F1B93E9ABCA6C70F* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1B93E9ABCA6C70F*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C__CCTOR_OFFSET))();
	}

	::System::Nullable_1<::Enum_3_70248E32F82D4889> Method_1_584FD94B60EF6345(::System::Single a1, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType a2, ::Class_1_19461BA1CD085490* a3, ::System::Boolean a4)
	{
		return ((::System::Nullable_1<::Enum_3_70248E32F82D4889>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::Class_1_19461BA1CD085490*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_584FD94B60EF6345_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::Enum_3_70248E32F82D4889> Method_1_FFECFA5ED1312EEC(::System::Single a1, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType a2, ::Class_1_19461BA1CD085490* a3, ::System::Boolean a4)
	{
		return ((::System::Nullable_1<::Enum_3_70248E32F82D4889>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::Class_1_19461BA1CD085490*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_FFECFA5ED1312EEC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::Enum_3_70248E32F82D4889> Method_1_912676B4A11299FE(::System::Single a1, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType a2, ::Class_2_C2B0CD36FFC49CE8* a3, ::System::Boolean a4)
	{
		return ((::System::Nullable_1<::Enum_3_70248E32F82D4889>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::Class_2_C2B0CD36FFC49CE8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_912676B4A11299FE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::Enum_3_70248E32F82D4889> Method_1_912676B4A11299FE_1(::System::Single a1, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType a2, ::Class_2_C2B0CD36FFC49CE8* a3, ::System::Boolean a4)
	{
		return ((::System::Nullable_1<::Enum_3_70248E32F82D4889>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::Class_2_C2B0CD36FFC49CE8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_912676B4A11299FE_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::Enum_3_70248E32F82D4889> Method_1_7FB6B7F702AB8651(::System::Single a1, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType a2, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType a3, ::Class_2_C2B0CD36FFC49CE8* a4, ::System::Boolean a5)
	{
		return ((::System::Nullable_1<::Enum_3_70248E32F82D4889>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::Class_2_C2B0CD36FFC49CE8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_7FB6B7F702AB8651_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_1_0F893C10EA78B3F6(::Enum_3_70248E32F82D4889 a1, ::Class_1_19461BA1CD085490* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Enum_3_70248E32F82D4889, ::Class_1_19461BA1CD085490*))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_0F893C10EA78B3F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_24BB8FC4536BDA11(::Class_3_2CBAA1B7A86535B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_2CBAA1B7A86535B9*))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_24BB8FC4536BDA11_OFFSET))(this, a1);
	}

	::System::Void Method_1_81D14B16204A960F(::MoleMole::MiniUIGame::SimpleParkour::ETrackType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_81D14B16204A960F_OFFSET))(this, a1);
	}

	::System::Void Method_1_09F513285ED68164(::MoleMole::MiniUIGame::SimpleParkour::ENodeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniUIGame::SimpleParkour::ENodeType))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_09F513285ED68164_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::Class_2_EC28E1D3A39EE7DE_15* Method_1_DEDD31AF6F4E4818()
	{
		return ((::Class_2_EC28E1D3A39EE7DE_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_DEDD31AF6F4E4818_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_98C4A6C9C107B9C3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_98C4A6C9C107B9C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_09F11E387E2932A7(::MoleMole::MiniUIGame::SimpleParkour::ENodeEffect a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniUIGame::SimpleParkour::ENodeEffect))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_09F11E387E2932A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF572AF1F7C6F4D7(::System::Nullable_1<::Enum_3_70248E32F82D4889> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Enum_3_70248E32F82D4889>))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_DF572AF1F7C6F4D7_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A0986CE5C864837D(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_A0986CE5C864837D_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Single Method_1_804C5269D8BA23A0(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_804C5269D8BA23A0_OFFSET))(a1, a2, a3);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::System::Single Method_1_7331A1455F3F12A1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_7331A1455F3F12A1_OFFSET))(a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::MoleMole::MiniUIGame::SimpleParkour::ENodeEffect Method_1_6CD0896EB567C768()
	{
		return ((::MoleMole::MiniUIGame::SimpleParkour::ENodeEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_6CD0896EB567C768_OFFSET))(this);
	}

	static ::System::Single Method_1_A977A1D96BC50369(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_A977A1D96BC50369_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_1_AE6D44E5602930B4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_AE6D44E5602930B4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Nullable_1<::Enum_3_70248E32F82D4889> Method_1_46D15E576F6BE8A2()
	{
		return ((::System::Nullable_1<::Enum_3_70248E32F82D4889>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_46D15E576F6BE8A2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::MoleMole::MiniUIGame::SimpleParkour::ENodeType Method_1_56CC20959E92F36B()
	{
		return ((::MoleMole::MiniUIGame::SimpleParkour::ENodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_56CC20959E92F36B_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::MoleMole::MiniUIGame::SimpleParkour::ETrackType Method_1_44E012A78A449268()
	{
		return ((::MoleMole::MiniUIGame::SimpleParkour::ETrackType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5305E2110EE0B0C_METHOD_1_44E012A78A449268_OFFSET))(this);
	}
};
