#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

class Class_0_16E4307DCC419505_1323;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_1C2F00D71205B27D_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x15FE8000)
#define CLASS_2_1C2F00D71205B27D_METHOD_2_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x15FE8520)
#define CLASS_2_1C2F00D71205B27D_METHOD_2_7744894CEC41BF06_2_OFFSET UNITYSDK_OFFSET(0x15FE8650)
#define CLASS_2_1C2F00D71205B27D_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x15FE83F0)
#define CLASS_2_1C2F00D71205B27D__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE8120)

inline static constexpr unsigned int Class_2_1C2F00D71205B27D_TypeDefinitionIndex = 76861;

class Class_2_1C2F00D71205B27D : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::Class_0_16E4307DCC419505_1323* Field_2_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_1C2F00D71205B27D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C2F00D71205B27D_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C2F00D71205B27D_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C2F00D71205B27D_METHOD_2_7744894CEC41BF06_1_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C2F00D71205B27D_METHOD_2_7744894CEC41BF06_2_OFFSET))(this);
	}
};
