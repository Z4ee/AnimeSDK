#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_CurtainSetInfo.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B_1;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x126CEE80)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x126CEEC0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C___OPERATENPCENTITYNAMEBYENTITY_B__56_0_OFFSET UNITYSDK_OFFSET(0x126CEEF0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C___REFRESHBLACKCURTAIN_B__21_0_OFFSET UNITYSDK_OFFSET(0x126CEED0)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c_TypeDefinitionIndex = 54633;

	class VOPerformSubSystem___c : public ::System::Object
	{
	public:
		static ::Class_3_D92ADC48CDFCC09B_1** StaticGet___9__56_0()
		{
			return (::Class_3_D92ADC48CDFCC09B_1**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x32CA0);
		}
		static ::System::Comparison_1<::MoleMole::VOPerformSubSystem_CurtainSetInfo>** StaticGet___9__21_0()
		{
			return (::System::Comparison_1<::MoleMole::VOPerformSubSystem_CurtainSetInfo>**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x32CA8);
		}
		static ::MoleMole::VOPerformSubSystem___c** StaticGet___9()
		{
			return (::MoleMole::VOPerformSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x32CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __RefreshBlackCurtain_b__21_0(::MoleMole::VOPerformSubSystem_CurtainSetInfo l, ::MoleMole::VOPerformSubSystem_CurtainSetInfo r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::VOPerformSubSystem_CurtainSetInfo, ::MoleMole::VOPerformSubSystem_CurtainSetInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C___REFRESHBLACKCURTAIN_B__21_0_OFFSET))(this, l, r);
		}

		::Struct_2_45B62668F0BA5CF8 __OperateNpcEntityNameByEntity_b__56_0(::Struct_2_EB409772687773A2& target)
		{
			return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C___OPERATENPCENTITYNAMEBYENTITY_B__56_0_OFFSET))(this, target);
		}
	};
}
