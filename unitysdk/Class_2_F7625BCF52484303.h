#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_14.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_7972A1813543C5F2;
class Class_3_AF7A56E03A4D3952;
class Class_3_B3ED0A6D18418A92;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class Random; }
namespace FlowCanvas::Nodes { class SwitchBool; }
namespace FlowCanvas::Nodes { class SwitchProbability; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_F7625BCF52484303_METHOD_2_0352293D6055FB04_OFFSET UNITYSDK_OFFSET(0x13FB28C0)
#define CLASS_2_F7625BCF52484303_METHOD_2_03A5C1F702ECA3BF_OFFSET UNITYSDK_OFFSET(0x13FB18C0)
#define CLASS_2_F7625BCF52484303_METHOD_2_0DE5215FBB1F145B_OFFSET UNITYSDK_OFFSET(0x13FB0580)
#define CLASS_2_F7625BCF52484303_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x13FB1EE0)
#define CLASS_2_F7625BCF52484303_METHOD_2_139E408F275FA971_OFFSET UNITYSDK_OFFSET(0x13FB0B20)
#define CLASS_2_F7625BCF52484303_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13FB2FB0)
#define CLASS_2_F7625BCF52484303_METHOD_2_25DEA5C65A602671_1_OFFSET UNITYSDK_OFFSET(0x13FB25D0)
#define CLASS_2_F7625BCF52484303_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13FB1AA0)
#define CLASS_2_F7625BCF52484303_METHOD_2_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x13FB1240)
#define CLASS_2_F7625BCF52484303_METHOD_2_3F7C19E36BC696B6_OFFSET UNITYSDK_OFFSET(0x13FA8460)
#define CLASS_2_F7625BCF52484303_METHOD_2_4DC00CA0C895030D_OFFSET UNITYSDK_OFFSET(0x13FB38A0)
#define CLASS_2_F7625BCF52484303_METHOD_2_4EAE95CD498FBB45_OFFSET UNITYSDK_OFFSET(0x13FB0CF0)
#define CLASS_2_F7625BCF52484303_METHOD_2_512A05B32ABBCB46_OFFSET UNITYSDK_OFFSET(0x13FB2A50)
#define CLASS_2_F7625BCF52484303_METHOD_2_53C39AEA87720AEC_OFFSET UNITYSDK_OFFSET(0x13FB0180)
#define CLASS_2_F7625BCF52484303_METHOD_2_6BABAB86350FE0AA_OFFSET UNITYSDK_OFFSET(0x13FB3020)
#define CLASS_2_F7625BCF52484303_METHOD_2_6C84AD45A7CC2487_OFFSET UNITYSDK_OFFSET(0x13FB09A0)
#define CLASS_2_F7625BCF52484303_METHOD_2_6F08D7CF4E46ED42_OFFSET UNITYSDK_OFFSET(0x13FB20E0)
#define CLASS_2_F7625BCF52484303_METHOD_2_865FE500C5B70580_OFFSET UNITYSDK_OFFSET(0x13FAFFC0)
#define CLASS_2_F7625BCF52484303_METHOD_2_8D61BE16C9463302_1_OFFSET UNITYSDK_OFFSET(0x13FB3490)
#define CLASS_2_F7625BCF52484303_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x13FB0810)
#define CLASS_2_F7625BCF52484303_METHOD_2_8E4016B153708F0C_OFFSET UNITYSDK_OFFSET(0x13FB2350)
#define CLASS_2_F7625BCF52484303_METHOD_2_9EF9C4C2711D220E_OFFSET UNITYSDK_OFFSET(0x13FB3010)
#define CLASS_2_F7625BCF52484303_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x13FB2510)
#define CLASS_2_F7625BCF52484303_METHOD_2_AE2BD57E21DA9AEA_OFFSET UNITYSDK_OFFSET(0x13FB0DC0)
#define CLASS_2_F7625BCF52484303_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x13FB04A0)
#define CLASS_2_F7625BCF52484303_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x13FB25C0)
#define CLASS_2_F7625BCF52484303_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13FB20D0)
#define CLASS_2_F7625BCF52484303_METHOD_2_DC05E2E84030F62A_OFFSET UNITYSDK_OFFSET(0x13FB2EC0)
#define CLASS_2_F7625BCF52484303_METHOD_2_E16108D9CC30CB20_OFFSET UNITYSDK_OFFSET(0x13FB04F0)
#define CLASS_2_F7625BCF52484303_METHOD_2_E24F59CCA423B25C_OFFSET UNITYSDK_OFFSET(0x13FB1D90)
#define CLASS_2_F7625BCF52484303_METHOD_2_E76DE55C23FE0CB2_OFFSET UNITYSDK_OFFSET(0x13FB3620)
#define CLASS_2_F7625BCF52484303_METHOD_2_E8125F80C16C0BDE_OFFSET UNITYSDK_OFFSET(0x13FB00B0)
#define CLASS_2_F7625BCF52484303_METHOD_2_E98A23CC3682A5D1_OFFSET UNITYSDK_OFFSET(0x13FB2F90)
#define CLASS_2_F7625BCF52484303_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13FB3890)
#define CLASS_2_F7625BCF52484303_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13FB2FA0)
#define CLASS_2_F7625BCF52484303_METHOD_2_F0D8CED2667EB523_OFFSET UNITYSDK_OFFSET(0x13FB1360)
#define CLASS_2_F7625BCF52484303_METHOD_2_FD166F2DC7A64B9A_OFFSET UNITYSDK_OFFSET(0x13FA8620)
#define CLASS_2_F7625BCF52484303__CTOR_OFFSET UNITYSDK_OFFSET(0x13FAFE40)

inline static constexpr unsigned int Class_2_F7625BCF52484303_TypeDefinitionIndex = 49201;

class Class_2_F7625BCF52484303 : public ::Foundation::Singleton_1<::Class_2_F7625BCF52484303*>
{
public:
	::Class_3_B3ED0A6D18418A92* Field_2_2; // 0x10
	::System::Collections::Generic::HashSet_1<::FlowCanvas::FlowNode*>* Field_2_9; // 0x18
	::System::Collections::Generic::Queue_1<::Class_3_B3ED0A6D18418A92*>* Field_2_3; // 0x20
	::FlowCanvas::FlowNode* Field_2_6; // 0x28
	::FlowCanvas::FlowNode* Field_2_4; // 0x30
	::FlowCanvas::FlowNode* Field_2_5; // 0x38
	::Class_1_7972A1813543C5F2* Field_2_14; // 0x40
	::System::Collections::Generic::HashSet_1<::System::UInt64>* Field_2_12; // 0x48
	::System::Action* Field_2_0; // 0x50
	::NodeCanvas::Framework::Graph* Field_2_13; // 0x58
	::System::UInt64 Field_2_11; // 0x60
	::System::Boolean Field_2_7; // 0x68
	::System::Boolean Field_2_8; // 0x69
	::System::Boolean Field_2_1; // 0x6A
	::System::Boolean Field_2_10; // 0x6B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_865FE500C5B70580(::System::UInt64 a1, ::System::String* a2, ::Class_3_B3ED0A6D18418A92*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::String*, ::Class_3_B3ED0A6D18418A92*&))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_865FE500C5B70580_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_2_E8125F80C16C0BDE(::FlowCanvas::Nodes::SwitchProbability* a1, ::FlowCanvas::Flow a2, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Nodes::SwitchProbability*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_E8125F80C16C0BDE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_53C39AEA87720AEC(::FlowCanvas::FlowInput* a1, ::FlowCanvas::FlowNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowInput*, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_53C39AEA87720AEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Boolean Method_2_E16108D9CC30CB20(::FlowCanvas::FlowNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_E16108D9CC30CB20_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DE5215FBB1F145B(::NodeCanvas::Framework::Graph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_0DE5215FBB1F145B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_6C84AD45A7CC2487(::Class_3_AF7A56E03A4D3952* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_6C84AD45A7CC2487_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3F7C19E36BC696B6(::Class_3_B3ED0A6D18418A92* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B3ED0A6D18418A92*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_3F7C19E36BC696B6_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_4EAE95CD498FBB45(::FlowCanvas::Nodes::SwitchBool* a1, ::FlowCanvas::Flow a2, ::FlowCanvas::FlowOutput* a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Nodes::SwitchBool*, ::FlowCanvas::Flow, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_4EAE95CD498FBB45_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AE2BD57E21DA9AEA(::System::UInt64 a1, ::System::String* a2, ::System::Nullable_1<::System::Int32> a3, ::System::Nullable_1<::System::Int32> a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_AE2BD57E21DA9AEA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_2_F0D8CED2667EB523(::FlowCanvas::Nodes::SwitchBool* a1, ::FlowCanvas::Flow a2, ::FlowCanvas::FlowOutput* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Nodes::SwitchBool*, ::FlowCanvas::Flow, ::FlowCanvas::FlowOutput*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_F0D8CED2667EB523_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_E24F59CCA423B25C(::FlowCanvas::FlowNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_E24F59CCA423B25C_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6F08D7CF4E46ED42(::System::UInt64 a1, ::System::String* a2, ::Class_3_B3ED0A6D18418A92*& a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::String*, ::Class_3_B3ED0A6D18418A92*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_6F08D7CF4E46ED42_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8E4016B153708F0C(::FlowCanvas::FlowOutput* a1, ::FlowCanvas::FlowNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_8E4016B153708F0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_25DEA5C65A602671_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_25DEA5C65A602671_1_OFFSET))(this);
	}

