#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A00B784DE48ED0A8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0CC7E0B3DF51A072_METHOD_1_22AFE080B0CFE687_OFFSET UNITYSDK_OFFSET(0x138F5030)
#define CLASS_1_0CC7E0B3DF51A072_METHOD_1_A61995CCFF8CC07F_OFFSET UNITYSDK_OFFSET(0x138F50D0)
#define CLASS_1_0CC7E0B3DF51A072_METHOD_1_CFCAAC0937727D60_OFFSET UNITYSDK_OFFSET(0x138F5140)

inline static constexpr unsigned int Class_1_0CC7E0B3DF51A072_TypeDefinitionIndex = 74133;

class Class_1_0CC7E0B3DF51A072 : public ::System::Object
{
public:
	static ::System::Void Method_1_22AFE080B0CFE687(::Class_1_A00B784DE48ED0A8* a1)
	{
		return ((::System::Void(*)(::Class_1_A00B784DE48ED0A8*))((::PBYTE)hIl2Cpp + CLASS_1_0CC7E0B3DF51A072_METHOD_1_22AFE080B0CFE687_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_1_A61995CCFF8CC07F(::Class_1_A00B784DE48ED0A8* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Class_1_A00B784DE48ED0A8*))((::PBYTE)hIl2Cpp + CLASS_1_0CC7E0B3DF51A072_METHOD_1_A61995CCFF8CC07F_OFFSET))(a1);
	}

	static ::System::Void Method_1_CFCAAC0937727D60(::Class_1_A00B784DE48ED0A8* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_1_A00B784DE48ED0A8*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0CC7E0B3DF51A072_METHOD_1_CFCAAC0937727D60_OFFSET))(a1, a2, a3);
	}
};
