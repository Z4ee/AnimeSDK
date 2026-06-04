#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::Ability { template <typename T> class ILittleGameAbilityValueGetter_1; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_1E1630E070C4D708_CLASS_3_50D343C44D28BEFB_12_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA5F0F70)
#define CLASS_1_1E1630E070C4D708_CLASS_3_50D343C44D28BEFB_12_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA5F0FA0)
#define CLASS_1_1E1630E070C4D708_CLASS_3_50D343C44D28BEFB_12_INVOKE_OFFSET UNITYSDK_OFFSET(0xA5F0CA0)
#define CLASS_1_1E1630E070C4D708_CLASS_3_50D343C44D28BEFB_12__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F0F00)

inline static constexpr unsigned int Class_1_1E1630E070C4D708_Class_3_50D343C44D28BEFB_12_TypeDefinitionIndex = 71915;

class Class_1_1E1630E070C4D708_Class_3_50D343C44D28BEFB_12 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_1E1630E070C4D708_CLASS_3_50D343C44D28BEFB_12__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>* Invoke()
	{
		return ((::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1630E070C4D708_CLASS_3_50D343C44D28BEFB_12_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1E1630E070C4D708_CLASS_3_50D343C44D28BEFB_12_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_1E1630E070C4D708_CLASS_3_50D343C44D28BEFB_12_ENDINVOKE_OFFSET))(this, a1);
	}
};
