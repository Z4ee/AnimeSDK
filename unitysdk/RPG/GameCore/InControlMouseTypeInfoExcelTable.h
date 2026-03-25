#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class InControlMouseTypeInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172B89A0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172B87F0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172B84C0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172B8790)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172B8B50)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172B8540)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172B8B90)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172B8D70)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172B8F30)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172B9240)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172B8CD0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172B8C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlMouseTypeInfoExcelTable_TypeDefinitionIndex = 12624;

	class InControlMouseTypeInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(InControlMouseTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x23FE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InControlMouseTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x23FE8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InControlMouseTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x23FF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InControlMouseTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x98A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InControlMouseTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x98A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InControlMouseTypeInfoRow* GetData(::System::String* controlType)
		{
			return ((::RPG::GameCore::InControlMouseTypeInfoRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GETDATA_OFFSET))(controlType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InControlMouseTypeInfoRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::InControlMouseTypeInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
