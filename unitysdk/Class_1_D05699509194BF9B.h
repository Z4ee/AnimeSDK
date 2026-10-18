#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_120;
class Class_1_FD893FD36F6A3A6D_2;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_D05699509194BF9B_GET_BUFFS_OFFSET UNITYSDK_OFFSET(0x1C51C290)
#define CLASS_1_D05699509194BF9B_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C51C050)
#define CLASS_1_D05699509194BF9B_GET_ISDISCOURAGED_OFFSET UNITYSDK_OFFSET(0x1C51C220)
#define CLASS_1_D05699509194BF9B_GET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x1C51C200)
#define CLASS_1_D05699509194BF9B_GET_MUTABLEISUSABLE_OFFSET UNITYSDK_OFFSET(0x1C51C240)
#define CLASS_1_D05699509194BF9B_GET_PRIMARYATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x1C51C1E0)
#define CLASS_1_D05699509194BF9B_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1C518F30)
#define CLASS_1_D05699509194BF9B_METHOD_1_3E466E77E062BD55_OFFSET UNITYSDK_OFFSET(0x1C51CCA0)
#define CLASS_1_D05699509194BF9B_METHOD_1_4B5C34F7A3AA9EA3_OFFSET UNITYSDK_OFFSET(0x1C51C700)
#define CLASS_1_D05699509194BF9B_METHOD_1_674D580DCE26571A_OFFSET UNITYSDK_OFFSET(0x1C51C070)
#define CLASS_1_D05699509194BF9B_METHOD_1_81D413A1EDA3DD38_OFFSET UNITYSDK_OFFSET(0x1C51CD60)
#define CLASS_1_D05699509194BF9B_METHOD_1_899F9334CFAB900F_OFFSET UNITYSDK_OFFSET(0x1C51C400)
#define CLASS_1_D05699509194BF9B_METHOD_1_A781512EE45E8EBA_OFFSET UNITYSDK_OFFSET(0x1C51C9B0)
#define CLASS_1_D05699509194BF9B_METHOD_1_B549F04EA33A764B_OFFSET UNITYSDK_OFFSET(0x1C51C2B0)
#define CLASS_1_D05699509194BF9B_METHOD_1_FB0855CD6429CA3E_OFFSET UNITYSDK_OFFSET(0x1C51C250)
#define CLASS_1_D05699509194BF9B_SET_BUFFS_OFFSET UNITYSDK_OFFSET(0x1C51C2A0)
#define CLASS_1_D05699509194BF9B_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C51C060)
#define CLASS_1_D05699509194BF9B_SET_ISDISCOURAGED_OFFSET UNITYSDK_OFFSET(0x1C51C230)
#define CLASS_1_D05699509194BF9B_SET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x1C51C210)
#define CLASS_1_D05699509194BF9B_SET_PRIMARYATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x1C51C1F0)
#define CLASS_1_D05699509194BF9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51D230)

inline static constexpr unsigned int Class_1_D05699509194BF9B_TypeDefinitionIndex = 41803;

class Class_1_D05699509194BF9B : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::Boolean>* _MutableIsUsable_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_FD893FD36F6A3A6D_2*>* _Buffs_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_120* _Config_k__BackingField; // 0x20
	::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> _PrimaryAttributeType_k__BackingField; // 0x28
	::System::Boolean _IsDiscouraged_k__BackingField; // 0x30
	::System::Boolean _IsRecommended_k__BackingField; // 0x31
	::System::Nullable_1<::UnityEngine::Vector2Int> HAOAFOMBMAO; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_120* get_Config()
	{
		return ((::Class_0_16E4307DCC419505_120*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::Class_0_16E4307DCC419505_120* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_120*))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_SET_CONFIG_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_674D580DCE26571A()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_METHOD_1_674D580DCE26571A_OFFSET))(this);
	}

	::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> get_PrimaryAttributeType()
	{
		return ((::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_GET_PRIMARYATTRIBUTETYPE_OFFSET))(this);
	}

	::System::Void set_PrimaryAttributeType(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_SET_PRIMARYATTRIBUTETYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRecommended()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_GET_ISRECOMMENDED_OFFSET))(this);
	}

	::System::Void set_IsRecommended(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_SET_ISRECOMMENDED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDiscouraged()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_GET_ISDISCOURAGED_OFFSET))(this);
	}

	::System::Void set_IsDiscouraged(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_SET_ISDISCOURAGED_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_MutableIsUsable()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_GET_MUTABLEISUSABLE_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* Method_1_FB0855CD6429CA3E()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_METHOD_1_FB0855CD6429CA3E_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_FD893FD36F6A3A6D_2*>* get_Buffs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_FD893FD36F6A3A6D_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_GET_BUFFS_OFFSET))(this);
	}

	::System::Void set_Buffs(::System::Collections::Generic::IReadOnlyList_1<::Class_1_FD893FD36F6A3A6D_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_FD893FD36F6A3A6D_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_SET_BUFFS_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B549F04EA33A764B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_METHOD_1_B549F04EA33A764B_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_1_899F9334CFAB900F(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_METHOD_1_899F9334CFAB900F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_1_4B5C34F7A3AA9EA3(::Struct_2_BDFB1B98046CDD46 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_METHOD_1_4B5C34F7A3AA9EA3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_A781512EE45E8EBA(::RPG::Client::MechCraft::MechCraftRotationType a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_METHOD_1_A781512EE45E8EBA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_1_3E466E77E062BD55(::RPG::Client::MechCraft::MechCraftRotationType a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_METHOD_1_3E466E77E062BD55_OFFSET))(this, a1);
	}

	::System::Void Method_1_81D413A1EDA3DD38(::RPG::Client::MechCraft::MechCraftRotationType a1, ::UnityEngine::Vector2Int& a2, ::RPG::Client::MechCraft::MechCraftRotationType& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftRotationType, ::UnityEngine::Vector2Int&, ::RPG::Client::MechCraft::MechCraftRotationType&))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B_METHOD_1_81D413A1EDA3DD38_OFFSET))(this, a1, a2, a3);
	}
};
