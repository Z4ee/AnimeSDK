#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_8D3BE177805F6B96_6.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_175;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B91890F9370B9379_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15807160)
#define CLASS_1_B91890F9370B9379_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x158066C0)
#define CLASS_1_B91890F9370B9379_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x15806DC0)
#define CLASS_1_B91890F9370B9379_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x158069B0)
#define CLASS_1_B91890F9370B9379_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x15806AF0)
#define CLASS_1_B91890F9370B9379_METHOD_1_70496DF795914F41_OFFSET UNITYSDK_OFFSET(0x15807340)
#define CLASS_1_B91890F9370B9379_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x15806FC0)
#define CLASS_1_B91890F9370B9379_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x15807080)
#define CLASS_1_B91890F9370B9379_METHOD_1_B539487ED23B057E_OFFSET UNITYSDK_OFFSET(0x15807770)
#define CLASS_1_B91890F9370B9379_METHOD_1_C69AFE5892863775_OFFSET UNITYSDK_OFFSET(0x15806DD0)
#define CLASS_1_B91890F9370B9379_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x158066A0)
#define CLASS_1_B91890F9370B9379_METHOD_1_DDFB4D88CA412831_OFFSET UNITYSDK_OFFSET(0x15807560)
#define CLASS_1_B91890F9370B9379_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x15807540)
#define CLASS_1_B91890F9370B9379__CTOR_OFFSET UNITYSDK_OFFSET(0x158072F0)

inline static constexpr unsigned int Class_1_B91890F9370B9379_TypeDefinitionIndex = 9675;

class Class_1_B91890F9370B9379 : public ::System::Object
{
public:
	::Struct_2_8D3BE177805F6B96_6 Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_175*>* Field_1_0; // 0x30
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_175*>* Field_1_11; // 0x38
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_5; // 0x40
	::System::Int32 Field_1_4; // 0x48
	::System::Int32 Field_1_7; // 0x4C
	::System::Boolean Field_1_10; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_C69AFE5892863775(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_C69AFE5892863775_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_175* Method_1_70496DF795914F41(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_175*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_70496DF795914F41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_175* Method_1_DDFB4D88CA412831(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_175*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_DDFB4D88CA412831_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_175*>* Method_1_B539487ED23B057E(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_175*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B91890F9370B9379_METHOD_1_B539487ED23B057E_OFFSET))(this, a1);
	}
};
