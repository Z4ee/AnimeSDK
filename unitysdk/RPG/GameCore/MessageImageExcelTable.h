#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MessageImageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173D4250)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173D40A0)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173D3D70)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173D4040)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173D43D0)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173D3DF0)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173D4410)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173D45F0)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173D4790)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173D4AA0)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173D4550)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173D44B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageImageExcelTable_TypeDefinitionIndex = 13203;

	class MessageImageExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageImageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageImageRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x296E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x296E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x296F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageImageExcelTable_TypeDefinitionIndex)->GetStaticField(0xDA70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageImageExcelTable_TypeDefinitionIndex)->GetStaticField(0xDA71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageImageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageImageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageImageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageImageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageImageRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MessageImageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageImageRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageImageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
