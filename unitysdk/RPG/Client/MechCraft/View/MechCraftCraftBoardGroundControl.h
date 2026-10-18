#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftCraftBoardGroundControl___c__DisplayClass30_0.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_0A972FE8328AB478;
class Class_1_D05699509194BF9B;
namespace RPG::Client::MechCraft::View { class MechCraftCraftBoardGroundControlBinder; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftBoardTileControl; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_FORCECLOSECELLVFX_OFFSET UNITYSDK_OFFSET(0xD5F8330)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GETCELLANCHOR_OFFSET UNITYSDK_OFFSET(0xD5F9F40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GETCELLATPIVOT_OFFSET UNITYSDK_OFFSET(0xD5FA260)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0xD5F9D80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD5F8C90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_NODEDROPPABLE_OFFSET UNITYSDK_OFFSET(0xD5F9BF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_0025F4A4CAF0D7BC_OFFSET UNITYSDK_OFFSET(0xD5FF4B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_090E39DDE14F5946_OFFSET UNITYSDK_OFFSET(0xD5FF9D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_1246AD919B154449_OFFSET UNITYSDK_OFFSET(0xD5FF6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_19D6A989BB41923D_1_OFFSET UNITYSDK_OFFSET(0xD5FEAB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_19D6A989BB41923D_OFFSET UNITYSDK_OFFSET(0xD5FDCD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_1F114FFF23D7C9B4_OFFSET UNITYSDK_OFFSET(0xD5FC860)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_41CD1C6CA27DE27E_OFFSET UNITYSDK_OFFSET(0xD5FF600)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_49253FE67455EEF7_OFFSET UNITYSDK_OFFSET(0xD5FC250)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_61A8FDEDCD59608C_OFFSET UNITYSDK_OFFSET(0xD5F8CD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_669860B17D825611_OFFSET UNITYSDK_OFFSET(0xD5FF300)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_85EDE605D21F17D4_OFFSET UNITYSDK_OFFSET(0xD5FBB70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_8BCB255DF215F3D4_OFFSET UNITYSDK_OFFSET(0xD5FD6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_8D5D1768B3858FB7_OFFSET UNITYSDK_OFFSET(0xD5FD800)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_9B11D81A17878638_OFFSET UNITYSDK_OFFSET(0xD5FA880)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_A1E2EDF15F380824_OFFSET UNITYSDK_OFFSET(0xD5F9460)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_AEF81E862B49EE52_OFFSET UNITYSDK_OFFSET(0xD5FABD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_B85AB40F78DC0DB2_OFFSET UNITYSDK_OFFSET(0xD5FE270)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_C0D6348A80ECFE32_OFFSET UNITYSDK_OFFSET(0xD5FA7E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_CE26D67E135C8A1B_OFFSET UNITYSDK_OFFSET(0xD5FF8C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_D49943752E68E625_OFFSET UNITYSDK_OFFSET(0xD5FB650)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_E97167F8B3744D12_OFFSET UNITYSDK_OFFSET(0xD5FBD30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_EFD9B3CCD3284EDF_OFFSET UNITYSDK_OFFSET(0xD5FA150)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD5F8B00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD600620)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___REFRESHCELLSTATEOFBUFF_G__ISBUFFED_30_0_OFFSET UNITYSDK_OFFSET(0xD5FFE90)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftBoardGroundControl_TypeDefinitionIndex = 79844;

	class MechCraftCraftBoardGroundControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_0A972FE8328AB478* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftCraftBoardGroundControlBinder* _Binder; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_0A972FE8328AB478* get_Content()
		{
			return ((::Class_1_0A972FE8328AB478*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_0A972FE8328AB478* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_NodeDroppable()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_NODEDROPPABLE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CellSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_CELLSIZE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GetCellAnchor(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GETCELLANCHOR_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Vector2Int> GetCellAtPivot(::Class_1_D05699509194BF9B* a1, ::RPG::Client::MechCraft::MechCraftRotationType a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2Int>(*)(::PVOID, ::Class_1_D05699509194BF9B*, ::RPG::Client::MechCraft::MechCraftRotationType, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GETCELLATPIVOT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ForceCloseCellVfx()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_FORCECLOSECELLVFX_OFFSET))(this);
		}

		::System::Void Method_5_A1E2EDF15F380824(::Class_1_0A972FE8328AB478* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_A1E2EDF15F380824_OFFSET))(this, a1);
		}

		::System::Void Method_5_61A8FDEDCD59608C(::Class_1_0A972FE8328AB478* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_61A8FDEDCD59608C_OFFSET))(this, a1);
		}

		::System::Void Method_5_D49943752E68E625(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_D49943752E68E625_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E97167F8B3744D12(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_E97167F8B3744D12_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_49253FE67455EEF7(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_49253FE67455EEF7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_1F114FFF23D7C9B4(::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* a1, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_1F114FFF23D7C9B4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_8BCB255DF215F3D4(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_8BCB255DF215F3D4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_19D6A989BB41923D(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_19D6A989BB41923D_OFFSET))(this, a1);
		}

		::System::Void Method_5_B85AB40F78DC0DB2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_B85AB40F78DC0DB2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_19D6A989BB41923D_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_19D6A989BB41923D_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_AEF81E862B49EE52(::Class_1_0A972FE8328AB478* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_AEF81E862B49EE52_OFFSET))(this, a1);
		}

		::System::Void Method_5_8D5D1768B3858FB7(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_8D5D1768B3858FB7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_669860B17D825611(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_669860B17D825611_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_85EDE605D21F17D4(::Class_1_0A972FE8328AB478* a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_85EDE605D21F17D4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_0025F4A4CAF0D7BC(::Class_1_0A972FE8328AB478* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Vector2Int a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478*, ::UnityEngine::GameObject*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_0025F4A4CAF0D7BC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_41CD1C6CA27DE27E(::Class_1_0A972FE8328AB478* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_41CD1C6CA27DE27E_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_1246AD919B154449(::Class_1_0A972FE8328AB478* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_1246AD919B154449_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_CE26D67E135C8A1B(::Class_1_0A972FE8328AB478* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_CE26D67E135C8A1B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_090E39DDE14F5946(::Class_1_0A972FE8328AB478* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_090E39DDE14F5946_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_5_C0D6348A80ECFE32(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_C0D6348A80ECFE32_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_5_EFD9B3CCD3284EDF(::UnityEngine::Vector2Int a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_EFD9B3CCD3284EDF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl* Method_5_9B11D81A17878638(::UnityEngine::Vector2Int a1)
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_METHOD_5_9B11D81A17878638_OFFSET))(this, a1);
		}

		static ::System::Boolean __RefreshCellStateOfBuff_g__IsBuffed_30_0(::RPG::Client::MechCraft::View::MechCraftCraftBoardGroundControl___c__DisplayClass30_0& a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MechCraft::View::MechCraftCraftBoardGroundControl___c__DisplayClass30_0&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___REFRESHCELLSTATEOFBUFF_G__ISBUFFED_30_0_OFFSET))(a1);
		}
	};
}
