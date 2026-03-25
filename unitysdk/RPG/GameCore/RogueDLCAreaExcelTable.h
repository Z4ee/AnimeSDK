#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCAreaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175F6980)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175F6800)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175F64D0)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175F67A0)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175F6B50)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175F6550)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175F6B90)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175F6D70)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175F7410)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175F7720)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175F6CD0)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175F6C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAreaExcelTable_TypeDefinitionIndex = 13493;

	class RogueDLCAreaExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B60);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B68);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x107A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x107A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAreaRow* GetData(::System::UInt32 AreaID)
		{
			return ((::RPG::GameCore::RogueDLCAreaRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GETDATA_OFFSET))(AreaID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCAreaRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAreaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
