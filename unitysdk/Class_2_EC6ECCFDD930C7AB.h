#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCellType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_742;
class Class_2_360C00D6092F4D31;
class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
class FiveDimRenderingPanel;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::LittleGame::ChenLingFes { class ChenLingFesBoardView; }
namespace RPG::Client::LittleGame::ChenLingFes { class ChenLingFesRouteRendererView; }
namespace RPG::GameCore { class ChenLingFesRegionCellConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EC6ECCFDD930C7AB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19100230)
#define CLASS_2_EC6ECCFDD930C7AB_GET_CELLENTITYDICT_OFFSET UNITYSDK_OFFSET(0x19106F20)
#define CLASS_2_EC6ECCFDD930C7AB_GET_ENDCELLENTITY_OFFSET UNITYSDK_OFFSET(0x19106F60)
#define CLASS_2_EC6ECCFDD930C7AB_GET_ITEMENTITYLIST_OFFSET UNITYSDK_OFFSET(0x19106F80)
#define CLASS_2_EC6ECCFDD930C7AB_GET_RENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0x19106F00)
#define CLASS_2_EC6ECCFDD930C7AB_GET_STARTCELLENTITY_OFFSET UNITYSDK_OFFSET(0x19106F40)
#define CLASS_2_EC6ECCFDD930C7AB_GET_VIEWROOT_OFFSET UNITYSDK_OFFSET(0x19106EE0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_00A91948BD71EE07_OFFSET UNITYSDK_OFFSET(0x191035A0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_01CD0285FA7728E3_OFFSET UNITYSDK_OFFSET(0x191068E0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_063A2C2CE28CAFB4_OFFSET UNITYSDK_OFFSET(0x19106E80)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_0C1D1D0673982C1F_OFFSET UNITYSDK_OFFSET(0x19105900)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_13063627F44993AC_OFFSET UNITYSDK_OFFSET(0x191039C0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_156C651C1FD79089_OFFSET UNITYSDK_OFFSET(0x19102710)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_17FAF5C4AA33E8F3_OFFSET UNITYSDK_OFFSET(0x191005B0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0x190FFED0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_26C17A2A2B6CC431_OFFSET UNITYSDK_OFFSET(0x191069D0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_2E6AA7D83B08AD49_OFFSET UNITYSDK_OFFSET(0x19106AE0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_32D25B2FC4891550_OFFSET UNITYSDK_OFFSET(0x19104810)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_4C186E13AD1370B5_OFFSET UNITYSDK_OFFSET(0x191031E0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_5649644F12A5E587_OFFSET UNITYSDK_OFFSET(0x19105FB0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_5FE86C798385BF43_OFFSET UNITYSDK_OFFSET(0x19106E10)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_6358EE553589AE52_OFFSET UNITYSDK_OFFSET(0x19100800)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_71E47D15E046BA7E_OFFSET UNITYSDK_OFFSET(0x191053B0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_73A12C1FFADBD599_OFFSET UNITYSDK_OFFSET(0x19100A50)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_76CBA6C87EEF6B2C_OFFSET UNITYSDK_OFFSET(0x19103840)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_7E994266A0D07648_OFFSET UNITYSDK_OFFSET(0x19100AD0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_80BE86FE0D61F02D_OFFSET UNITYSDK_OFFSET(0x19105B30)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_8A5842774092E518_OFFSET UNITYSDK_OFFSET(0x19102EA0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_8FC1D4BD7D97F403_OFFSET UNITYSDK_OFFSET(0x190FF510)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x190FFE60)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_96E4C6963BABD9F4_OFFSET UNITYSDK_OFFSET(0x19101D20)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x190FFD00)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_AE2FB102C212B1FC_OFFSET UNITYSDK_OFFSET(0x190FF5B0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_BEF20BDEEDEDBC80_OFFSET UNITYSDK_OFFSET(0x19106D70)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_C9754B0131863FDD_OFFSET UNITYSDK_OFFSET(0x19102380)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_CFDBA7C4E976D578_OFFSET UNITYSDK_OFFSET(0x190FFAB0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_D155561E3AB9CD04_OFFSET UNITYSDK_OFFSET(0x19100FC0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_DE2BC44ACB86CE8C_OFFSET UNITYSDK_OFFSET(0x191004E0)
#define CLASS_2_EC6ECCFDD930C7AB_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x190FFDE0)
#define CLASS_2_EC6ECCFDD930C7AB_SET_CELLENTITYDICT_OFFSET UNITYSDK_OFFSET(0x19106F30)
#define CLASS_2_EC6ECCFDD930C7AB_SET_ENDCELLENTITY_OFFSET UNITYSDK_OFFSET(0x19106F70)
#define CLASS_2_EC6ECCFDD930C7AB_SET_ITEMENTITYLIST_OFFSET UNITYSDK_OFFSET(0x19106F90)
#define CLASS_2_EC6ECCFDD930C7AB_SET_RENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0x19106F10)
#define CLASS_2_EC6ECCFDD930C7AB_SET_STARTCELLENTITY_OFFSET UNITYSDK_OFFSET(0x19106F50)
#define CLASS_2_EC6ECCFDD930C7AB_SET_VIEWROOT_OFFSET UNITYSDK_OFFSET(0x19106EF0)
#define CLASS_2_EC6ECCFDD930C7AB__CTOR_OFFSET UNITYSDK_OFFSET(0x190FFF30)
#define CLASS_2_EC6ECCFDD930C7AB__ONRELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x19100400)

