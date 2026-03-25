#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeBasicRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173AED30)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173AEB80)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173AE850)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173AEB20)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173AEF00)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173AE8D0)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173AEF40)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173AF120)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173AF2A0)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173AF600)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173AF080)
#define RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173AEFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeBasicExcelTable_TypeDefinitionIndex = 10949;

	class MatchThreeBasicExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBasicExcelTable_TypeDefinitionIndex)->GetStaticField(0x28820);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBasicExcelTable_TypeDefinitionIndex)->GetStaticField(0x28828);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBasicExcelTable_TypeDefinitionIndex)->GetStaticField(0x28830);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBasicExcelTable_TypeDefinitionIndex)->GetStaticField(0xD520);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeBasicExcelTable_TypeDefinitionIndex)->GetStaticField(0xD521);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBasicRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeBasicRow* GetData(::System::UInt32 StyleID)
		{
			return ((::RPG::GameCore::MatchThreeBasicRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_GETDATA_OFFSET))(StyleID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreeBasicRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeBasicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
