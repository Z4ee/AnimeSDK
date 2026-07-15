#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityLocalLegendLevelData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A77260)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19A772A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA___C__GET_SHOWREDDOT_B__33_0_OFFSET UNITYSDK_OFFSET(0x19A772B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendData___c_TypeDefinitionIndex = 58819;

	class ActivityLocalLegendData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityLocalLegendLevelData*, ::System::Boolean>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityLocalLegendLevelData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendData___c_TypeDefinitionIndex)->GetStaticField(0x436D0);
		}
		static ::RPG::Client::ActivityLocalLegendData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityLocalLegendData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendData___c_TypeDefinitionIndex)->GetStaticField(0x436D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ShowRedDot_b__33_0(::RPG::Client::ActivityLocalLegendLevelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA___C__GET_SHOWREDDOT_B__33_0_OFFSET))(this, a1);
		}
	};
}
