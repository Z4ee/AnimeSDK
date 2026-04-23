#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaGroupData; }
namespace RPG::Client { class GachaItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GACHAMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA419110)
#define RPG_CLIENT_GACHAMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA419150)
#define RPG_CLIENT_GACHAMODULE___C__GETSORTEDGACHAITEMDATAS_B__27_0_OFFSET UNITYSDK_OFFSET(0xA419160)
#define RPG_CLIENT_GACHAMODULE___C__REFRESHGACHAPOOLSDATA_B__32_0_OFFSET UNITYSDK_OFFSET(0xA419170)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaModule___c_TypeDefinitionIndex = 59164;

	class GachaModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GachaModule___c_TypeDefinitionIndex)->GetStaticField(0x15130);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GachaModule___c_TypeDefinitionIndex)->GetStaticField(0x15138);
		}
		static ::RPG::Client::GachaModule___c** StaticGet___9()
		{
			return (::RPG::Client::GachaModule___c**)Il2CppClass::FromTypeDefinitionIndex(GachaModule___c_TypeDefinitionIndex)->GetStaticField(0x15140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GachaItemData* _GetSortedGachaItemDatas_b__27_0(::RPG::Client::GachaItemData* i)
		{
			return ((::RPG::Client::GachaItemData*(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__GETSORTEDGACHAITEMDATAS_B__27_0_OFFSET))(this, i);
		}

		::System::Boolean _RefreshGachaPoolsData_b__32_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*> pair)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__REFRESHGACHAPOOLSDATA_B__32_0_OFFSET))(this, pair);
		}
	};
}
