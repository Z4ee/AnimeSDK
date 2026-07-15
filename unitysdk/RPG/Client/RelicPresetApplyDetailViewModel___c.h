#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1987D5B0)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1987D5F0)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__GETNOTEMPTYPLANVIEWMODELS_B__14_0_OFFSET UNITYSDK_OFFSET(0x1987D600)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetApplyDetailViewModel___c_TypeDefinitionIndex = 63863;

	class RelicPresetApplyDetailViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RelicPresetApplyDetailViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::RelicPresetApplyDetailViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetApplyDetailViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1CB50);
		}
		static ::System::Func_2<::RPG::Client::RelicPresetPlanViewModel*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::RelicPresetPlanViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetApplyDetailViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1CB58);
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
