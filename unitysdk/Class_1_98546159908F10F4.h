#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_38671E5738D49D7F.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_9.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_98546159908F10F4_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12DC5040)
#define CLASS_1_98546159908F10F4__CTOR_OFFSET UNITYSDK_OFFSET(0x12DC4FE0)

inline static constexpr unsigned int Class_1_98546159908F10F4_TypeDefinitionIndex = 68982;

class Class_1_98546159908F10F4 : public ::System::Object
{
public:
	::System::Action* Field_1_6; // 0x10
	::System::Action_1<::Struct_2_B6A3FA7992F9F37E_9>* Field_1_7; // 0x18
	::System::Action* Field_1_5; // 0x20
	::Struct_2_38671E5738D49D7F Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98546159908F10F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98546159908F10F4_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
