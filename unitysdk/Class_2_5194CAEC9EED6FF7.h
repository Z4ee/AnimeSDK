#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Share/EEventState.h"

class Class_1_3B91E8B5FF29338A;
class Class_3_06B506F3349584D7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5194CAEC9EED6FF7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14F45B70)
#define CLASS_2_5194CAEC9EED6FF7_METHOD_2_25C92F25D7277C93_OFFSET UNITYSDK_OFFSET(0x14F45DA0)
#define CLASS_2_5194CAEC9EED6FF7_METHOD_2_316B577C7154BC0C_OFFSET UNITYSDK_OFFSET(0x14F48750)
#define CLASS_2_5194CAEC9EED6FF7_METHOD_2_6861EE9866BB0B96_OFFSET UNITYSDK_OFFSET(0x14F460B0)
#define CLASS_2_5194CAEC9EED6FF7_METHOD_2_992C4AD8D24C814B_OFFSET UNITYSDK_OFFSET(0x14F48930)
#define CLASS_2_5194CAEC9EED6FF7_METHOD_2_C256D6C18F6C2674_OFFSET UNITYSDK_OFFSET(0x14F48FE0)
#define CLASS_2_5194CAEC9EED6FF7_METHOD_2_D6A3412354E384E3_OFFSET UNITYSDK_OFFSET(0x14F48CF0)
#define CLASS_2_5194CAEC9EED6FF7_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x14F48B50)
#define CLASS_2_5194CAEC9EED6FF7_METHOD_2_FAD88293FF7CD93B_OFFSET UNITYSDK_OFFSET(0x14F48F40)
#define CLASS_2_5194CAEC9EED6FF7_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14F45BB0)
#define CLASS_2_5194CAEC9EED6FF7__CTOR_OFFSET UNITYSDK_OFFSET(0x14F45BF0)

inline static constexpr unsigned int Class_2_5194CAEC9EED6FF7_TypeDefinitionIndex = 40417;

class Class_2_5194CAEC9EED6FF7 : public ::Foundation::SingletonDisposable_1<::Class_2_5194CAEC9EED6FF7*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Share::EEventState>*>*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_3B91E8B5FF29338A*>*>* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5194CAEC9EED6FF7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5194CAEC9EED6FF7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5194CAEC9EED6FF7_ONCREATE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_3B91E8B5FF29338A*>* Method_2_25C92F25D7277C93()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_3B91E8B5FF29338A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5194CAEC9EED6FF7_METHOD_2_25C92F25D7277C93_OFFSET))(this);
	}

	::System::Void Method_2_6861EE9866BB0B96(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5194CAEC9EED6FF7_METHOD_2_6861EE9866BB0B96_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_3B91E8B5FF29338A* Method_2_992C4AD8D24C814B(::System::UInt64 a1)
	{
		return ((::Class_1_3B91E8B5FF29338A*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_5194CAEC9EED6FF7_METHOD_2_992C4AD8D24C814B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5194CAEC9EED6FF7_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::Class_1_3B91E8B5FF29338A* Method_2_316B577C7154BC0C(::System::UInt64 a1)
	{
		return ((::Class_1_3B91E8B5FF29338A*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_5194CAEC9EED6FF7_METHOD_2_316B577C7154BC0C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D6A3412354E384E3(::System::UInt64 a1, ::System::Int32 a2, ::System::Int32 a3, ::Share::EEventState& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Int32, ::Share::EEventState&))((::PBYTE)hIl2Cpp + CLASS_2_5194CAEC9EED6FF7_METHOD_2_D6A3412354E384E3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_2_FAD88293FF7CD93B(::System::UInt64 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_5194CAEC9EED6FF7_METHOD_2_FAD88293FF7CD93B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_3B91E8B5FF29338A*>* Method_2_C256D6C18F6C2674(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_3B91E8B5FF29338A*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5194CAEC9EED6FF7_METHOD_2_C256D6C18F6C2674_OFFSET))(this, a1);
	}
};
