#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ResourceOverallRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175A17F0)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175A1640)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175A1310)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175A15E0)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175A19A0)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175A1390)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175A19E0)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175A1BC0)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175A1DA0)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175A20B0)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175A1B20)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175A1A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResourceOverallExcelTable_TypeDefinitionIndex = 13377;

	class ResourceOverallExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ResourceOverallExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D1F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*>**)Il2CppClass::FromTypeDefinitionIndex(ResourceOverallExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D1F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ResourceOverallExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D200);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ResourceOverallExcelTable_TypeDefinitionIndex)->GetStaticField(0xF070);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ResourceOverallExcelTable_TypeDefinitionIndex)->GetStaticField(0xF071);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ResourceOverallRow* GetData(::System::String* PageKey)
		{
			return ((::RPG::GameCore::ResourceOverallRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GETDATA_OFFSET))(PageKey);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ResourceOverallRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ResourceOverallRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