	::System::Void Method_2_0352293D6055FB04(::FlowCanvas::FlowNode* a1, ::Enum_3_4608E37A1B3D374A_14 a2, ::System::Nullable_1<::System::Int32> a3, ::System::Nullable_1<::System::Int32> a4, ::System::String* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::Enum_3_4608E37A1B3D374A_14, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_0352293D6055FB04_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_512A05B32ABBCB46(::FlowCanvas::Nodes::SwitchProbability* a1, ::FlowCanvas::Flow a2, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Nodes::SwitchProbability*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_512A05B32ABBCB46_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::IEnumerator* Method_2_DC05E2E84030F62A(::FlowCanvas::Nodes::Random* a1, ::FlowCanvas::Flow a2, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Nodes::Random*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_DC05E2E84030F62A_OFFSET))(this, a1, a2, a3);
	}

	::System::Action* Method_2_E98A23CC3682A5D1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_E98A23CC3682A5D1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_9EF9C4C2711D220E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_9EF9C4C2711D220E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6BABAB86350FE0AA(::FlowCanvas::Nodes::Random* a1, ::FlowCanvas::Flow a2, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Nodes::Random*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_6BABAB86350FE0AA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8D61BE16C9463302_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_8D61BE16C9463302_1_OFFSET))(this);
	}

	::NodeCanvas::Framework::Node* Method_2_139E408F275FA971(::System::UInt64 a1)
	{
		return ((::NodeCanvas::Framework::Node*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_139E408F275FA971_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Void Method_2_03A5C1F702ECA3BF(::FlowCanvas::FlowNode* a1, ::System::Nullable_1<::System::Int32> a2, ::System::Nullable_1<::System::Int32> a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Boolean a6, ::System::String* a7)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_03A5C1F702ECA3BF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::String* Method_2_E76DE55C23FE0CB2(::System::UInt64 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_E76DE55C23FE0CB2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_FD166F2DC7A64B9A(::Class_3_B3ED0A6D18418A92* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B3ED0A6D18418A92*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_FD166F2DC7A64B9A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DC00CA0C895030D(::System::UInt64 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_4DC00CA0C895030D_OFFSET))(this, a1, a2, a3);
	}
};
