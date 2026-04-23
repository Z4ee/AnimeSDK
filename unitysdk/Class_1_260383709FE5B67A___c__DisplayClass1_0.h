#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_260383709FE5B67A___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DC2A0)
#define CLASS_1_260383709FE5B67A___C__DISPLAYCLASS1_0___SELECTTARGET_B__0_OFFSET UNITYSDK_OFFSET(0xA2DC2C0)

inline static constexpr unsigned int Class_1_260383709FE5B67A___c__DisplayClass1_0_TypeDefinitionIndex = 71103;

class Class_1_260383709FE5B67A___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_2_49CAB3DE74280C58*>* excluded; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_260383709FE5B67A___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __SelectTarget_b__0(::Class_2_49CAB3DE74280C58* entity)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_260383709FE5B67A___C__DISPLAYCLASS1_0___SELECTTARGET_B__0_OFFSET))(this, entity);
	}
};
