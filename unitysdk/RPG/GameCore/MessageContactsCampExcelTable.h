#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MessageContactsCampRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AF58B30)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF589C0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AF586B0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AF58960)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AF58CC0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF58730)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF58D00)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF58ED0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AF590E0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF59450)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AF58E30)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF58D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageContactsCampExcelTable_TypeDefinitionIndex = 13891;

	class MessageContactsCampExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageContactsCampExcelTable_TypeDefinitionIndex)->GetStaticField(0x10B00);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageContactsCampExcelTable_TypeDefinitionIndex)->GetStaticField(0x10B08);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageContactsCampExcelTable_TypeDefinitionIndex)->GetStaticField(0x10B10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageContactsCampExcelTable_TypeDefinitionIndex)->GetStaticField(0x5990);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageContactsCampExcelTable_TypeDefinitionIndex)->GetStaticField(0x5991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageContactsCampRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageContactsCampRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageContactsCampRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageContactsCampRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
