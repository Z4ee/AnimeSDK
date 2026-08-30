#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkCardTipsTypeEnum.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkCardTipsTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D995E20)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D995CB0)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D9959A0)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D995C50)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D9961A0)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D995A20)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9961E0)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9963B0)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D996620)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D996990)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D996310)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D996270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex = 11159;

	class ClockParkCardTipsTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B3D0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B3D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B3E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x96E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x96E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkCardTipsTypeRow* GetData(::RPG::GameCore::ClockParkCardTipsTypeEnum a1)
		{
			return ((::RPG::GameCore::ClockParkCardTipsTypeRow*(*)(::RPG::GameCore::ClockParkCardTipsTypeEnum))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkCardTipsTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkCardTipsTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
