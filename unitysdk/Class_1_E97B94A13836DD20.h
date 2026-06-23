#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E97B94A13836DD20_Enum_3_765FB26344232A6A.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/Config/DirectionPlayerOnKey.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_C87A89B4261FDC79.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_422;
class Class_1_9159F6FE46573B6F;
class Class_5_A6F8D19602712D95;
class Class_5_FCAF801AC482D3B5;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_E97B94A13836DD20_METHOD_1_077465549C9EA81F_1_OFFSET UNITYSDK_OFFSET(0x113512C0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_077465549C9EA81F_OFFSET UNITYSDK_OFFSET(0x11350000)
#define CLASS_1_E97B94A13836DD20_METHOD_1_10F994734982BDD6_OFFSET UNITYSDK_OFFSET(0x11350360)
#define CLASS_1_E97B94A13836DD20_METHOD_1_24C471DB40089304_OFFSET UNITYSDK_OFFSET(0x11350C90)
#define CLASS_1_E97B94A13836DD20_METHOD_1_253CB4F7D97D9C8D_OFFSET UNITYSDK_OFFSET(0x11352710)
#define CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_1_OFFSET UNITYSDK_OFFSET(0x11351F80)
#define CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_2_OFFSET UNITYSDK_OFFSET(0x11352580)
#define CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_3_OFFSET UNITYSDK_OFFSET(0x113528B0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_OFFSET UNITYSDK_OFFSET(0x11351E40)
#define CLASS_1_E97B94A13836DD20_METHOD_1_2A4874C2E572C6DF_OFFSET UNITYSDK_OFFSET(0x1134F790)
#define CLASS_1_E97B94A13836DD20_METHOD_1_2D0A67257835A98C_OFFSET UNITYSDK_OFFSET(0x11350510)
#define CLASS_1_E97B94A13836DD20_METHOD_1_2E727D9B35D29D73_OFFSET UNITYSDK_OFFSET(0x11351620)
#define CLASS_1_E97B94A13836DD20_METHOD_1_30705288B8B6F5AE_OFFSET UNITYSDK_OFFSET(0x1134FCF0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1134FC00)
#define CLASS_1_E97B94A13836DD20_METHOD_1_32E7EB824B2750DC_OFFSET UNITYSDK_OFFSET(0x11352590)
#define CLASS_1_E97B94A13836DD20_METHOD_1_3613EEC06C43F0F2_OFFSET UNITYSDK_OFFSET(0x113514D0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11351780)
#define CLASS_1_E97B94A13836DD20_METHOD_1_5067965C836418AA_OFFSET UNITYSDK_OFFSET(0x113518D0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_54172A750DD2C5F4_OFFSET UNITYSDK_OFFSET(0x1134EDE0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_6AD093DB06F6D3CE_OFFSET UNITYSDK_OFFSET(0x113517E0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_6D8B8CD47CD59618_OFFSET UNITYSDK_OFFSET(0x1134FB70)
#define CLASS_1_E97B94A13836DD20_METHOD_1_6F33BDFADAB75769_OFFSET UNITYSDK_OFFSET(0x1134EBD0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_74B3E3BE1446E98C_OFFSET UNITYSDK_OFFSET(0x11351F90)
#define CLASS_1_E97B94A13836DD20_METHOD_1_7D0512220AA15CC9_OFFSET UNITYSDK_OFFSET(0x1134E610)
#define CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_1_OFFSET UNITYSDK_OFFSET(0x11350D60)
#define CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_2_OFFSET UNITYSDK_OFFSET(0x11351770)
#define CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_3_OFFSET UNITYSDK_OFFSET(0x11352570)
#define CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_OFFSET UNITYSDK_OFFSET(0x11350D50)
#define CLASS_1_E97B94A13836DD20_METHOD_1_850C9E9820C4B3A5_OFFSET UNITYSDK_OFFSET(0x11350EF0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0x11350050)
#define CLASS_1_E97B94A13836DD20_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1134E960)
#define CLASS_1_E97B94A13836DD20_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x113516F0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_9EF9C4C2711D220E_OFFSET UNITYSDK_OFFSET(0x11350D40)
#define CLASS_1_E97B94A13836DD20_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1134E8E0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_A2F8DE07E9D5EF94_OFFSET UNITYSDK_OFFSET(0x1134F450)
#define CLASS_1_E97B94A13836DD20_METHOD_1_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0x11350460)
#define CLASS_1_E97B94A13836DD20_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x1134EB50)
#define CLASS_1_E97B94A13836DD20_METHOD_1_BAD39BFC3D0D286A_OFFSET UNITYSDK_OFFSET(0x11351E50)
#define CLASS_1_E97B94A13836DD20_METHOD_1_C5F9BB5F974AF914_OFFSET UNITYSDK_OFFSET(0x1134E660)
#define CLASS_1_E97B94A13836DD20_METHOD_1_CDEB5A211F02C596_OFFSET UNITYSDK_OFFSET(0x1134E850)
#define CLASS_1_E97B94A13836DD20_METHOD_1_D013C0429E42B0FC_OFFSET UNITYSDK_OFFSET(0x11350480)
#define CLASS_1_E97B94A13836DD20_METHOD_1_DCC738563835C3B8_OFFSET UNITYSDK_OFFSET(0x11350D80)
#define CLASS_1_E97B94A13836DD20_METHOD_1_DDEC5195D4ABBA56_OFFSET UNITYSDK_OFFSET(0x11351310)
#define CLASS_1_E97B94A13836DD20_METHOD_1_E6DED4EBCDFDF729_OFFSET UNITYSDK_OFFSET(0x1134F120)
#define CLASS_1_E97B94A13836DD20_METHOD_1_E98A23CC3682A5D1_OFFSET UNITYSDK_OFFSET(0x113518C0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_EB3EAD4E8AA10C1F_OFFSET UNITYSDK_OFFSET(0x11351CC0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11350D70)
#define CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x11352560)
#define CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11350350)
#define CLASS_1_E97B94A13836DD20_METHOD_1_FF05AC0AB0D75A04_OFFSET UNITYSDK_OFFSET(0x113501C0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_FF5B73C80B52E579_OFFSET UNITYSDK_OFFSET(0x11350060)
#define CLASS_1_E97B94A13836DD20__CTOR_OFFSET UNITYSDK_OFFSET(0x1134E570)

inline static constexpr unsigned int Class_1_E97B94A13836DD20_TypeDefinitionIndex = 48889;

class Class_1_E97B94A13836DD20 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_2; // 0x10
	::System::Action_1<::System::Boolean>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_10; // 0x20
	::System::Threading::CancellationTokenSource* Field_1_9; // 0x28
	::System::Action_1<::System::Boolean>* Field_1_1; // 0x30
	::MoleMole::HollowChessboard::HollowEntity* Field_1_7; // 0x38
	::System::Action_1<::System::Boolean>* Field_1_3; // 0x40
	::Struct_2_C87A89B4261FDC79 Field_1_8; // 0x48
	::System::Action* Field_1_0; // 0x58
	::MoleMole::HollowChessboard::HollowCell Field_1_6; // 0x60
	::System::Boolean Field_1_5; // 0x6C
	::Class_1_E97B94A13836DD20_Enum_3_765FB26344232A6A Field_1_11; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C5F9BB5F974AF914(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_C5F9BB5F974AF914_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_6F33BDFADAB75769(::Class_0_16E4307DCC419505_422* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_422*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_6F33BDFADAB75769_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D8B8CD47CD59618()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_6D8B8CD47CD59618_OFFSET))(this);
	}

	::System::Void Method_1_30705288B8B6F5AE(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_30705288B8B6F5AE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_944725D8BEE125D5_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_FF5B73C80B52E579(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::String*(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_FF5B73C80B52E579_OFFSET))(a1);
	}

	::System::Void Method_1_077465549C9EA81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_077465549C9EA81F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_FF05AC0AB0D75A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_FF05AC0AB0D75A04_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_AF081070273CE162_OFFSET))(this);
	}

	::System::Void Method_1_CDEB5A211F02C596(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_CDEB5A211F02C596_OFFSET))(this, a1);
	}

	static ::Class_5_A6F8D19602712D95* Method_1_D013C0429E42B0FC(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2)
	{
		return ((::Class_5_A6F8D19602712D95*(*)(::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_D013C0429E42B0FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D0A67257835A98C(::MoleMole::UIHollowChessboard3DModelController* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::MoleMole::UIHollowChessboard3DModelController*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_2D0A67257835A98C_OFFSET))(a1, a2);
	}

	::System::Void Method_1_24C471DB40089304()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_24C471DB40089304_OFFSET))(this);
	}

	::System::Void Method_1_9EF9C4C2711D220E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_9EF9C4C2711D220E_OFFSET))(this, a1);
	}

	::System::Action_1<::System::Boolean>* Method_1_7F8FA2C22542DC2F()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_OFFSET))(this);
	}

	::System::Action_1<::System::Boolean>* Method_1_7F8FA2C22542DC2F_1()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_DCC738563835C3B8(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_DCC738563835C3B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_077465549C9EA81F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_077465549C9EA81F_1_OFFSET))(this);
	}

	::System::Void Method_1_DDEC5195D4ABBA56(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_DDEC5195D4ABBA56_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_10F994734982BDD6(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_10F994734982BDD6_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_3613EEC06C43F0F2(::MoleMole::HollowChessboard::HollowCell a1, ::Class_5_FCAF801AC482D3B5* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_3613EEC06C43F0F2_OFFSET))(a1, a2);
	}

	::Struct_2_C87A89B4261FDC79 Method_1_850C9E9820C4B3A5(::Class_5_FCAF801AC482D3B5* a1, ::Class_1_9159F6FE46573B6F* a2, ::System::Action* a3)
	{
		return ((::Struct_2_C87A89B4261FDC79(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*, ::Class_1_9159F6FE46573B6F*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_850C9E9820C4B3A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7D0512220AA15CC9(::Class_1_E97B94A13836DD20_Enum_3_765FB26344232A6A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E97B94A13836DD20_Enum_3_765FB26344232A6A))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_7D0512220AA15CC9_OFFSET))(this, a1);
	}

	static ::Class_1_E97B94A13836DD20* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_E97B94A13836DD20*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Action_1<::System::Boolean>* Method_1_7F8FA2C22542DC2F_2()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_2_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_6AD093DB06F6D3CE(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_6AD093DB06F6D3CE_OFFSET))(this, a1, a2, a3);
	}

	::System::Action* Method_1_E98A23CC3682A5D1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_E98A23CC3682A5D1_OFFSET))(this);
	}

	::System::Void Method_1_E6DED4EBCDFDF729(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_E6DED4EBCDFDF729_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EB3EAD4E8AA10C1F(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_EB3EAD4E8AA10C1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_26DF08ABCFC7B6BA(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_BAD39BFC3D0D286A(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_BAD39BFC3D0D286A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_26DF08ABCFC7B6BA_1(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5067965C836418AA(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* a3, ::System::Action* a4, ::MoleMole::HollowChessboard::HollowCell a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>*, ::System::Action*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_5067965C836418AA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_74B3E3BE1446E98C(::Class_5_FCAF801AC482D3B5* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_74B3E3BE1446E98C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	static ::MoleMole::Config::DirectionPlayerOnKey Method_1_2E727D9B35D29D73(::Class_5_FCAF801AC482D3B5* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::MoleMole::Config::DirectionPlayerOnKey(*)(::Class_5_FCAF801AC482D3B5*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_2E727D9B35D29D73_OFFSET))(a1, a2);
	}

	::System::Void Method_1_A2F8DE07E9D5EF94(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_A2F8DE07E9D5EF94_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_54172A750DD2C5F4(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2)
	{
		return ((::System::Boolean(*)(::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_54172A750DD2C5F4_OFFSET))(a1, a2);
	}

	::System::Action_1<::System::Boolean>* Method_1_7F8FA2C22542DC2F_3()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_3_OFFSET))(this);
	}

	::System::Void Method_1_26DF08ABCFC7B6BA_2(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_32E7EB824B2750DC(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_32E7EB824B2750DC_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_253CB4F7D97D9C8D(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_253CB4F7D97D9C8D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_26DF08ABCFC7B6BA_3(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A4874C2E572C6DF(::Class_1_9159F6FE46573B6F* a1, ::Class_5_FCAF801AC482D3B5* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_FCAF801AC482D3B5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_2A4874C2E572C6DF_OFFSET))(this, a1, a2, a3);
	}
};
