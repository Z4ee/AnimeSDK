#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideChallengeRankRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F5FF30)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F5FDB0)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F5FA80)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F5FD50)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F60100)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F5FB00)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F60140)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F60320)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F60670)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F60980)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F60280)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F601E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideChallengeRankExcelTable_TypeDefinitionIndex = 10247;

	class AetherDivideChallengeRankExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideChallengeRankExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EB50);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideChallengeRankExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EB58);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideChallengeRankExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EB60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideChallengeRankExcelTable_TypeDefinitionIndex)->GetStaticField(0x7E30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideChallengeRankExcelTable_TypeDefinitionIndex)->GetStaticField(0x7E31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideChallengeRankRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideChallengeRankRow* GetData(::System::UInt32 ChallengeRank)
		{
			return ((::RPG::GameCore::AetherDivideChallengeRankRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_GETDATA_OFFSET))(ChallengeRank);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideChallengeRankRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideChallengeRankRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
