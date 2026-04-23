#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeEnvironmentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18ABEB00)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18ABE950)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18ABE620)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18ABE8F0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18ABEC80)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ABE6A0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18ABECC0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ABEEA0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18ABF1D0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ABF4E0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18ABEE00)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ABED60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeEnvironmentExcelTable_TypeDefinitionIndex = 11343;

	class MatchThreeEnvironmentExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x344C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x344C8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x344D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0xCDF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0xCDF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeEnvironmentRow* GetData(::System::UInt32 EnvironmentID)
		{
			return ((::RPG::GameCore::MatchThreeEnvironmentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GETDATA_OFFSET))(EnvironmentID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreeEnvironmentRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeEnvironmentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
