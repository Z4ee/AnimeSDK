#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2E687B98F61BD107;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB01ABD0)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB01AC00)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__LOADCOMPARECONFIG_B__1_0_OFFSET UNITYSDK_OFFSET(0xB01AC10)

namespace RPG::Client
{
	inline static constexpr unsigned int RewardDisplaySortComparer___c_TypeDefinitionIndex = 60523;

	class RewardDisplaySortComparer___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RewardDisplaySortComparer___c** StaticGet___9()
		{
			return (::RPG::Client::RewardDisplaySortComparer___c**)Il2CppClass::FromTypeDefinitionIndex(RewardDisplaySortComparer___c_TypeDefinitionIndex)->GetStaticField(0x17000);
		}
		static ::System::Comparison_1<::Class_1_2E687B98F61BD107*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::Class_1_2E687B98F61BD107*>**)Il2CppClass::FromTypeDefinitionIndex(RewardDisplaySortComparer___c_TypeDefinitionIndex)->GetStaticField(0x17008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _LoadCompareConfig_b__1_0(::Class_1_2E687B98F61BD107* item1, ::Class_1_2E687B98F61BD107* item2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_2E687B98F61BD107*, ::Class_1_2E687B98F61BD107*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__LOADCOMPARECONFIG_B__1_0_OFFSET))(this, item1, item2);
		}
	};
}
