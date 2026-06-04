#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D86F0E84B4529D28;
class Class_2_B66C1067C0468FBB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_15621D4203E9C579_METHOD_1_06C5DCF01833A257_OFFSET UNITYSDK_OFFSET(0xA5D2180)
#define CLASS_1_15621D4203E9C579_METHOD_1_3F3A79F7E0B95602_OFFSET UNITYSDK_OFFSET(0xA5D2630)
#define CLASS_1_15621D4203E9C579_METHOD_1_E875885542B220AD_OFFSET UNITYSDK_OFFSET(0xA5D2820)
#define CLASS_1_15621D4203E9C579__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D29A0)

inline static constexpr unsigned int Class_1_15621D4203E9C579_TypeDefinitionIndex = 72113;

class Class_1_15621D4203E9C579 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15621D4203E9C579__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_06C5DCF01833A257(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_15621D4203E9C579_METHOD_1_06C5DCF01833A257_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_3F3A79F7E0B95602(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_15621D4203E9C579_METHOD_1_3F3A79F7E0B95602_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_D86F0E84B4529D28*>* Method_1_E875885542B220AD(::System::String* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D86F0E84B4529D28*>*(*)(::PVOID, ::System::String*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_15621D4203E9C579_METHOD_1_E875885542B220AD_OFFSET))(this, a1, a2);
	}
};
