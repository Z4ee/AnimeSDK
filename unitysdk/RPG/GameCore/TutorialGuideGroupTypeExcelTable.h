#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialGuideGroupTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x190D96C0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x190D9510)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x190D91E0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x190D94B0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x190D9890)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x190D9260)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x190D98D0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190D9AB0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x190D9CC0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190DA020)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x190D9A10)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x190D9970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideGroupTypeExcelTable_TypeDefinitionIndex = 14597;

	class TutorialGuideGroupTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideGroupTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x10C10);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideGroupTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x10C18);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideGroupTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x10C20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideGroupTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x52D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideGroupTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x52D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TutorialGuideGroupTypeRow* GetData(::System::UInt32 TutorialType)
		{
			return ((::RPG::GameCore::TutorialGuideGroupTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_GETDATA_OFFSET))(TutorialType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TutorialGuideGroupTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialGuideGroupTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
