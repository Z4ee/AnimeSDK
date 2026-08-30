#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReasonMask.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E09750255DA725C_GET_LOCKKEY_OFFSET UNITYSDK_OFFSET(0x1608C3B0)
#define CLASS_1_1E09750255DA725C_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x1608C3D0)
#define CLASS_1_1E09750255DA725C_METHOD_1_9FBC136CEE32F2B0_OFFSET UNITYSDK_OFFSET(0x1608C510)
#define CLASS_1_1E09750255DA725C_METHOD_1_AC2B072F6EDFA2FE_OFFSET UNITYSDK_OFFSET(0x1608C450)
#define CLASS_1_1E09750255DA725C_SET_LOCKKEY_OFFSET UNITYSDK_OFFSET(0x1608C3C0)
#define CLASS_1_1E09750255DA725C__CTOR_OFFSET UNITYSDK_OFFSET(0x1608C6E0)

inline static constexpr unsigned int Class_1_1E09750255DA725C_TypeDefinitionIndex = 55347;

class Class_1_1E09750255DA725C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* NBOHOMJKOJH; // 0x10
	::System::String* _LockKey_k__BackingField; // 0x18
	::RPG::GameCore::ActionDelayChangeTypeMask OLBPNAHNNKD; // 0x20
	::RPG::GameCore::ActionDelayChangeReasonMask EHIGPNKFIGJ; // 0x22
	::System::Boolean LHECFFMIBNL; // 0x24
	::RPG::GameCore::ActionDelayChangeTypeMask AFAAIDLOEHE; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E09750255DA725C__CTOR_OFFSET))(this);
	}

	::System::String* get_LockKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E09750255DA725C_GET_LOCKKEY_OFFSET))(this);
	}

	::System::Void set_LockKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E09750255DA725C_SET_LOCKKEY_OFFSET))(this, a1);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E09750255DA725C_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AC2B072F6EDFA2FE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E09750255DA725C_METHOD_1_AC2B072F6EDFA2FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9FBC136CEE32F2B0(::RPG::GameCore::ActionDelayChangeReason a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::ActionDelayChangeTypeMask a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ActionDelayChangeTypeMask, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E09750255DA725C_METHOD_1_9FBC136CEE32F2B0_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
