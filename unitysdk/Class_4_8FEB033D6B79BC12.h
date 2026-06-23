#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_993FB8DDEDFEC00B.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_4_8FEB033D6B79BC12_METHOD_4_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0x1A205900)
#define CLASS_4_8FEB033D6B79BC12_METHOD_4_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1A2060F0)
#define CLASS_4_8FEB033D6B79BC12_METHOD_4_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x1A2060E0)
#define CLASS_4_8FEB033D6B79BC12_METHOD_4_D0DF0505F244B465_OFFSET UNITYSDK_OFFSET(0x1A205E30)
#define CLASS_4_8FEB033D6B79BC12__CTOR_OFFSET UNITYSDK_OFFSET(0x1A205890)

inline static constexpr unsigned int Class_4_8FEB033D6B79BC12_TypeDefinitionIndex = 55774;

class Class_4_8FEB033D6B79BC12 : public ::Class_3_993FB8DDEDFEC00B
{
public:
	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::System::Action* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>* a4, ::System::Int32 a5, ::System::Nullable_1<::System::Boolean> a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>*, ::System::Int32, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_4_8FEB033D6B79BC12__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_4_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8FEB033D6B79BC12_METHOD_4_00DC6C482249EA10_OFFSET))(this);
	}

	::System::Void Method_4_D0DF0505F244B465()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8FEB033D6B79BC12_METHOD_4_D0DF0505F244B465_OFFSET))(this);
	}

	::System::Void Method_4_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8FEB033D6B79BC12_METHOD_4_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_4_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8FEB033D6B79BC12_METHOD_4_56CE4AFC5339F746_OFFSET))(this);
	}
};
