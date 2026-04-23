#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_770;
namespace RPG::Client { class PlanetFesAvatarData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PLANETFESMODULE___C__CALCINCOMEAFTERSWITCHAVATAR_B__153_1_OFFSET UNITYSDK_OFFSET(0xACE2EE0)
#define RPG_CLIENT_PLANETFESMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xACE2E40)
#define RPG_CLIENT_PLANETFESMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xACE2E80)
#define RPG_CLIENT_PLANETFESMODULE___C___COMBINESAMESOURCEBUFFS_B__42_0_OFFSET UNITYSDK_OFFSET(0xACE2E90)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c_TypeDefinitionIndex = 61404;

	class PlanetFesModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::PlanetFesAvatarData*, ::System::Boolean>** StaticGet___9__153_1()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesAvatarData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesModule___c_TypeDefinitionIndex)->GetStaticField(0x65AE0);
		}
		static ::RPG::Client::PlanetFesModule___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesModule___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesModule___c_TypeDefinitionIndex)->GetStaticField(0x65AE8);
		}
		static ::System::Func_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_770*>*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_770*>*>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_770*>*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_770*>*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesModule___c_TypeDefinitionIndex)->GetStaticField(0x65AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_770*>* __CombineSameSourceBuffs_b__42_0(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_770*>* x)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_770*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_770*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C___COMBINESAMESOURCEBUFFS_B__42_0_OFFSET))(this, x);
		}

		::System::Boolean _CalcIncomeAfterSwitchAvatar_b__153_1(::RPG::Client::PlanetFesAvatarData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__CALCINCOMEAFTERSWITCHAVATAR_B__153_1_OFFSET))(this, x);
		}
	};
}
