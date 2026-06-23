#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3E2EF1FFB1C88E56_Struct_2_33F17EEB50526DF1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/FlowCanvas/MonsterPositionDuty.h"
#include "unitysdk/MoleMole/Project/Config/MonsterGroupTemplateExt_MonsterTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_2DDAC2F6C97EB8AD;
class Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4;
class Class_1_4DEDCA52461EC405;
class Class_1_5DA2E7556103D5A3_346;
class Class_3_88ECEB7D5F9A93BA_3;
namespace MoleMole { class RandomMonsterSelectParam; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateData; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x1B589100)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_03CE0F7B749C62EB_OFFSET UNITYSDK_OFFSET(0x1B587BC0)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_1DFDABFECD562670_OFFSET UNITYSDK_OFFSET(0x1B588210)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x1B588550)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x1B588130)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_2824987243CE5A3C_OFFSET UNITYSDK_OFFSET(0x1B58CEA0)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_2FB71A70AE2442A2_OFFSET UNITYSDK_OFFSET(0x1B589360)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_397D29C640BD8FC5_OFFSET UNITYSDK_OFFSET(0x1B589140)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_6C0E9473C4C1BBF6_OFFSET UNITYSDK_OFFSET(0x1B58CF20)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_7ED8296127E51E2C_OFFSET UNITYSDK_OFFSET(0x1B587C70)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_8F2E5040404D6D82_OFFSET UNITYSDK_OFFSET(0x1B587AD0)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_8FF8F637023376F9_OFFSET UNITYSDK_OFFSET(0x1B586C70)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_B3B5F599928969F3_OFFSET UNITYSDK_OFFSET(0x1B589630)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_D0C73C3FDA743F37_OFFSET UNITYSDK_OFFSET(0x1B586D90)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_D1DAEBC69E4F8C74_OFFSET UNITYSDK_OFFSET(0x1B586E00)
#define CLASS_1_3E2EF1FFB1C88E56_METHOD_1_EC30570493FA6167_OFFSET UNITYSDK_OFFSET(0x1B588C50)

inline static constexpr unsigned int Class_1_3E2EF1FFB1C88E56_TypeDefinitionIndex = 69230;

class Class_1_3E2EF1FFB1C88E56 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void Method_1_8FF8F637023376F9(::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4* a1)
	{
		return ((::System::Void(*)(::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4*))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_8FF8F637023376F9_OFFSET))(a1);
	}

	static ::Class_1_5DA2E7556103D5A3_346* Method_1_D0C73C3FDA743F37(::Class_3_88ECEB7D5F9A93BA_3* a1)
	{
		return ((::Class_1_5DA2E7556103D5A3_346*(*)(::Class_3_88ECEB7D5F9A93BA_3*))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_D0C73C3FDA743F37_OFFSET))(a1);
	}

	static ::System::Void Method_1_D1DAEBC69E4F8C74(::System::Boolean a1, ::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4*))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_D1DAEBC69E4F8C74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8F2E5040404D6D82(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_8F2E5040404D6D82_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7ED8296127E51E2C(::System::Action* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_7ED8296127E51E2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_228E3444D290BEE7_OFFSET))();
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_03CE0F7B749C62EB(::System::String* a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_03CE0F7B749C62EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1DFDABFECD562670(::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_1DFDABFECD562670_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2157CED3CDDF8996()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_2157CED3CDDF8996_OFFSET))();
	}

	static ::System::Boolean Method_1_EC30570493FA6167(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*& a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_EC30570493FA6167_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_397D29C640BD8FC5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_397D29C640BD8FC5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2FB71A70AE2442A2(::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4* a1)
	{
		return ((::System::Void(*)(::Class_1_3E2EF1FFB1C88E56_Class_1_E30C28B1C26233E4*))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_2FB71A70AE2442A2_OFFSET))(a1);
	}

	static ::Class_1_4DEDCA52461EC405* Method_1_B3B5F599928969F3(::Class_1_2DDAC2F6C97EB8AD* a1, ::MoleMole::RandomMonsterSelectParam* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a4)
	{
		return ((::Class_1_4DEDCA52461EC405*(*)(::Class_1_2DDAC2F6C97EB8AD*, ::MoleMole::RandomMonsterSelectParam*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_B3B5F599928969F3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_2824987243CE5A3C(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_2824987243CE5A3C_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_6C0E9473C4C1BBF6(::MoleMole::FlowCanvas::MonsterPositionDuty a1)
	{
		return ((::System::Int32(*)(::MoleMole::FlowCanvas::MonsterPositionDuty))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_METHOD_1_6C0E9473C4C1BBF6_OFFSET))(a1);
	}
};
