#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define MIHOYO_SDK_RANDOMHELPER_RANDINT64_OFFSET UNITYSDK_OFFSET(0x8572DB0)
#define MIHOYO_SDK_RANDOMHELPER_RANDOMNUMBER_OFFSET UNITYSDK_OFFSET(0x8572E50)
#define MIHOYO_SDK_RANDOMHELPER_RANDUINT64_OFFSET UNITYSDK_OFFSET(0x8572CE0)
#define MIHOYO_SDK_RANDOMHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8572EE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RandomHelper_TypeDefinitionIndex = 36915;

	class RandomHelper : public ::System::Object
	{
	public:
		static ::System::Random** StaticGet_random()
		{
			return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(RandomHelper_TypeDefinitionIndex)->GetStaticField(0x14DD0);
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

		static ::System::Int32 RandomNumber(::System::Int32 lower, ::System::Int32 upper)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RANDOMHELPER_RANDOMNUMBER_OFFSET))(lower, upper);
		}
	};
}
