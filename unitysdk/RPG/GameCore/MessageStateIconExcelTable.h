#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MessageStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MessageStateIconRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173D9770)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173D95C0)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173D9290)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173D9560)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173D9940)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173D9310)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173D9980)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173D9B60)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173D9CF0)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173DA050)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173D9AC0)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173D9A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageStateIconExcelTable_TypeDefinitionIndex = 13220;

	class MessageStateIconExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageStateIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x29900);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageStateIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x29908);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageStateIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x29910);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageStateIconExcelTable_TypeDefinitionIndex)->GetStaticField(0xDB30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageStateIconExcelTable_TypeDefinitionIndex)->GetStaticField(0xDB31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageStateIconRow* GetData(::RPG::GameCore::MessageStateType ID)
		{
			return ((::RPG::GameCore::MessageStateIconRow*(*)(::RPG::GameCore::MessageStateType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageStateIconRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageStateIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
