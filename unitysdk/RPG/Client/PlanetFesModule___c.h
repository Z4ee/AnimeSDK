#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_910;
namespace RPG::Client { class PlanetFesAvatarData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PLANETFESMODULE___C__CALCINCOMEAFTERSWITCHAVATAR_B__153_1_OFFSET UNITYSDK_OFFSET(0x1C2BBD10)
#define RPG_CLIENT_PLANETFESMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2BBBF0)
#define RPG_CLIENT_PLANETFESMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BBC30)
#define RPG_CLIENT_PLANETFESMODULE___C___COMBINESAMESOURCEBUFFS_B__42_0_OFFSET UNITYSDK_OFFSET(0x1C2BBC40)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c_TypeDefinitionIndex = 66679;

	class PlanetFesModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PlanetFesModule___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesModule___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesModule___c_TypeDefinitionIndex)->GetStaticField(0x5A6D0);
		}
		static ::System::Func_2<::RPG::Client::PlanetFesAvatarData*, ::System::Boolean>** StaticGet___9__153_1()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesAvatarData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesModule___c_TypeDefinitionIndex)->GetStaticField(0x5A6D8);
		}
		static ::System::Func_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_910*>*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_910*>*>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_910*>*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_910*>*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesModule___c_TypeDefinitionIndex)->GetStaticField(0x5A6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_910*>* __CombineSameSourceBuffs_b__42_0(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_910*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_910*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_910*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C___COMBINESAMESOURCEBUFFS_B__42_0_OFFSET))(this, a1);
		}

		::System::Boolean _CalcIncomeAfterSwitchAvatar_b__153_1(::RPG::Client::PlanetFesAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__CALCINCOMEAFTERSWITCHAVATAR_B__153_1_OFFSET))(this, a1);
		}
	};
}
