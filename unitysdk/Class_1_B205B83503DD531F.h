#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

class Class_0_16E4307DCC419505_727;
class Class_1_0E506C5F68028856;
class Class_1_246549FFFD7413BE;
class Class_1_246549FFFD7413BE_1;
class Class_1_F83FECEF6361BDBA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_771;

#define CLASS_1_B205B83503DD531F_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x179E52E0)
#define CLASS_1_B205B83503DD531F__CTOR_OFFSET UNITYSDK_OFFSET(0x179E50F0)

inline static constexpr unsigned int Class_1_B205B83503DD531F_TypeDefinitionIndex = 80804;

class Class_1_B205B83503DD531F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F83FECEF6361BDBA*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_246549FFFD7413BE*>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_246549FFFD7413BE_1*>* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_0E506C5F68028856*>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B205B83503DD531F__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B205B83503DD531F_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}
};
