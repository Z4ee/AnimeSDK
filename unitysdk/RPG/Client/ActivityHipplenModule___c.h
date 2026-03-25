#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYHIPPLENMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F46790)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F467D0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE___C___ONGETHIPPLENINHERITSCRSP_B__8_0_OFFSET UNITYSDK_OFFSET(0x8F467E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHipplenModule___c_TypeDefinitionIndex = 49920;

	class ActivityHipplenModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenModule___c_TypeDefinitionIndex)->GetStaticField(0x2BF20);
		}
		static ::RPG::Client::ActivityHipplenModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityHipplenModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenModule___c_TypeDefinitionIndex)->GetStaticField(0x2BF28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __OnGetHipplenInheritScRsp_b__8_0(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* x, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE___C___ONGETHIPPLENINHERITSCRSP_B__8_0_OFFSET))(this, x, y);
		}
	};
}
