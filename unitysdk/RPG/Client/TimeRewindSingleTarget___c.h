#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F8D9CEC872B937AF.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TimeRewindSingleTarget; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_TIMEREWINDSINGLETARGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE203910)
#define RPG_CLIENT_TIMEREWINDSINGLETARGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE203950)
#define RPG_CLIENT_TIMEREWINDSINGLETARGET___C__MANUALSNAPLOOPREWINDRATIO_B__9_0_OFFSET UNITYSDK_OFFSET(0xE203960)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindSingleTarget___c_TypeDefinitionIndex = 60918;

	class TimeRewindSingleTarget___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::RPG::Client::TimeRewindSingleTarget*, ::Struct_2_F8D9CEC872B937AF>** StaticGet___9__9_0()
		{
			return (::System::Action_2<::RPG::Client::TimeRewindSingleTarget*, ::Struct_2_F8D9CEC872B937AF>**)Il2CppClass::FromTypeDefinitionIndex(TimeRewindSingleTarget___c_TypeDefinitionIndex)->GetStaticField(0x570B0);
		}
		static ::RPG::Client::TimeRewindSingleTarget___c** StaticGet___9()
		{
			return (::RPG::Client::TimeRewindSingleTarget___c**)Il2CppClass::FromTypeDefinitionIndex(TimeRewindSingleTarget___c_TypeDefinitionIndex)->GetStaticField(0x570B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDSINGLETARGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDSINGLETARGET___C__CTOR_OFFSET))(this);
		}

		::System::Void _ManualSnapLoopRewindRatio_b__9_0(::RPG::Client::TimeRewindSingleTarget* a1, ::Struct_2_F8D9CEC872B937AF a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindSingleTarget*, ::Struct_2_F8D9CEC872B937AF))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDSINGLETARGET___C__MANUALSNAPLOOPREWINDRATIO_B__9_0_OFFSET))(this, a1, a2);
		}
	};
}
