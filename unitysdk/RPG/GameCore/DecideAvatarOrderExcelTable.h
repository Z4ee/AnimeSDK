#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DecideAvatarOrderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18857A70)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188578C0)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18857590)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18857860)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18857C40)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18857610)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18857C80)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18857E60)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18858000)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18858360)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18857DC0)
#define RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18857D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecideAvatarOrderExcelTable_TypeDefinitionIndex = 12640;

	class DecideAvatarOrderExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*>**)Il2CppClass::FromTypeDefinitionIndex(DecideAvatarOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x32F80);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DecideAvatarOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x32F88);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DecideAvatarOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x32F90);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DecideAvatarOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0xC6C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DecideAvatarOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0xC6C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecideAvatarOrderRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DecideAvatarOrderRow* GetData(::System::UInt32 ItemID)
		{
			return ((::RPG::GameCore::DecideAvatarOrderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_GETDATA_OFFSET))(ItemID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DecideAvatarOrderRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DecideAvatarOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
