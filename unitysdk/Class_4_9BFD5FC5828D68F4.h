#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_9BFD5FC5828D68F4_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x16249C80)
#define CLASS_4_9BFD5FC5828D68F4_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16249690)
#define CLASS_4_9BFD5FC5828D68F4_METHOD_4_F51E4A9A0BA8E8D9_OFFSET UNITYSDK_OFFSET(0x16249B00)
#define CLASS_4_9BFD5FC5828D68F4_METHOD_4_F637E7BBB4A3229E_OFFSET UNITYSDK_OFFSET(0x16249720)
#define CLASS_4_9BFD5FC5828D68F4__CTOR_OFFSET UNITYSDK_OFFSET(0x16249BE0)

inline static constexpr unsigned int Class_4_9BFD5FC5828D68F4_TypeDefinitionIndex = 86162;

class Class_4_9BFD5FC5828D68F4 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9BFD5FC5828D68F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9BFD5FC5828D68F4_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_F637E7BBB4A3229E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_9BFD5FC5828D68F4_METHOD_4_F637E7BBB4A3229E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_4_F51E4A9A0BA8E8D9(::Struct_2_29439DBE2B63DCF3 a1, ::MoleMole::EntityHandle a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3, ::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_9BFD5FC5828D68F4_METHOD_4_F51E4A9A0BA8E8D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9BFD5FC5828D68F4_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
