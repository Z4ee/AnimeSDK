#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C553D56653AF94EE;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE73560)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDE73590)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__LOADCOMPARECONFIG_B__1_0_OFFSET UNITYSDK_OFFSET(0xDE735A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RewardDisplaySortComparer___c_TypeDefinitionIndex = 65804;

	class RewardDisplaySortComparer___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RewardDisplaySortComparer___c** StaticGet___9()
		{
			return (::RPG::Client::RewardDisplaySortComparer___c**)Il2CppClass::FromTypeDefinitionIndex(RewardDisplaySortComparer___c_TypeDefinitionIndex)->GetStaticField(0x61F20);
		}
		static ::System::Comparison_1<::Class_1_C553D56653AF94EE*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::Class_1_C553D56653AF94EE*>**)Il2CppClass::FromTypeDefinitionIndex(RewardDisplaySortComparer___c_TypeDefinitionIndex)->GetStaticField(0x61F28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _LoadCompareConfig_b__1_0(::Class_1_C553D56653AF94EE* a1, ::Class_1_C553D56653AF94EE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C553D56653AF94EE*, ::Class_1_C553D56653AF94EE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__LOADCOMPARECONFIG_B__1_0_OFFSET))(this, a1, a2);
		}
	};
}
