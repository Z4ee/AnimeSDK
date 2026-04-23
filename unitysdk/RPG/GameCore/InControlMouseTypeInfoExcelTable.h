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

#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A1AF50)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A1ADA0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A1AA70)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A1AD40)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A1B100)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A1AAF0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A1B140)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A1B320)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A1B4E0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A1B7F0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A1B280)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A1B1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlMouseTypeInfoExcelTable_TypeDefinitionIndex = 13093;

	class InControlMouseTypeInfoExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InControlMouseTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EA10);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(InControlMouseTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EA18);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InControlMouseTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EA20);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InControlMouseTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xE010);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InControlMouseTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xE011);
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
