#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRankIconRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19402160)
#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19401FF0)
#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19401CE0)
#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19401F90)
#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x194022F0)
#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19401D60)
#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19402330)
#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19402500)
#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19402730)
#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19402AA0)
#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19402460)
#define RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x194023C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRankIconExcelTable_TypeDefinitionIndex = 10771;

	class ActivityRankIconExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRankIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B8B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRankIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B8B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRankIconRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRankIconRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRankIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B8C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityRankIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x11EB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityRankIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x11EB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRankIconRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRankIconRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRankIconRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRankIconRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRankIconRow* GetData(::RPG::GameCore::ActivityRank a1)
		{
			return ((::RPG::GameCore::ActivityRankIconRow*(*)(::RPG::GameCore::ActivityRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityRankIconRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRankIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
