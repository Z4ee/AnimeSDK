#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MessageLinkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AF5FFF0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF5FE80)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AF5FB70)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AF5FE20)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AF60180)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF5FBF0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF601C0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF60390)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AF60660)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF609D0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AF602F0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF60250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageLinkExcelTable_TypeDefinitionIndex = 13887;

	class MessageLinkExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0x40D70);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0x40D78);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0x40D80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0xAE50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0xAE51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageLinkRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageLinkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageLinkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageLinkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
