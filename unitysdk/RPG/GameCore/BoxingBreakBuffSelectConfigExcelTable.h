#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BoxingBreakBuffSelectConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16FF16D0)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FF1520)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16FF11F0)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16FF14C0)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16FF18A0)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FF1270)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16FF18E0)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FF1AC0)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16FF1CA0)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FF2000)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16FF1A20)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FF1980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingBreakBuffSelectConfigExcelTable_TypeDefinitionIndex = 11793;

	class BoxingBreakBuffSelectConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingBreakBuffSelectConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingBreakBuffSelectConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingBreakBuffSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23830);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingBreakBuffSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23838);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingBreakBuffSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23840);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BoxingBreakBuffSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9450);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BoxingBreakBuffSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9451);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingBreakBuffSelectConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingBreakBuffSelectConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingBreakBuffSelectConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingBreakBuffSelectConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BoxingBreakBuffSelectConfigRow* GetData(::System::UInt32 BoxingClubBuffID)
		{
			return ((::RPG::GameCore::BoxingBreakBuffSelectConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_GETDATA_OFFSET))(BoxingClubBuffID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BoxingBreakBuffSelectConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BoxingBreakBuffSelectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
