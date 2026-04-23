#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AD5A9DCE6DAC51CE;
namespace RPG::Client { class EvolveBuildResultBarData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2BE6E0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA2BE720)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0xA2BE730)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_1_OFFSET UNITYSDK_OFFSET(0xA2BE750)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildLevelFromProto___c_TypeDefinitionIndex = 58792;

	class EvolveBuildLevelFromProto___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_AD5A9DCE6DAC51CE*, ::System::Double>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_1_AD5A9DCE6DAC51CE*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildLevelFromProto___c_TypeDefinitionIndex)->GetStaticField(0xC1E0);
		}
		static ::System::Comparison_1<::RPG::Client::EvolveBuildResultBarData*>** StaticGet___9__5_1()
		{
			return (::System::Comparison_1<::RPG::Client::EvolveBuildResultBarData*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildLevelFromProto___c_TypeDefinitionIndex)->GetStaticField(0xC1E8);
		}
		static ::RPG::Client::EvolveBuildLevelFromProto___c** StaticGet___9()
		{
			return (::RPG::Client::EvolveBuildLevelFromProto___c**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildLevelFromProto___c_TypeDefinitionIndex)->GetStaticField(0xC1F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__CTOR_OFFSET))(this);
		}

		::System::Double _GetResultBarData_b__5_0(::Class_1_AD5A9DCE6DAC51CE* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_AD5A9DCE6DAC51CE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_0_OFFSET))(this, x);
		}

		::System::Int32 _GetResultBarData_b__5_1(::RPG::Client::EvolveBuildResultBarData* x, ::RPG::Client::EvolveBuildResultBarData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildResultBarData*, ::RPG::Client::EvolveBuildResultBarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_1_OFFSET))(this, x, y);
		}
	};
}
