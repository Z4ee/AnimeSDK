#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HPShowRuleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x189E6E00)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189E6C50)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x189E6920)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x189E6BF0)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x189E6FD0)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189E69A0)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x189E7010)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x189E71F0)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x189E7420)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189E7780)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x189E7150)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x189E70B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HPShowRuleExcelTable_TypeDefinitionIndex = 12982;

	class HPShowRuleExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HPShowRuleRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HPShowRuleRow*>**)Il2CppClass::FromTypeDefinitionIndex(HPShowRuleExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CD00);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HPShowRuleExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CD08);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HPShowRuleExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CD10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HPShowRuleExcelTable_TypeDefinitionIndex)->GetStaticField(0xD740);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HPShowRuleExcelTable_TypeDefinitionIndex)->GetStaticField(0xD741);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HPShowRuleRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HPShowRuleRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HPShowRuleRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HPShowRuleRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HPShowRuleRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::HPShowRuleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HPShowRuleRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HPShowRuleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
