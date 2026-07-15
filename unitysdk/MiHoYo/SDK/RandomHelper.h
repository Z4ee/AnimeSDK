#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define MIHOYO_SDK_RANDOMHELPER_RANDINT64_OFFSET UNITYSDK_OFFSET(0x1ABA1D70)
#define MIHOYO_SDK_RANDOMHELPER_RANDOMNUMBER_OFFSET UNITYSDK_OFFSET(0x1ABA1E70)
#define MIHOYO_SDK_RANDOMHELPER_RANDUINT64_OFFSET UNITYSDK_OFFSET(0x1ABA1C20)
#define MIHOYO_SDK_RANDOMHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABA1F70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RandomHelper_TypeDefinitionIndex = 44405;

	class RandomHelper : public ::System::Object
	{
	public:
		static ::System::Random** StaticGet_random()
		{
			return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(RandomHelper_TypeDefinitionIndex)->GetStaticField(0x1B7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_RANDOMHELPER__CCTOR_OFFSET))();
		}

		static ::System::UInt64 RandUInt64()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_RANDOMHELPER_RANDUINT64_OFFSET))();
		}

		static ::System::Int64 RandInt64()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_RANDOMHELPER_RANDINT64_OFFSET))();
		}

		static ::System::Int32 RandomNumber(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RANDOMHELPER_RANDOMNUMBER_OFFSET))(a1, a2);
		}
	};
}
