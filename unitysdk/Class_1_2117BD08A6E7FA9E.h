#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2117BD08A6E7FA9E_METHOD_1_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0xB1E8860)
#define CLASS_1_2117BD08A6E7FA9E_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xB1E88B0)
#define CLASS_1_2117BD08A6E7FA9E_METHOD_1_D4AC5B0A59821410_OFFSET UNITYSDK_OFFSET(0xB1E8A90)
#define CLASS_1_2117BD08A6E7FA9E_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0xB1E8730)
#define CLASS_1_2117BD08A6E7FA9E__CTOR_OFFSET UNITYSDK_OFFSET(0xB1E8800)

inline static constexpr unsigned int Class_1_2117BD08A6E7FA9E_TypeDefinitionIndex = 62559;

class Class_1_2117BD08A6E7FA9E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* JKEOPLNBLAC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2117BD08A6E7FA9E__CTOR_OFFSET))(this);
	}

	static ::Class_1_2117BD08A6E7FA9E* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_2117BD08A6E7FA9E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2117BD08A6E7FA9E_METHOD_1_E4886687508BA48F_OFFSET))();
	}

	::System::Void Method_1_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2117BD08A6E7FA9E_METHOD_1_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2117BD08A6E7FA9E_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_1_D4AC5B0A59821410(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_2117BD08A6E7FA9E_METHOD_1_D4AC5B0A59821410_OFFSET))(this, a1);
	}
};
