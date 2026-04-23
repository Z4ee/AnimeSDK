#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusChallengeRaidRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x189F1C90)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189F1B10)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x189F17E0)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x189F1AB0)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x189F1E60)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189F1860)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x189F1EA0)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x189F2080)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x189F2310)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189F2620)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x189F1FE0)
#define RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x189F1F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeRaidExcelTable_TypeDefinitionIndex = 13039;

	class HeliobusChallengeRaidExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRaidExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D080);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRaidExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D088);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRaidRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRaidRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRaidExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D090);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRaidExcelTable_TypeDefinitionIndex)->GetStaticField(0xD8B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRaidExcelTable_TypeDefinitionIndex)->GetStaticField(0xD8B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRaidRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRaidRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRaidRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRaidRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusChallengeRaidRow* GetData(::System::UInt32 ChallengeRaidID)
		{
			return ((::RPG::GameCore::HeliobusChallengeRaidRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_GETDATA_OFFSET))(ChallengeRaidID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusChallengeRaidRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusChallengeRaidRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGERAIDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
