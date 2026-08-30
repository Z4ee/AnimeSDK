#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8D398246A70BD04C;
namespace RPG::Client { class EvolveBuildResultBarData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1994BB70)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1994BBB0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0x1994BBC0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_1_OFFSET UNITYSDK_OFFSET(0x1994BBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildLevelFromProto___c_TypeDefinitionIndex = 63860;

	class EvolveBuildLevelFromProto___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_8D398246A70BD04C*, ::System::Double>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_1_8D398246A70BD04C*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildLevelFromProto___c_TypeDefinitionIndex)->GetStaticField(0x64450);
		}
		static ::RPG::Client::EvolveBuildLevelFromProto___c** StaticGet___9()
		{
			return (::RPG::Client::EvolveBuildLevelFromProto___c**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildLevelFromProto___c_TypeDefinitionIndex)->GetStaticField(0x64458);
		}
		static ::System::Comparison_1<::RPG::Client::EvolveBuildResultBarData*>** StaticGet___9__5_1()
		{
			return (::System::Comparison_1<::RPG::Client::EvolveBuildResultBarData*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildLevelFromProto___c_TypeDefinitionIndex)->GetStaticField(0x64460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__CTOR_OFFSET))(this);
		}

		::System::Double _GetResultBarData_b__5_0(::Class_1_8D398246A70BD04C* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_8D398246A70BD04C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetResultBarData_b__5_1(::RPG::Client::EvolveBuildResultBarData* a1, ::RPG::Client::EvolveBuildResultBarData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildResultBarData*, ::RPG::Client::EvolveBuildResultBarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_1_OFFSET))(this, a1, a2);
		}
	};
}
