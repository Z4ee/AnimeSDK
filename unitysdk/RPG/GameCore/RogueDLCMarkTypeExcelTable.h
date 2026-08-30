#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCMarkTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D92BFA0)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D92BE30)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D92BB20)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D92BDD0)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D92C130)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D92BBA0)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D92C170)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92C340)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D92C590)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D92C900)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D92C2A0)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D92C200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMarkTypeExcelTable_TypeDefinitionIndex = 14621;

	class RogueDLCMarkTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMarkTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMarkTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMarkTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xDBD0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMarkTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xDBD8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMarkTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xDBE0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMarkTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x4240);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMarkTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x4241);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMarkTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMarkTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMarkTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMarkTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCMarkTypeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCMarkTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCMarkTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCMarkTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
