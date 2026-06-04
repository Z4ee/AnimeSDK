#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaGroupData; }
namespace RPG::Client { class GachaItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GACHAMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAB3FE0)
#define RPG_CLIENT_GACHAMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBAB4020)
#define RPG_CLIENT_GACHAMODULE___C__GETSORTEDGACHAITEMDATAS_B__27_0_OFFSET UNITYSDK_OFFSET(0xBAB4030)
#define RPG_CLIENT_GACHAMODULE___C__REFRESHGACHAPOOLSDATA_B__32_0_OFFSET UNITYSDK_OFFSET(0xBAB4040)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaModule___c_TypeDefinitionIndex = 60098;

	class GachaModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GachaModule___c_TypeDefinitionIndex)->GetStaticField(0x27800);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GachaModule___c_TypeDefinitionIndex)->GetStaticField(0x27808);
		}
		static ::RPG::Client::GachaModule___c** StaticGet___9()
		{
			return (::RPG::Client::GachaModule___c**)Il2CppClass::FromTypeDefinitionIndex(GachaModule___c_TypeDefinitionIndex)->GetStaticField(0x27810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GachaItemData* _GetSortedGachaItemDatas_b__27_0(::RPG::Client::GachaItemData* a1)
		{
			return ((::RPG::Client::GachaItemData*(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__GETSORTEDGACHAITEMDATAS_B__27_0_OFFSET))(this, a1);
		}

		::System::Boolean _RefreshGachaPoolsData_b__32_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__REFRESHGACHAPOOLSDATA_B__32_0_OFFSET))(this, a1);
		}
	};
}
