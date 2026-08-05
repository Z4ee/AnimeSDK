#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_CurtainSetInfo.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2_1.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B_2;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14106AC0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14106B00)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C___OPERATENPCENTITYNAMEBYENTITY_B__69_0_OFFSET UNITYSDK_OFFSET(0x14106B30)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C___REFRESHBLACKCURTAIN_B__34_0_OFFSET UNITYSDK_OFFSET(0x14106B10)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c_TypeDefinitionIndex = 60225;

	class VOPerformSubSystem___c : public ::System::Object
	{
	public:
		static ::MoleMole::VOPerformSubSystem___c** StaticGet___9()
		{
			return (::MoleMole::VOPerformSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x371D0);
		}
		static ::Class_3_D92ADC48CDFCC09B_2** StaticGet___9__69_0()
		{
			return (::Class_3_D92ADC48CDFCC09B_2**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x371D8);
		}
		static ::System::Comparison_1<::MoleMole::VOPerformSubSystem_CurtainSetInfo>** StaticGet___9__34_0()
		{
			return (::System::Comparison_1<::MoleMole::VOPerformSubSystem_CurtainSetInfo>**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x371E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __RefreshBlackCurtain_b__34_0(::MoleMole::VOPerformSubSystem_CurtainSetInfo l, ::MoleMole::VOPerformSubSystem_CurtainSetInfo r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::VOPerformSubSystem_CurtainSetInfo, ::MoleMole::VOPerformSubSystem_CurtainSetInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C___REFRESHBLACKCURTAIN_B__34_0_OFFSET))(this, l, r);
		}

		::Struct_2_45B62668F0BA5CF8 __OperateNpcEntityNameByEntity_b__69_0(::Struct_2_EB409772687773A2_1& target)
		{
			return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C___OPERATENPCENTITYNAMEBYENTITY_B__69_0_OFFSET))(this, target);
		}
	};
}
