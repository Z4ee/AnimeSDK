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

#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CE34260)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE340F0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CE34010)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CE34090)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CE33560)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE335A0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE337D0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE339A0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CE33CF0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE343B0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CE33900)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE33860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoFightVOExcelTable_TypeDefinitionIndex = 14948;

	class AutoFightVOExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x46A0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x46A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>**)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x46B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x1590);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x1591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__CCTOR_OFFSET))();
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AutoFightVORow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AutoFightVORow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEM_OFFSET))(a1);
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

		static ::RPG::GameCore::AutoFightVORow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AutoFightVORow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
