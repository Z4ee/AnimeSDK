#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2117BD08A6E7FA9E_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x14A4FDA0)
#define CLASS_1_2117BD08A6E7FA9E_METHOD_1_D4AC5B0A59821410_OFFSET UNITYSDK_OFFSET(0x14A4FF70)
#define CLASS_1_2117BD08A6E7FA9E_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x14A4FC20)
#define CLASS_1_2117BD08A6E7FA9E_METHOD_1_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0x14A4FD50)
#define CLASS_1_2117BD08A6E7FA9E__CTOR_OFFSET UNITYSDK_OFFSET(0x14A4FCF0)

inline static constexpr unsigned int Class_1_2117BD08A6E7FA9E_TypeDefinitionIndex = 59795;

class Class_1_2117BD08A6E7FA9E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2117BD08A6E7FA9E__CTOR_OFFSET))(this);
	}

	static ::Class_1_2117BD08A6E7FA9E* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_2117BD08A6E7FA9E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2117BD08A6E7FA9E_METHOD_1_E4886687508BA48F_OFFSET))();
	}

	::System::Void Method_1_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2117BD08A6E7FA9E_METHOD_1_E727F9956B5BD78B_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2117BD08A6E7FA9E_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_D4AC5B0A59821410(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_2117BD08A6E7FA9E_METHOD_1_D4AC5B0A59821410_OFFSET))(this, a1);
	}
};
