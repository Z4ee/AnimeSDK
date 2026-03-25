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

#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17131570)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171313C0)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17131090)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17131360)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17131720)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17131110)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17131760)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17131940)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17131AA0)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17131DB0)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171318A0)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17131800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueFantasticStoryExcelTable_TypeDefinitionIndex = 10715;

	class ConstValueFantasticStoryExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueFantasticStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x28F30);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueFantasticStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x28F38);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueFantasticStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x28F40);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConstValueFantasticStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xD7A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ConstValueFantasticStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xD7A1);
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

		static ::RPG::GameCore::ConstValueFantasticStoryRow* GetData(::System::String* ConstValueName)
		{
			return ((::RPG::GameCore::ConstValueFantasticStoryRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GETDATA_OFFSET))(ConstValueName);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ConstValueFantasticStoryRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ConstValueFantasticStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
