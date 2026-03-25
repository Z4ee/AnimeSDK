#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_16C753786E6D9BD1_CLEAR_OFFSET UNITYSDK_OFFSET(0x87280E0)
#define CLASS_1_16C753786E6D9BD1_GET_VALIDCHECKER_OFFSET UNITYSDK_OFFSET(0x8727FB0)
#define CLASS_1_16C753786E6D9BD1_METHOD_1_01C00AED4805279E_OFFSET UNITYSDK_OFFSET(0x8728830)
#define CLASS_1_16C753786E6D9BD1_METHOD_1_0F18B26B3C898DF3_OFFSET UNITYSDK_OFFSET(0x8728530)
#define CLASS_1_16C753786E6D9BD1_METHOD_1_272068886DA88B16_OFFSET UNITYSDK_OFFSET(0x87286B0)
#define CLASS_1_16C753786E6D9BD1_METHOD_1_AEF9A5358F4E0015_OFFSET UNITYSDK_OFFSET(0x87287D0)
#define CLASS_1_16C753786E6D9BD1_METHOD_1_E28F290ACBB044F0_OFFSET UNITYSDK_OFFSET(0x8728310)
#define CLASS_1_16C753786E6D9BD1_METHOD_1_E81CEED1B22DE2BF_OFFSET UNITYSDK_OFFSET(0x87288C0)
#define CLASS_1_16C753786E6D9BD1_SET_VALIDCHECKER_OFFSET UNITYSDK_OFFSET(0x8727FC0)
#define CLASS_1_16C753786E6D9BD1__CTOR_OFFSET UNITYSDK_OFFSET(0x8727FD0)

inline static constexpr unsigned int Class_1_16C753786E6D9BD1_TypeDefinitionIndex = 46617;

class Class_1_16C753786E6D9BD1 : public ::System::Object
{
public:
	::System::Predicate_1<::RPG::GameCore::GameWorld*>* _ValidChecker_k__BackingField; // 0x10
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_1_7; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_1_4; // 0x28
	::RPG::GameCore::GameWorld* Field_1_5; // 0x30
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_1_6; // 0x38
	::RPG::GameCore::EntityTypeMask Field_1_3; // 0x40
	::System::Single Field_1_2; // 0x48
	::System::Int32 Field_1_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16C753786E6D9BD1__CTOR_OFFSET))(this);
	}

	::System::Predicate_1<::RPG::GameCore::GameWorld*>* get_ValidChecker()
	{
		return ((::System::Predicate_1<::RPG::GameCore::GameWorld*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16C753786E6D9BD1_GET_VALIDCHECKER_OFFSET))(this);
	}

	::System::Void set_ValidChecker(::System::Predicate_1<::RPG::GameCore::GameWorld*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::RPG::GameCore::GameWorld*>*))((::PBYTE)hIl2Cpp + CLASS_1_16C753786E6D9BD1_SET_VALIDCHECKER_OFFSET))(this, value);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16C753786E6D9BD1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_E28F290ACBB044F0(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::System::Int32 a3, ::RPG::GameCore::EntityTypeMask a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::System::Int32, ::RPG::GameCore::EntityTypeMask, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_16C753786E6D9BD1_METHOD_1_E28F290ACBB044F0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_272068886DA88B16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16C753786E6D9BD1_METHOD_1_272068886DA88B16_OFFSET))(this);
	}

	::System::Boolean Method_1_AEF9A5358F4E0015()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16C753786E6D9BD1_METHOD_1_AEF9A5358F4E0015_OFFSET))(this);
	}

	::System::Void Method_1_01C00AED4805279E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_16C753786E6D9BD1_METHOD_1_01C00AED4805279E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F18B26B3C898DF3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_16C753786E6D9BD1_METHOD_1_0F18B26B3C898DF3_OFFSET))(this, a1);
	}

	::System::Void Method_1_E81CEED1B22DE2BF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_16C753786E6D9BD1_METHOD_1_E81CEED1B22DE2BF_OFFSET))(this, a1);
	}
};
