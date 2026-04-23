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

#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18ADF2D0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18ADF120)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18ADEDF0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18ADF0C0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18ADF4A0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ADEE70)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18ADF4E0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ADF6C0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18ADF8D0)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ADFC30)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18ADF620)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ADF580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageContactsCampExcelTable_TypeDefinitionIndex = 13674;

	class MessageContactsCampExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageContactsCampExcelTable_TypeDefinitionIndex)->GetStaticField(0x24890);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageContactsCampExcelTable_TypeDefinitionIndex)->GetStaticField(0x24898);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactsCampRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageContactsCampExcelTable_TypeDefinitionIndex)->GetStaticField(0x248A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageContactsCampExcelTable_TypeDefinitionIndex)->GetStaticField(0x98B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageContactsCampExcelTable_TypeDefinitionIndex)->GetStaticField(0x98B1);
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

		static ::RPG::GameCore::MessageContactsCampRow* GetData(::System::UInt32 ContactsCamp)
		{
			return ((::RPG::GameCore::MessageContactsCampRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE_GETDATA_OFFSET))(ContactsCamp);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageContactsCampRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageContactsCampRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
