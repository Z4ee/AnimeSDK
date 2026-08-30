#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3F5648B139775878;
namespace System { class String; }

#define CLASS_1_3F5648B139775878_CLASS_1_9CC7E26B25C5682E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165CAAF0)
#define CLASS_1_3F5648B139775878_CLASS_1_9CC7E26B25C5682E_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x165CAAA0)
#define CLASS_1_3F5648B139775878_CLASS_1_9CC7E26B25C5682E__CTOR_OFFSET UNITYSDK_OFFSET(0x165C7810)

inline static constexpr unsigned int Class_1_3F5648B139775878_Class_1_9CC7E26B25C5682E_TypeDefinitionIndex = 80636;

class Class_1_3F5648B139775878_Class_1_9CC7E26B25C5682E : public ::System::Object
{
public:
	::System::String* HKIFIMPFKIG; // 0x10
	::Class_1_3F5648B139775878* ADJNOFMEIKM; // 0x18

	::System::Void _ctor(::Class_1_3F5648B139775878* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F5648B139775878*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3F5648B139775878_CLASS_1_9CC7E26B25C5682E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F5648B139775878_CLASS_1_9CC7E26B25C5682E_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F5648B139775878_CLASS_1_9CC7E26B25C5682E_DISPOSE_OFFSET))(this);
	}
};
