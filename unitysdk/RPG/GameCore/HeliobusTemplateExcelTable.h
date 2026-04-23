#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusTemplateRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x189FBAC0)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189FB910)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x189FB5E0)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x189FB8B0)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x189FBC40)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189FB660)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x189FBC80)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x189FBE60)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x189FC200)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189FC510)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x189FBDC0)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x189FBD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusTemplateExcelTable_TypeDefinitionIndex = 13021;

	class HeliobusTemplateExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D410);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D418);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D420);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0xD980);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0xD981);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusTemplateRow* GetData(::System::UInt32 HeliobusTemplateID)
		{
			return ((::RPG::GameCore::HeliobusTemplateRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GETDATA_OFFSET))(HeliobusTemplateID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusTemplateRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusTemplateRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
