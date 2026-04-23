#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EvolveBuildStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188BD0C0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188BCF40)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188BCC10)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188BCEE0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188BD290)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188BCC90)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188BD2D0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188BD4B0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188BDF30)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188BE250)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188BD410)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188BD370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildStageExcelTable_TypeDefinitionIndex = 10917;

	class EvolveBuildStageExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStageRow*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C490);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C498);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C4A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStageExcelTable_TypeDefinitionIndex)->GetStaticField(0xD3E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStageExcelTable_TypeDefinitionIndex)->GetStaticField(0xD3E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildStageRow* GetData(::System::UInt32 StageMergedID)
		{
			return ((::RPG::GameCore::EvolveBuildStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_GETDATA_OFFSET))(StageMergedID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EvolveBuildStageRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveBuildStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
