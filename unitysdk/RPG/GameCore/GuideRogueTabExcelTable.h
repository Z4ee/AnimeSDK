#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GuideRogueTabExcelTable_IndexKey.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GuideRogueTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x189E5510)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189E5390)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x189E5070)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x189E5330)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x189E5660)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189E50F0)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x189E56A0)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x189E5880)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x189E5C10)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189E6060)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x189E57E0)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x189E5740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideRogueTabExcelTable_TypeDefinitionIndex = 12667;

	class GuideRogueTabExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CCE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CCE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CCF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GuideRogueTabExcelTable_TypeDefinitionIndex)->GetStaticField(0xD720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::GuideRogueTabExcelTable_IndexKey, ::RPG::GameCore::GuideRogueTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GuideRogueTabRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::GuideRogueTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GuideRogueTabRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GuideRogueTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
