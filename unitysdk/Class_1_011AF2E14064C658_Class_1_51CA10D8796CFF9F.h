#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_011AF2E14064C658_Enum_3_C183BFB78350300F.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x15935170)
#define CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15935430)
#define CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_22E88461E26A70FA_OFFSET UNITYSDK_OFFSET(0x159352D0)
#define CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_3AE1887538C3826C_OFFSET UNITYSDK_OFFSET(0x15935490)
#define CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_5266E4CB53AE7E41_OFFSET UNITYSDK_OFFSET(0x15934F40)
#define CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x15935550)
#define CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x15935420)
#define CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15935560)
#define CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F__CTOR_OFFSET UNITYSDK_OFFSET(0x15934F30)

inline static constexpr unsigned int Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F_TypeDefinitionIndex = 47047;

class Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F : public ::System::Object
{
public:
	// static const ::System::String* Field_1_10; // 0x0
	::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap* Field_1_5; // 0x10
	::System::Threading::CancellationToken Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::Class_1_011AF2E14064C658_Enum_3_C183BFB78350300F, ::System::Action_1<::Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F*>*>* Field_1_9; // 0x20
	::System::String* Field_1_2; // 0x28
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_1; // 0x30
	::System::Boolean Field_1_7; // 0x38
	::System::Boolean Field_1_6; // 0x39
	::System::Boolean Field_1_3; // 0x3A
	::System::Boolean Field_1_4; // 0x3B
	::System::Boolean Field_1_8; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5266E4CB53AE7E41(::Class_1_011AF2E14064C658_Enum_3_C183BFB78350300F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_011AF2E14064C658_Enum_3_C183BFB78350300F))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_5266E4CB53AE7E41_OFFSET))(this, a1);
	}

	::Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F* Method_1_22E88461E26A70FA(::Class_1_011AF2E14064C658_Enum_3_C183BFB78350300F a1, ::System::Action_1<::Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F*>* a2)
	{
		return ((::Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F*(*)(::PVOID, ::Class_1_011AF2E14064C658_Enum_3_C183BFB78350300F, ::System::Action_1<::Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F*>*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_22E88461E26A70FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_063ADB01C44981A7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_063ADB01C44981A7_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_3AE1887538C3826C(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_3AE1887538C3826C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_51CA10D8796CFF9F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
