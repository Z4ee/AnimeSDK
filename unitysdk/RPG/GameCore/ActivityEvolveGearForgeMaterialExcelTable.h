#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityEvolveGearForgeMaterialRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_GETANOTHERMATERIALGEARID_OFFSET UNITYSDK_OFFSET(0x1AAEA0A0)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AAE95D0)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AAE9460)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_GETRESONANCELIST_OFFSET UNITYSDK_OFFSET(0x1AAEA730)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AAE9150)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AAE9400)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AAE9760)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_ISMATERIALOFFORGE_OFFSET UNITYSDK_OFFSET(0x1AAE8D10)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAE91D0)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1AAE9ED0)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAE97A0)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAE9970)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AAE9B60)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAEAEF0)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__GETRESONANCELIST_G___GETPLUGINMATERIAL_20_1_OFFSET UNITYSDK_OFFSET(0x1AAEAD90)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__GETRESONANCELIST_G___RECORDRESONANCEPAIR_20_0_OFFSET UNITYSDK_OFFSET(0x1AAEAAC0)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AAE98D0)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAE9830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveGearForgeMaterialExcelTable_TypeDefinitionIndex = 11016;

	class ActivityEvolveGearForgeMaterialExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveGearForgeMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A3B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__PairMaterialMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveGearForgeMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A3B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__MaterialOfForge()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveGearForgeMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A3C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveGearForgeMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A3C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>** StaticGet__ResonanceMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveGearForgeMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A3D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveGearForgeMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A3D8);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveGearForgeMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0x6140);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveGearForgeMaterialExcelTable_TypeDefinitionIndex)->GetStaticField(0x6141);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityEvolveGearForgeMaterialRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Boolean IsMaterialOfForge(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_ISMATERIALOFFORGE_OFFSET))(a1, a2);
		}

		static ::System::Nullable_1<::System::UInt32> GetAnotherMaterialGearID(::System::UInt32 a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_GETANOTHERMATERIALGEARID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>* GetResonanceList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE_GETRESONANCELIST_OFFSET))(a1);
		}

		static ::System::Void _GetResonanceList_g___RecordResonancePair_20_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__GETRESONANCELIST_G___RECORDRESONANCEPAIR_20_0_OFFSET))(a1, a2);
		}

		static ::System::Nullable_1<::System::UInt32> _GetResonanceList_g___GetPluginMaterial_20_1(::System::UInt32 a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALEXCELTABLE__GETRESONANCELIST_G___GETPLUGINMATERIAL_20_1_OFFSET))(a1);
		}
	};
}
