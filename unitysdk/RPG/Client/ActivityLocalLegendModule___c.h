#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityLocalLegendData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BFF0D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9BFF110)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__GETALLEASYANDHARDCHALLENGED_B__12_0_OFFSET UNITYSDK_OFFSET(0x9BFF140)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__SHOWNEWCONTENTREDDOT_B__11_0_OFFSET UNITYSDK_OFFSET(0x9BFF120)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendModule___c_TypeDefinitionIndex = 56778;

	class ActivityLocalLegendModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityLocalLegendData*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityLocalLegendData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendModule___c_TypeDefinitionIndex)->GetStaticField(0x33870);
		}
		static ::RPG::Client::ActivityLocalLegendModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityLocalLegendModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendModule___c_TypeDefinitionIndex)->GetStaticField(0x33878);
		}
		static ::System::Func_2<::RPG::Client::ActivityLocalLegendData*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityLocalLegendData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendModule___c_TypeDefinitionIndex)->GetStaticField(0x33880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ShowNewContentRedDot_b__11_0(::RPG::Client::ActivityLocalLegendData* group)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLocalLegendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__SHOWNEWCONTENTREDDOT_B__11_0_OFFSET))(this, group);
		}

		::System::Boolean _GetAllEasyAndHardChallenged_b__12_0(::RPG::Client::ActivityLocalLegendData* group)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLocalLegendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__GETALLEASYANDHARDCHALLENGED_B__12_0_OFFSET))(this, group);
		}
	};
}
