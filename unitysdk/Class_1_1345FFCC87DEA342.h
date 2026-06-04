#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FAF146B3D74C3C3F;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_1345FFCC87DEA342_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xAA54240)
#define CLASS_1_1345FFCC87DEA342_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xAA54410)
#define CLASS_1_1345FFCC87DEA342_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAA543C0)
#define CLASS_1_1345FFCC87DEA342_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xAA54250)
#define CLASS_1_1345FFCC87DEA342__CTOR_OFFSET UNITYSDK_OFFSET(0xAA54260)

inline static constexpr unsigned int Class_1_1345FFCC87DEA342_TypeDefinitionIndex = 74458;

class Class_1_1345FFCC87DEA342 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::Class_1_FAF146B3D74C3C3F*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean _IsRunning_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1345FFCC87DEA342__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1345FFCC87DEA342_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void set_IsRunning(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1345FFCC87DEA342_SET_ISRUNNING_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1345FFCC87DEA342_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1345FFCC87DEA342_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}
};
