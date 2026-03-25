#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VideoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x178EFFF0)
#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x178EFE40)
#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x178EFB10)
#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x178EFDE0)
#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x178F0170)
#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x178EFB90)
#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x178F01B0)
#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x178F0390)
#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x178F05A0)
#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x178F08B0)
#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x178F02F0)
#define RPG_GAMECORE_VIDEOCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x178F0250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VideoConfigExcelTable_TypeDefinitionIndex = 14156;

	class VideoConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(VideoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E8C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VideoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E8C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(VideoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E8D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VideoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7CE0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(VideoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7CE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::VideoConfigRow* GetData(::System::UInt32 VideoID)
		{
			return ((::RPG::GameCore::VideoConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_GETDATA_OFFSET))(VideoID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::VideoConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::VideoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
