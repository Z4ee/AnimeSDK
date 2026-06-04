#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC6E3030)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC6E3070)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__GETNOTEMPTYPLANVIEWMODELS_B__14_0_OFFSET UNITYSDK_OFFSET(0xC6E3080)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetApplyDetailViewModel___c_TypeDefinitionIndex = 62497;

	class RelicPresetApplyDetailViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RelicPresetPlanViewModel*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::RelicPresetPlanViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetApplyDetailViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2B260);
		}
		static ::RPG::Client::RelicPresetApplyDetailViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::RelicPresetApplyDetailViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetApplyDetailViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2B268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNotEmptyPlanViewModels_b__14_0(::RPG::Client::RelicPresetPlanViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicPresetPlanViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__GETNOTEMPTYPLANVIEWMODELS_B__14_0_OFFSET))(this, a1);
		}
	};
}
