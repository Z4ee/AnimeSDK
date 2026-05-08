#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_DF2C726EEEEC912D;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_01A9580380D362EF_CLASS_1_63E0CDB283056505_METHOD_1_1E9715A48743DE76_OFFSET UNITYSDK_OFFSET(0x1139C9C0)
#define CLASS_2_01A9580380D362EF_CLASS_1_63E0CDB283056505_METHOD_1_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x1139CBC0)
#define CLASS_2_01A9580380D362EF_CLASS_1_63E0CDB283056505__CTOR_OFFSET UNITYSDK_OFFSET(0x1139C9B0)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_63E0CDB283056505_TypeDefinitionIndex = 48585;

class Class_2_01A9580380D362EF_Class_1_63E0CDB283056505 : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*>* Field_1_1; // 0x10
	::Class_2_DF2C726EEEEC912D* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_63E0CDB283056505__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E9715A48743DE76(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_63E0CDB283056505_METHOD_1_1E9715A48743DE76_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_63E0CDB283056505_METHOD_1_8B848E52913DFCE9_OFFSET))(this);
	}
};
