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

#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19911C20)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19911AB0)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199117A0)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19911A50)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19911DB0)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19911820)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19911DF0)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19911FC0)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19912190)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19912500)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19911F20)
#define RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19911E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageImageExcelTable_TypeDefinitionIndex = 13734;

	class MessageImageExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageImageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageImageRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CC90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CC98);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CCA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x9C50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x9C51);
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

		static ::RPG::GameCore::MessageImageRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageImageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageImageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageImageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEIMAGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
