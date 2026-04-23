#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18693CB0)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18693B30)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18693800)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18693AD0)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18693E30)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18693880)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18693E70)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18694050)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18694820)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18694B30)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18693FB0)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18693F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyEventExcelTable_TypeDefinitionIndex = 11903;

	class AlleyEventExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x25430);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x25438);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x25440);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x9C70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x9C71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyEventRow* GetData(::System::UInt32 EventID)
		{
			return ((::RPG::GameCore::AlleyEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GETDATA_OFFSET))(EventID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyEventRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
