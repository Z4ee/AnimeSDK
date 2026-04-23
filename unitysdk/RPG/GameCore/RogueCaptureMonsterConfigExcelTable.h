#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueCaptureMonsterConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18CF3A50)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18CF38A0)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18CF3570)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18CF3840)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18CF3C20)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CF35F0)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18CF3C60)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CF3E40)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18CF40A0)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CF4400)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18CF3DA0)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CF3D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex = 13869;

	class RogueCaptureMonsterConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x42600);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x42608);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x42610);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEE70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEE71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueCaptureMonsterConfigRow* GetData(::System::UInt32 ParamGroupID)
		{
			return ((::RPG::GameCore::RogueCaptureMonsterConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GETDATA_OFFSET))(ParamGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueCaptureMonsterConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueCaptureMonsterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