inline static constexpr unsigned int Class_2_EC6ECCFDD930C7AB_TypeDefinitionIndex = 77292;

class Class_2_EC6ECCFDD930C7AB : public ::RPG::Client::LittleGame::SimpleViewService_1<::Class_2_5436AF4270279182*>
{
public:
	// static const ::System::Single JMLLPOEOFLO; // 0x0
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x30
	::RPG::Client::MonoEffectManager* KMLMEHCDDMA; // 0x38
	::Class_2_360C00D6092F4D31* EEFMDEHLLFI; // 0x40
	::FiveDimRenderingPanel* _RenderingPanel_k__BackingField; // 0x48
	::Class_2_5436AF4270279182* _EndCellEntity_k__BackingField; // 0x50
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::Class_2_5436AF4270279182*>* _CellEntityDict_k__BackingField; // 0x58
	::UnityEngine::Transform* _ViewRoot_k__BackingField; // 0x60
	::Class_0_16E4307DCC419505_742* LAKIKOLKPGI; // 0x68
	::RPG::Client::LittleGame::ChenLingFes::ChenLingFesRouteRendererView* KOFNPFEAIEF; // 0x70
	::Class_2_5436AF4270279182* _StartCellEntity_k__BackingField; // 0x78
	::Class_3_97041AE90E3B2214* PDENFEFCAGN; // 0x80
	::System::Collections::Generic::List_1<::Class_2_5436AF4270279182*>* _ItemEntityList_k__BackingField; // 0x88

