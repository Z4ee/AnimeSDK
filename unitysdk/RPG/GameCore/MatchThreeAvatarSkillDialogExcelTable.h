#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeAvatarSkillDialogRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D2657A0)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D265630)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D265320)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D2655D0)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D265930)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2653A0)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D265970)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D265B40)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D265E30)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2661A0)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D265AA0)
#define RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D265A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeAvatarSkillDialogExcelTable_TypeDefinitionIndex = 11895;

	class MatchThreeAvatarSkillDialogExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeAvatarSkillDialogRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeAvatarSkillDialogRow*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeAvatarSkillDialogExcelTable_TypeDefinitionIndex)->GetStaticField(0x36000);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeAvatarSkillDialogExcelTable_TypeDefinitionIndex)->GetStaticField(0x36008);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeAvatarSkillDialogExcelTable_TypeDefinitionIndex)->GetStaticField(0x36010);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeAvatarSkillDialogExcelTable_TypeDefinitionIndex)->GetStaticField(0xE150);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeAvatarSkillDialogExcelTable_TypeDefinitionIndex)->GetStaticField(0xE151);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeAvatarSkillDialogRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeAvatarSkillDialogRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeAvatarSkillDialogRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeAvatarSkillDialogRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeAvatarSkillDialogRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeAvatarSkillDialogRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreeAvatarSkillDialogRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeAvatarSkillDialogRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEAVATARSKILLDIALOGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
