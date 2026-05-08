#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x11102950)
#define CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_9EF9C4C2711D220E_OFFSET UNITYSDK_OFFSET(0x111028C0)
#define CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x111028D0)
#define CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x111028E0)
#define CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_E98A23CC3682A5D1_OFFSET UNITYSDK_OFFSET(0x11102940)
#define CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11102960)
#define CLASS_1_2BEB6BC8D9B3F0AE__CTOR_OFFSET UNITYSDK_OFFSET(0x11102860)

inline static constexpr unsigned int Class_1_2BEB6BC8D9B3F0AE_TypeDefinitionIndex = 51174;

class Class_1_2BEB6BC8D9B3F0AE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BEB6BC8D9B3F0AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9EF9C4C2711D220E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_9EF9C4C2711D220E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Action* Method_1_E98A23CC3682A5D1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_E98A23CC3682A5D1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_038349821F206DD5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BEB6BC8D9B3F0AE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
