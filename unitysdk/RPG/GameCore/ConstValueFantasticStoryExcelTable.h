#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConstValueFantasticStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CFFD880)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CFFD710)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CFFD400)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CFFD6B0)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CFFD9F0)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFFD480)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFFDA30)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFFDC00)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CFFDD60)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFFE080)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CFFDB60)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFFDAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueFantasticStoryExcelTable_TypeDefinitionIndex = 11456;

	class ConstValueFantasticStoryExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueFantasticStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E220);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueFantasticStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E228);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueFantasticStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E230);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConstValueFantasticStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xA270);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ConstValueFantasticStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xA271);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ConstValueFantasticStoryRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::ConstValueFantasticStoryRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ConstValueFantasticStoryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ConstValueFantasticStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
