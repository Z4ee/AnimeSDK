#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousDiceSurfaceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1763FBE0)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1763FA60)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1763F730)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1763FA00)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1763FD60)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1763F7B0)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1763FDA0)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1763FF80)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17640550)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17640860)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1763FEE0)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1763FE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceSurfaceExcelTable_TypeDefinitionIndex = 13642;

	class RogueNousDiceSurfaceExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDiceSurfaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E00);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDiceSurfaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E08);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDiceSurfaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousDiceSurfaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x3910);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousDiceSurfaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x3911);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSurfaceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousDiceSurfaceRow* GetData(::System::UInt32 SurfaceID)
		{
			return ((::RPG::GameCore::RogueNousDiceSurfaceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_GETDATA_OFFSET))(SurfaceID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousDiceSurfaceRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousDiceSurfaceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
