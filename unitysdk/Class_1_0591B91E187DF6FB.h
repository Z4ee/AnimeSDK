#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B87448D5E720C3DE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0591B91E187DF6FB_METHOD_1_633D57D0D97B9DAC_OFFSET UNITYSDK_OFFSET(0x11E1A6F0)

inline static constexpr unsigned int Class_1_0591B91E187DF6FB_TypeDefinitionIndex = 54395;

class Class_1_0591B91E187DF6FB : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>* Method_1_633D57D0D97B9DAC(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0591B91E187DF6FB_METHOD_1_633D57D0D97B9DAC_OFFSET))(a1);
	}
};
