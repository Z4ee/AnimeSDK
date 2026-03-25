#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpaceZooSpecialCatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17757570)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x177573F0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x177570C0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17757390)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x177576F0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17757140)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17757730)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17757910)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17757E10)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17758120)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17757870)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x177577D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSpecialCatExcelTable_TypeDefinitionIndex = 11293;

	class SpaceZooSpecialCatExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSpecialCatExcelTable_TypeDefinitionIndex)->GetStaticField(0x11380);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSpecialCatExcelTable_TypeDefinitionIndex)->GetStaticField(0x11388);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSpecialCatExcelTable_TypeDefinitionIndex)->GetStaticField(0x11390);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSpecialCatExcelTable_TypeDefinitionIndex)->GetStaticField(0x53B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSpecialCatExcelTable_TypeDefinitionIndex)->GetStaticField(0x53B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooSpecialCatRow* GetData(::System::UInt32 SpecialCatID)
		{
			return ((::RPG::GameCore::SpaceZooSpecialCatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETDATA_OFFSET))(SpecialCatID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooSpecialCatRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooSpecialCatRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
