#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_6D4EA93A8A50B3F8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1B3A20)
#define CLASS_1_6D4EA93A8A50B3F8___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B3A50)
#define CLASS_1_6D4EA93A8A50B3F8___C___INITIALIZEWINDOWCONTROLLER_B__2_0_OFFSET UNITYSDK_OFFSET(0xD1B3A60)

inline static constexpr unsigned int Class_1_6D4EA93A8A50B3F8___c_TypeDefinitionIndex = 62841;

class Class_1_6D4EA93A8A50B3F8___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_9DD8A46984F1AFFD*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::Class_2_9DD8A46984F1AFFD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D4EA93A8A50B3F8___c_TypeDefinitionIndex)->GetStaticField(0x46680);
	}
	static ::Class_1_6D4EA93A8A50B3F8___c** StaticGet___9()
	{
		return (::Class_1_6D4EA93A8A50B3F8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D4EA93A8A50B3F8___c_TypeDefinitionIndex)->GetStaticField(0x46688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D4EA93A8A50B3F8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D4EA93A8A50B3F8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __InitializeWindowController_b__2_0(::Class_2_9DD8A46984F1AFFD* a, ::Class_2_9DD8A46984F1AFFD* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_6D4EA93A8A50B3F8___C___INITIALIZEWINDOWCONTROLLER_B__2_0_OFFSET))(this, a, b);
	}
};
