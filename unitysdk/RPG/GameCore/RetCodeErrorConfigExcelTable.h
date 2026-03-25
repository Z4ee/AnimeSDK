#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RetCodeErrorConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175ABD00)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175ABB50)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175AB820)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175ABAF0)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175ABED0)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175AB8A0)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175ABF10)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175AC0F0)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175AC330)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175AC690)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175AC050)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175ABFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetCodeErrorConfigExcelTable_TypeDefinitionIndex = 13383;

	class RetCodeErrorConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RetCodeErrorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x32400);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RetCodeErrorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x32408);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RetCodeErrorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x32410);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RetCodeErrorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x104C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RetCodeErrorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x104C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RetCodeErrorConfigRow* GetData(::System::UInt32 ErrorID)
		{
			return ((::RPG::GameCore::RetCodeErrorConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GETDATA_OFFSET))(ErrorID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RetCodeErrorConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RetCodeErrorConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
