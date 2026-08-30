#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FAF146B3D74C3C3F;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_1345FFCC87DEA342_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x17F3CB40)
#define CLASS_1_1345FFCC87DEA342_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F3CD20)
#define CLASS_1_1345FFCC87DEA342_METHOD_1_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x17F3CD70)
#define CLASS_1_1345FFCC87DEA342_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x17F3CB50)
#define CLASS_1_1345FFCC87DEA342__CTOR_OFFSET UNITYSDK_OFFSET(0x17F3CB60)

inline static constexpr unsigned int Class_1_1345FFCC87DEA342_TypeDefinitionIndex = 80888;

class Class_1_1345FFCC87DEA342 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::Class_1_FAF146B3D74C3C3F*>* OJFECHILFHG; // 0x10
	::System::Boolean _IsRunning_k__BackingField; // 0x18
	::System::Int32 HLLMPHJOKFC; // 0x1C

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

	::System::Void Method_1_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1345FFCC87DEA342_METHOD_1_D70C8B847AF08ADE_OFFSET))(this);
	}
};
