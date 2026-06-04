#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConstValueRogueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19678A70)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19678900)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETUINTVALUE_OFFSET UNITYSDK_OFFSET(0x19679270)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x196785F0)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x196788A0)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19678BE0)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19678670)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19678C20)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19678DF0)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19678F50)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19679350)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19678D50)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19678CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueRogueExcelTable_TypeDefinitionIndex = 13987;

	class ConstValueRogueExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueRogueExcelTable_TypeDefinitionIndex)->GetStaticField(0x10A50);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueRogueExcelTable_TypeDefinitionIndex)->GetStaticField(0x10A58);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueRogueExcelTable_TypeDefinitionIndex)->GetStaticField(0x10A60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ConstValueRogueExcelTable_TypeDefinitionIndex)->GetStaticField(0x5220);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConstValueRogueExcelTable_TypeDefinitionIndex)->GetStaticField(0x5221);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ConstValueRogueRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::ConstValueRogueRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ConstValueRogueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ConstValueRogueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::UInt32 GetUIntValue(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETUINTVALUE_OFFSET))(a1);
		}
	};
}
