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

#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D1A0E00)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D1A0C90)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D1A0980)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D1A0C30)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D1A0F90)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1A0A00)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1A0FD0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A11A0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D1A1470)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1A17E0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D1A1100)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1A1060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageLinkExcelTable_TypeDefinitionIndex = 14307;

	class MessageLinkExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B7B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B7B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B7C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0xF420);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0xF421);
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
