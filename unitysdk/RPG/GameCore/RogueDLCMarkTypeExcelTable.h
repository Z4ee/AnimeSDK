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

#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D10550)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D103A0)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D10070)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D10340)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D10720)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D100F0)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D10760)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D10940)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D10B90)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D10EF0)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D108A0)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D10800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMarkTypeExcelTable_TypeDefinitionIndex = 13989;

	class RogueDLCMarkTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMarkTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x43690);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMarkTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMarkTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMarkTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x43698);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMarkTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x436A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMarkTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xF1A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMarkTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xF1A1);
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

		static ::RPG::GameCore::RogueDLCMarkTypeRow* GetData(::System::UInt32 MarkTypeID)
		{
			return ((::RPG::GameCore::RogueDLCMarkTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE_GETDATA_OFFSET))(MarkTypeID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCMarkTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCMarkTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
