#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace RPG::Client::FateRin::HouguMap { class HouguMapFightViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFA1F80)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFA1FC0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__GET_ISALLNORMALFIGHTSFINISHED_B__12_0_OFFSET UNITYSDK_OFFSET(0xCFA2120)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_0_OFFSET UNITYSDK_OFFSET(0xCFA1FD0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_2_OFFSET UNITYSDK_OFFSET(0xCFA2000)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_3_OFFSET UNITYSDK_OFFSET(0xCFA20C0)

namespace RPG::Client::FateRin::HouguMap
{
	inline static constexpr unsigned int FateRinHouguMapViewModel___c_TypeDefinitionIndex = 80765;

	class FateRinHouguMapViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::HouguMap::FateRinHouguMapViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::HouguMap::FateRinHouguMapViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinHouguMapViewModel___c_TypeDefinitionIndex)->GetStaticField(0x57250);
		}
		static ::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>** StaticGet___9__3_3()
		{
			return (::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinHouguMapViewModel___c_TypeDefinitionIndex)->GetStaticField(0x57258);
		}
		static ::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinHouguMapViewModel___c_TypeDefinitionIndex)->GetStaticField(0x57260);
		}
		static ::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinHouguMapViewModel___c_TypeDefinitionIndex)->GetStaticField(0x57268);
		}
		static ::System::Func_2<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinHouguMapViewModel___c_TypeDefinitionIndex)->GetStaticField(0x57270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __BuildFightViewModels_b__3_0(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_0_OFFSET))(this, a1);
		}

		::System::Boolean __BuildFightViewModels_b__3_2(::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_2_OFFSET))(this, a1);
		}

		::System::Boolean __BuildFightViewModels_b__3_3(::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_3_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsAllNormalFightsFinished_b__12_0(::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__GET_ISALLNORMALFIGHTSFINISHED_B__12_0_OFFSET))(this, a1);
		}
	};
}
