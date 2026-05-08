#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3BC6FFBFA6077E08.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_968FE97A45C78BCD.h"
#include "unitysdk/Enum_3_B1E3F4D4C32B440D.h"
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

#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_0CC4BC19C602BCD0_1_OFFSET UNITYSDK_OFFSET(0x17C32430)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x17C323D0)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_53B7A77F6AAE040A_OFFSET UNITYSDK_OFFSET(0x17C31B90)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x17C31DA0)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_7A8FDE81071CE981_OFFSET UNITYSDK_OFFSET(0x17C324D0)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_A4EAB1A2887E977A_OFFSET UNITYSDK_OFFSET(0x17C325E0)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_B73C2BA355231B56_OFFSET UNITYSDK_OFFSET(0x17C31D00)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17C32480)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_DE2128F557231F81_OFFSET UNITYSDK_OFFSET(0x17C31A00)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_E622BE70AEF537B2_OFFSET UNITYSDK_OFFSET(0x17C32420)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_EBD93270034A5E1D_1_OFFSET UNITYSDK_OFFSET(0x17C31AA0)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_EBD93270034A5E1D_OFFSET UNITYSDK_OFFSET(0x17C31910)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_F0EDD45507078A04_1_OFFSET UNITYSDK_OFFSET(0x17C324C0)
#define CLASS_2_E54B0BAFCA2425BD_METHOD_2_F0EDD45507078A04_OFFSET UNITYSDK_OFFSET(0x17C31D90)
#define CLASS_2_E54B0BAFCA2425BD__CTOR_OFFSET UNITYSDK_OFFSET(0x17C318B0)

inline static constexpr unsigned int Class_2_E54B0BAFCA2425BD_TypeDefinitionIndex = 65567;

class Class_2_E54B0BAFCA2425BD : public ::Class_1_3BC6FFBFA6077E08
{
public:
	::System::Collections::Generic::List_1<::Struct_2_E508FC08AA4BB226>* Field_2_1; // 0x28
	::System::Boolean Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBD93270034A5E1D(::Enum_3_B1E3F4D4C32B440D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B1E3F4D4C32B440D))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_EBD93270034A5E1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBD93270034A5E1D_1(::Enum_3_B1E3F4D4C32B440D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B1E3F4D4C32B440D))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_EBD93270034A5E1D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_53B7A77F6AAE040A(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>* a2, ::Struct_2_C3F14E7E9EA24BAC a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>*, ::Struct_2_C3F14E7E9EA24BAC))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_53B7A77F6AAE040A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F0EDD45507078A04(::Enum_3_B1E3F4D4C32B440D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B1E3F4D4C32B440D))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_F0EDD45507078A04_OFFSET))(this, a1);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_E622BE70AEF537B2(::Enum_3_B1E3F4D4C32B440D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B1E3F4D4C32B440D))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_E622BE70AEF537B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CC4BC19C602BCD0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_0CC4BC19C602BCD0_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B73C2BA355231B56(::System::String* a1, ::Class_1_43BD383C98B4C0C5_57* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_43BD383C98B4C0C5_57*))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_B73C2BA355231B56_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F0EDD45507078A04_1(::Enum_3_B1E3F4D4C32B440D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B1E3F4D4C32B440D))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_F0EDD45507078A04_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE2128F557231F81(::Struct_2_0B8A00E6770FCC03 a1, ::Enum_3_968FE97A45C78BCD a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0B8A00E6770FCC03, ::Enum_3_968FE97A45C78BCD))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_DE2128F557231F81_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_7A8FDE81071CE981(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a3, ::System::Threading::CancellationToken a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_7A8FDE81071CE981_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A4EAB1A2887E977A(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>* a2, ::Struct_2_C3F14E7E9EA24BAC a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>*, ::Struct_2_C3F14E7E9EA24BAC))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_METHOD_2_A4EAB1A2887E977A_OFFSET))(this, a1, a2, a3);
	}
};
