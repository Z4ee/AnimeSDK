#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7AC6AB23E79B2263_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A725F0)
#define CLASS_2_7AC6AB23E79B2263_GET_ID_OFFSET UNITYSDK_OFFSET(0x8A72650)
#define CLASS_2_7AC6AB23E79B2263_GET_ONSHIELDREMOVESEQUENCE_OFFSET UNITYSDK_OFFSET(0x8A72670)
#define CLASS_2_7AC6AB23E79B2263_GET_PROTECTEDENTITYLIST_OFFSET UNITYSDK_OFFSET(0x8A72630)
#define CLASS_2_7AC6AB23E79B2263_METHOD_2_F50C0450309C7F61_OFFSET UNITYSDK_OFFSET(0x8A72590)
#define CLASS_2_7AC6AB23E79B2263_SET_ID_OFFSET UNITYSDK_OFFSET(0x8A72660)
#define CLASS_2_7AC6AB23E79B2263_SET_ONSHIELDREMOVESEQUENCE_OFFSET UNITYSDK_OFFSET(0x8A72680)
#define CLASS_2_7AC6AB23E79B2263_SET_PROTECTEDENTITYLIST_OFFSET UNITYSDK_OFFSET(0x8A72640)
#define CLASS_2_7AC6AB23E79B2263__CTOR_OFFSET UNITYSDK_OFFSET(0x8A72690)

inline static constexpr unsigned int Class_2_7AC6AB23E79B2263_TypeDefinitionIndex = 46387;

class Class_2_7AC6AB23E79B2263 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_3_5775A4FEC79026BC* _OnShieldRemoveSequence_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _ProtectedEntityList_k__BackingField; // 0x20
	::System::Int32 _ID_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F50C0450309C7F61(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::Class_3_5775A4FEC79026BC* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_METHOD_2_F50C0450309C7F61_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_ProtectedEntityList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_GET_PROTECTEDENTITYLIST_OFFSET))(this);
	}

	::System::Void set_ProtectedEntityList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_SET_PROTECTEDENTITYLIST_OFFSET))(this, value);
	}

	::System::Int32 get_ID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_SET_ID_OFFSET))(this, value);
	}

	::Class_3_5775A4FEC79026BC* get_OnShieldRemoveSequence()
	{
		return ((::Class_3_5775A4FEC79026BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_GET_ONSHIELDREMOVESEQUENCE_OFFSET))(this);
	}

	::System::Void set_OnShieldRemoveSequence(::Class_3_5775A4FEC79026BC* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_2_7AC6AB23E79B2263_SET_ONSHIELDREMOVESEQUENCE_OFFSET))(this, value);
	}
};
