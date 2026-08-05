#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C31F776B3FE6F486;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183CE960)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183CE9A0)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__GENCOLLECTREWARDLIST_B__3_0_OFFSET UNITYSDK_OFFSET(0x183CE9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaCollectPageController___c_TypeDefinitionIndex = 54905;

	class UICinemaCollectPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_C31F776B3FE6F486*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::Class_1_C31F776B3FE6F486*>**)Il2CppClass::FromTypeDefinitionIndex(UICinemaCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x4D950);
		}
		static ::MoleMole::UICinemaCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UICinemaCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UICinemaCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x4D958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GenCollectRewardList_b__3_0(::Class_1_C31F776B3FE6F486* a, ::Class_1_C31F776B3FE6F486* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C31F776B3FE6F486*, ::Class_1_C31F776B3FE6F486*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__GENCOLLECTREWARDLIST_B__3_0_OFFSET))(this, a, b);
		}
	};
}
