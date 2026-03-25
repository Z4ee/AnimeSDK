#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCLayerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175FFA10)
#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175FF860)
#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175FF530)
#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175FF800)
#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175FFBE0)
#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175FF5B0)
#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175FFC20)
#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175FFE00)
#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x176000B0)
#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17600410)
#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175FFD60)
#define RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175FFCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCLayerExcelTable_TypeDefinitionIndex = 13498;

	class RogueDLCLayerExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x34E30);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCLayerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCLayerRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x34E38);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x34E40);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x108D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x108D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCLayerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCLayerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCLayerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCLayerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCLayerRow* GetData(::System::UInt32 LayerID)
		{
			return ((::RPG::GameCore::RogueDLCLayerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_GETDATA_OFFSET))(LayerID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCLayerRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCLayerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
