#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7C4CC6EEF8AC21FB_Enum_3_DF0BDF73D5FF6D1D.h"
#include "unitysdk/Struct_2_A85DD0CF7A2118D1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_42D0AEF8760CB218__CTOR_OFFSET UNITYSDK_OFFSET(0x187CF2C0)

inline static constexpr unsigned int Class_1_42D0AEF8760CB218_TypeDefinitionIndex = 69477;

class Class_1_42D0AEF8760CB218 : public ::System::Object
{
public:
	::System::Collections::Generic::IDictionary_2<::System::Int32, ::Struct_2_A85DD0CF7A2118D1>* Field_1_1; // 0x10
	::Class_1_7C4CC6EEF8AC21FB_Enum_3_DF0BDF73D5FF6D1D Field_1_2; // 0x18
	::System::UInt32 Field_1_0; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::Struct_2_A85DD0CF7A2118D1>* a2, ::Class_1_7C4CC6EEF8AC21FB_Enum_3_DF0BDF73D5FF6D1D a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::Struct_2_A85DD0CF7A2118D1>*, ::Class_1_7C4CC6EEF8AC21FB_Enum_3_DF0BDF73D5FF6D1D))((::PBYTE)hIl2Cpp + CLASS_1_42D0AEF8760CB218__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
