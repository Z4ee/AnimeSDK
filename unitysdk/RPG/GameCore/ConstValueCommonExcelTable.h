#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConstValueCommonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17130560)
#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171303B0)
#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17130080)
#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17130350)
#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17130710)
#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17130100)
#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17130750)
#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17130930)
#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17130AC0)
#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17130DD0)
#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17130890)
#define RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171307F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueCommonExcelTable_TypeDefinitionIndex = 11937;

	class ConstValueCommonExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueCommonExcelTable_TypeDefinitionIndex)->GetStaticField(0x28EC0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueCommonExcelTable_TypeDefinitionIndex)->GetStaticField(0x28EC8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueCommonRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueCommonRow*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueCommonExcelTable_TypeDefinitionIndex)->GetStaticField(0x28ED0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConstValueCommonExcelTable_TypeDefinitionIndex)->GetStaticField(0xD770);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ConstValueCommonExcelTable_TypeDefinitionIndex)->GetStaticField(0xD771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueCommonRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueCommonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueCommonRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueCommonRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ConstValueCommonRow* GetData(::System::String* ConstValueName)
		{
			return ((::RPG::GameCore::ConstValueCommonRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_GETDATA_OFFSET))(ConstValueName);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ConstValueCommonRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ConstValueCommonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
