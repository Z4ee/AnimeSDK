#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GuideChallengeTabExcelTable_IndexKey.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GuideChallengeTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1728E3E0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1728E230)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1728DF10)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1728E1D0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1728E560)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1728DF90)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1728E5A0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1728E780)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1728EB30)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1728EFB0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1728E6E0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1728E640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideChallengeTabExcelTable_TypeDefinitionIndex = 12227;

	class GuideChallengeTabExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GuideChallengeTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x22F60);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(GuideChallengeTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x22F68);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GuideChallengeTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x22F70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GuideChallengeTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x9200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GuideChallengeTabRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::GuideChallengeTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GuideChallengeTabRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GuideChallengeTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
