#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusPostImgRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172A2B60)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172A29B0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172A2680)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172A2950)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172A2D30)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172A2700)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172A2D70)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172A2F50)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172A30D0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172A3430)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172A2EB0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172A2E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostImgExcelTable_TypeDefinitionIndex = 12586;

	class HeliobusPostImgExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x23CC0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x23CC8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x23CD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x9610);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x9611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusPostImgRow* GetData(::System::UInt32 PostImgID)
		{
			return ((::RPG::GameCore::HeliobusPostImgRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETDATA_OFFSET))(PostImgID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusPostImgRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusPostImgRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
