#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5B498FC57F7FE68D_METHOD_1_5C2158E850B02732_OFFSET UNITYSDK_OFFSET(0x141DAAB0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5B498FC57F7FE68D_METHOD_1_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x141DA6B0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5B498FC57F7FE68D__CTOR_OFFSET UNITYSDK_OFFSET(0x141DA6A0)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_5B498FC57F7FE68D_TypeDefinitionIndex = 50201;

class Class_1_8B550A61FC9DDA82_Class_1_5B498FC57F7FE68D : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_0; // 0x18
	::System::Action* Field_1_7; // 0x20
	::System::Int64 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5B498FC57F7FE68D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5B498FC57F7FE68D_METHOD_1_CB8E229BDF290D41_OFFSET))(this);
	}

	::System::Void Method_1_5C2158E850B02732()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5B498FC57F7FE68D_METHOD_1_5C2158E850B02732_OFFSET))(this);
	}
};
