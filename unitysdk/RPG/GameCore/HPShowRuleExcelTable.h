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

#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B66CDB0)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B66CC40)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B66C930)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B66CBE0)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B66CF40)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B66C9B0)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B66CF80)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B66D150)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B66D380)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B66D6F0)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B66D0B0)
#define RPG_GAMECORE_HPSHOWRULEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B66D010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HPShowRuleExcelTable_TypeDefinitionIndex = 13216;

	class HPShowRuleExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HPShowRuleExcelTable_TypeDefinitionIndex)->GetStaticField(0x393B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HPShowRuleExcelTable_TypeDefinitionIndex)->GetStaticField(0x393B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HPShowRuleRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HPShowRuleRow*>**)Il2CppClass::FromTypeDefinitionIndex(HPShowRuleExcelTable_TypeDefinitionIndex)->GetStaticField(0x393C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HPShowRuleExcelTable_TypeDefinitionIndex)->GetStaticField(0x9950);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HPShowRuleExcelTable_TypeDefinitionIndex)->GetStaticField(0x9951);
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

		static ::RPG::GameCore::HPShowRuleRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HPShowRuleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HPShowRuleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HPShowRuleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
