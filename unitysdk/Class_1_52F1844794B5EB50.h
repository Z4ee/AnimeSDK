#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1103.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_C4B1DB3ACC36593B;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_52F1844794B5EB50_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A6CB310)
#define CLASS_1_52F1844794B5EB50_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1A6CA570)
#define CLASS_1_52F1844794B5EB50_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1A6CA830)
#define CLASS_1_52F1844794B5EB50_METHOD_1_5A5DA5976F10CAF1_OFFSET UNITYSDK_OFFSET(0x1A6CB6B0)
#define CLASS_1_52F1844794B5EB50_METHOD_1_5F6BDF3FF43F02F0_OFFSET UNITYSDK_OFFSET(0x1A6CB450)
#define CLASS_1_52F1844794B5EB50_METHOD_1_6D5D3557CBDD4B6D_OFFSET UNITYSDK_OFFSET(0x1A6CA910)
#define CLASS_1_52F1844794B5EB50_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1A6CB170)
#define CLASS_1_52F1844794B5EB50_METHOD_1_A59B9FD910EFA6C3_OFFSET UNITYSDK_OFFSET(0x1A6CB8F0)
#define CLASS_1_52F1844794B5EB50_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1A6CB230)
#define CLASS_1_52F1844794B5EB50_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x1A6CAF10)
#define CLASS_1_52F1844794B5EB50_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1A6CA550)
#define CLASS_1_52F1844794B5EB50_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x1A6CB0A0)
#define CLASS_1_52F1844794B5EB50_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1A6CB690)
#define CLASS_1_52F1844794B5EB50__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CB440)

inline static constexpr unsigned int Class_1_52F1844794B5EB50_TypeDefinitionIndex = 13461;

class Class_1_52F1844794B5EB50 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD>, ::Class_2_C4B1DB3ACC36593B*>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_6; // 0x18
	::Il2CppArray<::Class_2_C4B1DB3ACC36593B*>* Field_1_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::Enum_3_CE80FD07999C5845, ::System::Collections::Generic::List_1<::Class_2_C4B1DB3ACC36593B*>*>* Field_1_11; // 0x28
	::Struct_2_1862835F8661A21F_1103 Field_1_0; // 0x30
	::System::Boolean Field_1_10; // 0x48
	::System::Int32 Field_1_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D5D3557CBDD4B6D(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_6D5D3557CBDD4B6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_FINALIZE_OFFSET))(this);
	}

	::Class_2_C4B1DB3ACC36593B* Method_1_5F6BDF3FF43F02F0(::System::Int32 a1)
	{
		return ((::Class_2_C4B1DB3ACC36593B*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_5F6BDF3FF43F02F0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_C4B1DB3ACC36593B*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_C4B1DB3ACC36593B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::Class_2_C4B1DB3ACC36593B* Method_1_5A5DA5976F10CAF1(::System::Int32 a1)
	{
		return ((::Class_2_C4B1DB3ACC36593B*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_5A5DA5976F10CAF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Boolean Method_1_A59B9FD910EFA6C3(::Enum_3_CE80FD07999C5845 a1, ::System::Collections::Generic::List_1<::Class_2_C4B1DB3ACC36593B*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_CE80FD07999C5845, ::System::Collections::Generic::List_1<::Class_2_C4B1DB3ACC36593B*>*&))((::PBYTE)hIl2Cpp + CLASS_1_52F1844794B5EB50_METHOD_1_A59B9FD910EFA6C3_OFFSET))(this, a1, a2);
	}
};
