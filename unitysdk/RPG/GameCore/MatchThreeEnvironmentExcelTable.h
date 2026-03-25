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

#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173B09A0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173B07F0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173B04C0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173B0790)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173B0B20)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173B0540)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173B0B60)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173B0D40)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173B1070)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173B1380)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173B0CA0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173B0C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeEnvironmentExcelTable_TypeDefinitionIndex = 10939;

	class MatchThreeEnvironmentExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x28930);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x28938);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x28940);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0xD570);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0xD571);
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
