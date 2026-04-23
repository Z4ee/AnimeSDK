#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExpTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EXPTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188C3570)
#define RPG_GAMECORE_EXPTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188C33C0)
#define RPG_GAMECORE_EXPTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188C3090)
#define RPG_GAMECORE_EXPTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188C3360)
#define RPG_GAMECORE_EXPTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188C3740)
#define RPG_GAMECORE_EXPTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188C3110)
#define RPG_GAMECORE_EXPTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188C3780)
#define RPG_GAMECORE_EXPTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188C3960)
#define RPG_GAMECORE_EXPTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188C3AF0)
#define RPG_GAMECORE_EXPTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188C3E50)
#define RPG_GAMECORE_EXPTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188C38C0)
#define RPG_GAMECORE_EXPTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188C3820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpTypeExcelTable_TypeDefinitionIndex = 12045;

	class ExpTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(ExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C610);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C618);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C620);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xD570);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xD571);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ExpTypeRow* GetData(::System::UInt32 TypeID, ::System::UInt32 Level)
		{
			return ((::RPG::GameCore::ExpTypeRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE_GETDATA_OFFSET))(TypeID, Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ExpTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
