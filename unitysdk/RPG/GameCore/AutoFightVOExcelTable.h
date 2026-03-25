#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AutoFightVORow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F92550)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F923A0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F92070)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F92340)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F926D0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F920F0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F92710)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F928F0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F92C40)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F92F50)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F92850)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F927B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoFightVOExcelTable_TypeDefinitionIndex = 13854;

	class AutoFightVOExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>**)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x1FE60);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x1FE68);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x1FE70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x85F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x85F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AutoFightVORow* GetData(::System::UInt32 Mode)
		{
			return ((::RPG::GameCore::AutoFightVORow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GETDATA_OFFSET))(Mode);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AutoFightVORow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AutoFightVORow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
