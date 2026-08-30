#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaGroupData; }
namespace RPG::Client { class GachaItemData; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GACHAMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193A30C0)
#define RPG_CLIENT_GACHAMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193A30F0)
#define RPG_CLIENT_GACHAMODULE___C__GETSORTEDGACHAITEMDATAS_B__28_0_OFFSET UNITYSDK_OFFSET(0x193A3100)
#define RPG_CLIENT_GACHAMODULE___C__REFRESHGACHAPOOLSDATA_B__33_0_OFFSET UNITYSDK_OFFSET(0x193A3110)
#define RPG_CLIENT_GACHAMODULE___C___GETLINKEDGACHAGROUPORDER_B__63_0_OFFSET UNITYSDK_OFFSET(0x193A3150)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaModule___c_TypeDefinitionIndex = 64364;

	class GachaModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GachaModule___c_TypeDefinitionIndex)->GetStaticField(0x18D00);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>, ::System::Boolean>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GachaModule___c_TypeDefinitionIndex)->GetStaticField(0x18D08);
		}
		static ::RPG::Client::GachaModule___c** StaticGet___9()
		{
			return (::RPG::Client::GachaModule___c**)Il2CppClass::FromTypeDefinitionIndex(GachaModule___c_TypeDefinitionIndex)->GetStaticField(0x18D10);
		}
		static ::System::Func_2<::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GachaModule___c_TypeDefinitionIndex)->GetStaticField(0x18D18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GachaItemData* _GetSortedGachaItemDatas_b__28_0(::RPG::Client::GachaItemData* a1)
		{
			return ((::RPG::Client::GachaItemData*(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__GETSORTEDGACHAITEMDATAS_B__28_0_OFFSET))(this, a1);
		}

		::System::Boolean _RefreshGachaPoolsData_b__33_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__REFRESHGACHAPOOLSDATA_B__33_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetLinkedGachaGroupOrder_b__63_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C___GETLINKEDGACHAGROUPORDER_B__63_0_OFFSET))(this, a1);
		}
	};
}
