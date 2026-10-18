#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyGoodsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3E3D70)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3E3C00)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3E38F0)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3E3BA0)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3E3EC0)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3E3970)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3E3F00)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E40D0)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3E4380)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3E46A0)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3E4030)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3E3F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyGoodsExcelTable_TypeDefinitionIndex = 12619;

	class AlleyGoodsExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGoodsExcelTable_TypeDefinitionIndex)->GetStaticField(0x4B310);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGoodsExcelTable_TypeDefinitionIndex)->GetStaticField(0x4B318);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGoodsExcelTable_TypeDefinitionIndex)->GetStaticField(0x4B320);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyGoodsExcelTable_TypeDefinitionIndex)->GetStaticField(0x11710);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyGoodsExcelTable_TypeDefinitionIndex)->GetStaticField(0x11711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyGoodsRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyGoodsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyGoodsRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyGoodsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
