#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/RuntimeDynamicObjectSet.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/Struct_2_6EBD903476086028.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_01E3578B80D3E1F9;
class Class_1_236FD73ABC492E3F;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class SceneMapLayerRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13511FF0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13511490)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURAREANAME_OFFSET UNITYSDK_OFFSET(0x13512450)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTAREA_OFFSET UNITYSDK_OFFSET(0x13512550)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTBATTLEREGIONINDEX_OFFSET UNITYSDK_OFFSET(0x13512610)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_TOTALAREACOUNT_OFFSET UNITYSDK_OFFSET(0x13512670)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x13511510)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x135128C0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_4C149FCF039BA7FB_OFFSET UNITYSDK_OFFSET(0x13512050)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_571BB03219A716AE_OFFSET UNITYSDK_OFFSET(0x13512AA0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_97E5EBAF1F56F742_OFFSET UNITYSDK_OFFSET(0x13512B60)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0x13512BF0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_ECF44733EE59F889_OFFSET UNITYSDK_OFFSET(0x13512800)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13512700)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneConfigRuntimeData_TypeDefinitionIndex = 73888;

	class SceneConfigRuntimeData : public ::System::Object
	{
	public:
		::System::String* sceneNameId; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* sceneAreas; // 0x18
		::System::Collections::Generic::List_1<::Class_1_01E3578B80D3E1F9*>* areaCategoryList; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::RuntimeDynamicObjectSet>* dynamicObjectSets; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneMapLayerRuntimeData*>* mapLayers; // 0x30
		::System::Collections::Generic::List_1<::Struct_2_6EBD903476086028>* navMeshLinks; // 0x38
		::System::Single _lazyCheck; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::Int32>*>* statis; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterFunctionType, ::System::Int32>*>* monstStatis; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::String* get_CurAreaName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURAREANAME_OFFSET))(this);
		}

		::MoleMole::Config::SceneConfigRuntimeDataArea get_CurrentArea()
		{
			return ((::MoleMole::Config::SceneConfigRuntimeDataArea(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTAREA_OFFSET))(this);
		}

		::System::Int32 get_CurrentBattleRegionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTBATTLEREGIONINDEX_OFFSET))(this);
		}

		::System::Int32 get_TotalAreaCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_TOTALAREACOUNT_OFFSET))(this);
		}

		::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_ECF44733EE59F889(::UnityEngine::Vector3 a1, ::MoleMole::Config::SceneConfigRuntimeDataArea& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_ECF44733EE59F889_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_4C149FCF039BA7FB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_4C149FCF039BA7FB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Boolean Method_1_571BB03219A716AE(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::MoleMole::Config::SceneConfigRuntimeDataArea& a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_571BB03219A716AE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_1_97E5EBAF1F56F742(::System::String* a1, ::MoleMole::Config::SceneConfigRuntimeDataArea& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_97E5EBAF1F56F742_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_EA0BA3E4AF50C583()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_EA0BA3E4AF50C583_OFFSET))(this);
		}
	};
}