	::System::Void _ctor(::Class_2_360C00D6092F4D31* a1, ::Class_3_97041AE90E3B2214* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_360C00D6092F4D31*, ::Class_3_97041AE90E3B2214*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8FC1D4BD7D97F403(::RPG::Client::LittleGame::ChenLingFes::ChenLingFesRouteRendererView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesRouteRendererView*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_8FC1D4BD7D97F403_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_AE2FB102C212B1FC()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_AE2FB102C212B1FC_OFFSET))(this);
	}

	::System::Void Method_2_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_97889423B3D78768_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_DISPOSE_OFFSET))(this);
	}

	::System::Void _OnReleaseView(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB__ONRELEASEVIEW_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_DE2BC44ACB86CE8C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_DE2BC44ACB86CE8C_OFFSET))(this, a1);
	}

	::Class_2_5436AF4270279182* Method_2_CFDBA7C4E976D578(::System::Int32 a1)
	{
		return ((::Class_2_5436AF4270279182*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_CFDBA7C4E976D578_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_17FAF5C4AA33E8F3(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_17FAF5C4AA33E8F3_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_6358EE553589AE52(::UnityEngine::Vector2Int a1, ::RPG::GameCore::ChenLingFesCellType a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::ChenLingFesCellType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_6358EE553589AE52_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_5436AF4270279182* Method_2_73A12C1FFADBD599()
	{
		return ((::Class_2_5436AF4270279182*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_73A12C1FFADBD599_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChenLingFes::ChenLingFesBoardView* Method_2_7E994266A0D07648(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::RPG::Client::LittleGame::ChenLingFes::ChenLingFesBoardView*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_7E994266A0D07648_OFFSET))(this, a1);
	}

	::Class_2_5436AF4270279182* Method_2_D155561E3AB9CD04(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_5436AF4270279182*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_D155561E3AB9CD04_OFFSET))(this, a1);
	}

	::System::Void Method_2_96E4C6963BABD9F4(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_96E4C6963BABD9F4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_5436AF4270279182*>* Method_2_C9754B0131863FDD()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_5436AF4270279182*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_C9754B0131863FDD_OFFSET))(this);
	}

	::Class_2_5436AF4270279182* Method_2_156C651C1FD79089(::RPG::GameCore::ChenLingFesRegionCellConfig* a1)
	{
		return ((::Class_2_5436AF4270279182*(*)(::PVOID, ::RPG::GameCore::ChenLingFesRegionCellConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_156C651C1FD79089_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8A5842774092E518(::Class_2_5436AF4270279182* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_5436AF4270279182*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_8A5842774092E518_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4C186E13AD1370B5(::Class_2_5436AF4270279182* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_5436AF4270279182*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_4C186E13AD1370B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_00A91948BD71EE07(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_00A91948BD71EE07_OFFSET))(this, a1);
	}

	::System::Void Method_2_76CBA6C87EEF6B2C(::Class_2_5436AF4270279182* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_76CBA6C87EEF6B2C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_13063627F44993AC(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_13063627F44993AC_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_32D25B2FC4891550(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_32D25B2FC4891550_OFFSET))(this, a1);
	}

	::System::Void Method_2_71E47D15E046BA7E(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_71E47D15E046BA7E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C1D1D0673982C1F(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_0C1D1D0673982C1F_OFFSET))(this, a1);
	}

	::System::Void Method_2_80BE86FE0D61F02D(::Class_2_5436AF4270279182* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_80BE86FE0D61F02D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5649644F12A5E587(::Class_2_5436AF4270279182* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_5649644F12A5E587_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TriggerEffectParamsRef Method_2_01CD0285FA7728E3(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::RPG::Client::TriggerEffectParamsRef(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_01CD0285FA7728E3_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TriggerEffectParamsRef Method_2_26C17A2A2B6CC431(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::RPG::Client::TriggerEffectParamsRef(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_26C17A2A2B6CC431_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TriggerEffectParamsRef Method_2_2E6AA7D83B08AD49(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4)
	{
		return ((::RPG::Client::TriggerEffectParamsRef(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_2E6AA7D83B08AD49_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::MonoEffect* Method_2_BEF20BDEEDEDBC80(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_BEF20BDEEDEDBC80_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5FE86C798385BF43(::RPG::Client::TriggerEffectParamsRef a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_5FE86C798385BF43_OFFSET))(this, a1);
	}

	::System::Void Method_2_063A2C2CE28CAFB4(::System::Single a1, ::RPG::Client::TriggerEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_METHOD_2_063A2C2CE28CAFB4_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* get_ViewRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_GET_VIEWROOT_OFFSET))(this);
	}

	::System::Void set_ViewRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_SET_VIEWROOT_OFFSET))(this, a1);
	}

	::FiveDimRenderingPanel* get_RenderingPanel()
	{
		return ((::FiveDimRenderingPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_GET_RENDERINGPANEL_OFFSET))(this);
	}

	::System::Void set_RenderingPanel(::FiveDimRenderingPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanel*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_SET_RENDERINGPANEL_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::Class_2_5436AF4270279182*>* get_CellEntityDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::Class_2_5436AF4270279182*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_GET_CELLENTITYDICT_OFFSET))(this);
	}

	::System::Void set_CellEntityDict(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::Class_2_5436AF4270279182*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::Class_2_5436AF4270279182*>*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_SET_CELLENTITYDICT_OFFSET))(this, a1);
	}

	::Class_2_5436AF4270279182* get_StartCellEntity()
	{
		return ((::Class_2_5436AF4270279182*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_GET_STARTCELLENTITY_OFFSET))(this);
	}

	::System::Void set_StartCellEntity(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_SET_STARTCELLENTITY_OFFSET))(this, a1);
	}

	::Class_2_5436AF4270279182* get_EndCellEntity()
	{
		return ((::Class_2_5436AF4270279182*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_GET_ENDCELLENTITY_OFFSET))(this);
	}

	::System::Void set_EndCellEntity(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_SET_ENDCELLENTITY_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_5436AF4270279182*>* get_ItemEntityList()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_5436AF4270279182*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_GET_ITEMENTITYLIST_OFFSET))(this);
	}

	::System::Void set_ItemEntityList(::System::Collections::Generic::List_1<::Class_2_5436AF4270279182*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_5436AF4270279182*>*))((::PBYTE)hIl2Cpp + CLASS_2_EC6ECCFDD930C7AB_SET_ITEMENTITYLIST_OFFSET))(this, a1);
	}
};
