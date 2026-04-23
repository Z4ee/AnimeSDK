#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_96;
namespace RPG::Client { class RogueWorkBenchFuncItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_GET_FUNCITEMS_OFFSET UNITYSDK_OFFSET(0xB127470)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_GET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xB127450)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_SET_FUNCITEMS_OFFSET UNITYSDK_OFFSET(0xB127480)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_SET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xB127460)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB127490)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__GETFUNCLISTINMAGICROGUE_OFFSET UNITYSDK_OFFSET(0xB127C00)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__GETFUNCLISTINTOURNROGUE_OFFSET UNITYSDK_OFFSET(0xB127B80)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__SORTITEMS_OFFSET UNITYSDK_OFFSET(0xB127880)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchFuncCollection_TypeDefinitionIndex = 62043;

	class RogueWorkBenchFuncCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchFuncItem*>* _FuncItems_k__BackingField; // 0x10
		::System::UInt32 _PropEntityID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 propEntityID, ::Class_1_455008579EB95638_96* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_455008579EB95638_96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__CTOR_OFFSET))(this, propEntityID, proto);
		}

		::System::UInt32 get_PropEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_GET_PROPENTITYID_OFFSET))(this);
		}

		::System::Void set_PropEntityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_SET_PROPENTITYID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchFuncItem*>* get_FuncItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchFuncItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_GET_FUNCITEMS_OFFSET))(this);
		}

		::System::Void set_FuncItems(::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchFuncItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchFuncItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_SET_FUNCITEMS_OFFSET))(this, value);
		}

		::System::Void _SortItems(::System::UInt32 workBenchID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__SORTITEMS_OFFSET))(this, workBenchID);
		}

		::Il2CppArray<::System::UInt32>* _GetFuncListInTournRogue(::System::UInt32 workBenchID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__GETFUNCLISTINTOURNROGUE_OFFSET))(this, workBenchID);
		}

		::Il2CppArray<::System::UInt32>* _GetFuncListInMagicRogue(::System::UInt32 workBenchID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__GETFUNCLISTINMAGICROGUE_OFFSET))(this, workBenchID);
		}
	};
}
