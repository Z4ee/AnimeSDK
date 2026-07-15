#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS_B2GETMILLISECONDSANDRESET_OFFSET UNITYSDK_OFFSET(0x1AB1DEF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS_B2GETMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1AB224C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS_B2GETTICKS_OFFSET UNITYSDK_OFFSET(0x1AB1DEE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS_B2HASH_OFFSET UNITYSDK_OFFSET(0x1AB22DA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS_B2YIELD_OFFSET UNITYSDK_OFFSET(0x1AB1DF00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB22E10)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Timers_TypeDefinitionIndex = 35244;

	class B2Timers : public ::System::Object
	{
	public:
		static ::System::Double* StaticGet_s_invFrequency()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(B2Timers_TypeDefinitionIndex)->GetStaticField(0xF810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS__CCTOR_OFFSET))();
		}

		static ::System::UInt64 b2GetTicks()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS_B2GETTICKS_OFFSET))();
		}

		static ::System::Single b2GetMilliseconds(::System::UInt64 a1)
		{
			return ((::System::Single(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS_B2GETMILLISECONDS_OFFSET))(a1);
		}

		static ::System::Single b2GetMillisecondsAndReset(::System::UInt64& a1)
		{
			return ((::System::Single(*)(::System::UInt64&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS_B2GETMILLISECONDSANDRESET_OFFSET))(a1);
		}

		static ::System::Void b2Yield()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS_B2YIELD_OFFSET))();
		}

		static ::System::UInt32 b2Hash(::System::UInt32 a1, ::System::ReadOnlySpan_1<::System::Byte> a2, ::System::Int32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TIMERS_B2HASH_OFFSET))(a1, a2, a3);
		}
	};
}
