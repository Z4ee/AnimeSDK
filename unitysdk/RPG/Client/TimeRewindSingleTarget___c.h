#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TimeRewindSingleTarget; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_TIMEREWINDSINGLETARGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA50C80)
#define RPG_CLIENT_TIMEREWINDSINGLETARGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA50CC0)
#define RPG_CLIENT_TIMEREWINDSINGLETARGET___C__MANUALSNAPLOOPREWINDRATIO_B__9_0_OFFSET UNITYSDK_OFFSET(0xCA50CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindSingleTarget___c_TypeDefinitionIndex = 56844;

	class TimeRewindSingleTarget___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::RPG::Client::TimeRewindSingleTarget*, ::Struct_2_9BF8902D61AE1796>** StaticGet___9__9_0()
		{
			return (::System::Action_2<::RPG::Client::TimeRewindSingleTarget*, ::Struct_2_9BF8902D61AE1796>**)Il2CppClass::FromTypeDefinitionIndex(TimeRewindSingleTarget___c_TypeDefinitionIndex)->GetStaticField(0x53DB0);
		}
		static ::RPG::Client::TimeRewindSingleTarget___c** StaticGet___9()
		{
			return (::RPG::Client::TimeRewindSingleTarget___c**)Il2CppClass::FromTypeDefinitionIndex(TimeRewindSingleTarget___c_TypeDefinitionIndex)->GetStaticField(0x53DB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDSINGLETARGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDSINGLETARGET___C__CTOR_OFFSET))(this);
		}

		::System::Void _ManualSnapLoopRewindRatio_b__9_0(::RPG::Client::TimeRewindSingleTarget* a1, ::Struct_2_9BF8902D61AE1796 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindSingleTarget*, ::Struct_2_9BF8902D61AE1796))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDSINGLETARGET___C__MANUALSNAPLOOPREWINDRATIO_B__9_0_OFFSET))(this, a1, a2);
		}
	};
}
