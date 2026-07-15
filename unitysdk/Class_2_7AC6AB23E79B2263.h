#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7AC6AB23E79B2263_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158D78C0)
#define CLASS_2_7AC6AB23E79B2263_GET_ID_OFFSET UNITYSDK_OFFSET(0x158D7920)
#define CLASS_2_7AC6AB23E79B2263_GET_ONSHIELDREMOVESEQUENCE_OFFSET UNITYSDK_OFFSET(0x158D7940)
#define CLASS_2_7AC6AB23E79B2263_GET_PROTECTEDENTITYLIST_OFFSET UNITYSDK_OFFSET(0x158D7900)
#define CLASS_2_7AC6AB23E79B2263_METHOD_2_F50C0450309C7F61_OFFSET UNITYSDK_OFFSET(0x158D7860)
#define CLASS_2_7AC6AB23E79B2263_SET_ID_OFFSET UNITYSDK_OFFSET(0x158D7930)
#define CLASS_2_7AC6AB23E79B2263_SET_ONSHIELDREMOVESEQUENCE_OFFSET UNITYSDK_OFFSET(0x158D7950)
#define CLASS_2_7AC6AB23E79B2263_SET_PROTECTEDENTITYLIST_OFFSET UNITYSDK_OFFSET(0x158D7910)
#define CLASS_2_7AC6AB23E79B2263__CTOR_OFFSET UNITYSDK_OFFSET(0x158D7960)

inline static constexpr unsigned int Class_2_7AC6AB23E79B2263_TypeDefinitionIndex = 55002;

class Class_2_7AC6AB23E79B2263 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_3_07C3C4D2990C49EE* _OnShieldRemoveSequence_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _ProtectedEntityList_k__BackingField; // 0x20
	::System::Int32 _ID_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F50C0450309C7F61(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::Class_3_07C3C4D2990C49EE* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_METHOD_2_F50C0450309C7F61_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_ProtectedEntityList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_GET_PROTECTEDENTITYLIST_OFFSET))(this);
	}

	::System::Void set_ProtectedEntityList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_SET_PROTECTEDENTITYLIST_OFFSET))(this, a1);
	}

	::System::Int32 get_ID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_SET_ID_OFFSET))(this, a1);
	}

	::Class_3_07C3C4D2990C49EE* get_OnShieldRemoveSequence()
	{
		return ((::Class_3_07C3C4D2990C49EE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_GET_ONSHIELDREMOVESEQUENCE_OFFSET))(this);
	}

	::System::Void set_OnShieldRemoveSequence(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_SET_ONSHIELDREMOVESEQUENCE_OFFSET))(this, a1);
	}
};
