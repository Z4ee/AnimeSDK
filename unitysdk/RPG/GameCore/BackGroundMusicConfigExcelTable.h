#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BackGroundMusicConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x194B81E0)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x194B80B0)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x194B7DA0)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x194B8050)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x194B8330)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x194B7E20)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x194B8370)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x194B8540)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x194B88C0)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x194B8BE0)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x194B84A0)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x194B8400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BackGroundMusicConfigExcelTable_TypeDefinitionIndex = 12206;

	class BackGroundMusicConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BackGroundMusicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F50);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BackGroundMusicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F58);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BackGroundMusicConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BackGroundMusicConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BackGroundMusicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BackGroundMusicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BackGroundMusicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BackGroundMusicConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BackGroundMusicConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BackGroundMusicConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BackGroundMusicConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BackGroundMusicConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BackGroundMusicConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BackGroundMusicConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BackGroundMusicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
