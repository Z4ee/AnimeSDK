#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B81BDF90E0194EA7.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NotificationBadgeEx; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0EE53E69B2631EA3__CTOR_OFFSET UNITYSDK_OFFSET(0x1407D9B0)

inline static constexpr unsigned int Class_1_0EE53E69B2631EA3_TypeDefinitionIndex = 50083;

class Class_1_0EE53E69B2631EA3 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::NotificationBadgeEx*>* Field_1_7; // 0x10
	::System::String* Field_1_0; // 0x18
	::Enum_3_B81BDF90E0194EA7 Field_1_1; // 0x20

	::System::Void _ctor(::Enum_3_B81BDF90E0194EA7 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B81BDF90E0194EA7, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0EE53E69B2631EA3__CTOR_OFFSET))(this, a1, a2);
	}
};
