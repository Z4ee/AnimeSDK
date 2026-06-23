#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9E0C80DACE89226.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_968FE97A45C78BCD.h"
#include "unitysdk/Enum_3_FBFD6F7304B717CB.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_C3F14E7E9EA24BAC.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"
#include "unitysdk/Struct_2_E508FC08AA4BB226.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_43BD383C98B4C0C5_57;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_53B7A77F6AAE040A_OFFSET UNITYSDK_OFFSET(0x11732170)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_563CDA762AC6FCD8_OFFSET UNITYSDK_OFFSET(0x117324E0)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_7A8FDE81071CE981_OFFSET UNITYSDK_OFFSET(0x11732370)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_942B6DBE3F01763B_OFFSET UNITYSDK_OFFSET(0x11732480)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_A4EAB1A2887E977A_OFFSET UNITYSDK_OFFSET(0x11732C10)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_AAD21DE195D05736_1_OFFSET UNITYSDK_OFFSET(0x11732BC0)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x11732490)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_B73C2BA355231B56_OFFSET UNITYSDK_OFFSET(0x117322E0)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11732B80)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_D7C194C336E2B93B_1_OFFSET UNITYSDK_OFFSET(0x11732C50)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_D7C194C336E2B93B_OFFSET UNITYSDK_OFFSET(0x11732C40)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_DE2128F557231F81_OFFSET UNITYSDK_OFFSET(0x11731FE0)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_EBD93270034A5E1D_1_OFFSET UNITYSDK_OFFSET(0x11732080)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_EBD93270034A5E1D_OFFSET UNITYSDK_OFFSET(0x11731EF0)
#define CLASS_2_E54B0BAFCA2425BD__CTOR_OFFSET UNITYSDK_OFFSET(0x11731E40)

inline static constexpr unsigned int Class_2_E54B0BAFCA2425BD_TypeDefinitionIndex = 54298;

class Class_2_E54B0BAFCA2425BD : public ::Class_1_D9E0C80DACE89226
{
public:
	::System::Collections::Generic::List_1<::Struct_2_E508FC08AA4BB226>* Field_2_1; // 0x38
	::System::Boolean Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBD93270034A5E1D(::Enum_3_FBFD6F7304B717CB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_FBFD6F7304B717CB))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_EBD93270034A5E1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBD93270034A5E1D_1(::Enum_3_FBFD6F7304B717CB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_FBFD6F7304B717CB))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_EBD93270034A5E1D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_53B7A77F6AAE040A(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>* a2, ::Struct_2_C3F14E7E9EA24BAC a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>*, ::Struct_2_C3F14E7E9EA24BAC))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_53B7A77F6AAE040A_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_7A8FDE81071CE981(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a3, ::System::Threading::CancellationToken a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_7A8FDE81071CE981_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_942B6DBE3F01763B(::Enum_3_FBFD6F7304B717CB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_FBFD6F7304B717CB))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_942B6DBE3F01763B_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_DE2128F557231F81(::Struct_2_0B8A00E6770FCC03 a1, ::Enum_3_968FE97A45C78BCD a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0B8A00E6770FCC03, ::Enum_3_968FE97A45C78BCD))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_DE2128F557231F81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_563CDA762AC6FCD8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_563CDA762AC6FCD8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_AAD21DE195D05736_1_OFFSET))(this);
	}

	::System::Void Method_2_A4EAB1A2887E977A(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>* a2, ::Struct_2_C3F14E7E9EA24BAC a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>*, ::Struct_2_C3F14E7E9EA24BAC))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_A4EAB1A2887E977A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D7C194C336E2B93B(::Enum_3_FBFD6F7304B717CB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_FBFD6F7304B717CB))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_D7C194C336E2B93B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7C194C336E2B93B_1(::Enum_3_FBFD6F7304B717CB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_FBFD6F7304B717CB))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_D7C194C336E2B93B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B73C2BA355231B56(::System::String* a1, ::Class_1_43BD383C98B4C0C5_57* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_43BD383C98B4C0C5_57*))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_B73C2BA355231B56_OFFSET))(this, a1, a2);
	}
};
