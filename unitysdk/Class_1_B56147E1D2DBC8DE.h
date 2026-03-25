#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_1_60B5E5A0CB5606E4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B56147E1D2DBC8DE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1837A980)
#define CLASS_1_B56147E1D2DBC8DE_METHOD_1_1A2292798A008BA3_OFFSET UNITYSDK_OFFSET(0x1837A480)
#define CLASS_1_B56147E1D2DBC8DE_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1837ABF0)
#define CLASS_1_B56147E1D2DBC8DE_METHOD_1_E82CB811A5B25942_OFFSET UNITYSDK_OFFSET(0x1837A820)
#define CLASS_1_B56147E1D2DBC8DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1837AE00)

inline static constexpr unsigned int Class_1_B56147E1D2DBC8DE_TypeDefinitionIndex = 34051;

class Class_1_B56147E1D2DBC8DE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Object*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B56147E1D2DBC8DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1A2292798A008BA3(::Class_1_60B5E5A0CB5606E4* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B56147E1D2DBC8DE_METHOD_1_1A2292798A008BA3_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_1_E82CB811A5B25942(::Class_1_60B5E5A0CB5606E4* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_1_B56147E1D2DBC8DE_METHOD_1_E82CB811A5B25942_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B56147E1D2DBC8DE_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B56147E1D2DBC8DE_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
