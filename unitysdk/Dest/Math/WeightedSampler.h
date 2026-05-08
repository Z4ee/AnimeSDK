#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class Rand; }

#define DEST_MATH_WEIGHTEDSAMPLER_BINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x1C2BE8E0)
#define DEST_MATH_WEIGHTEDSAMPLER_INIT_OFFSET UNITYSDK_OFFSET(0x1C2BE9E0)
#define DEST_MATH_WEIGHTEDSAMPLER_SAMPLEINDEX_OFFSET UNITYSDK_OFFSET(0x1C2BEB10)
#define DEST_MATH_WEIGHTEDSAMPLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2BE970)
#define DEST_MATH_WEIGHTEDSAMPLER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C2BEB00)
#define DEST_MATH_WEIGHTEDSAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BE8D0)

namespace Dest::Math
{
	inline static constexpr unsigned int WeightedSampler_TypeDefinitionIndex = 33241;

	class WeightedSampler : public ::System::Object
	{
	public:
		::Dest::Math::Rand* _rand; // 0x10
		::Il2CppArray<::System::Single>* _accum; // 0x18
		::System::Single _total; // 0x20

		::System::Void _ctor(::Dest::Math::Rand* rand)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Rand*))((::PBYTE)hIl2Cpp + DEST_MATH_WEIGHTEDSAMPLER__CTOR_OFFSET))(this, rand);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Single>* weights)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_WEIGHTEDSAMPLER__CTOR_1_OFFSET))(this, weights);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Single>* weights, ::Dest::Math::Rand* rand)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Dest::Math::Rand*))((::PBYTE)hIl2Cpp + DEST_MATH_WEIGHTEDSAMPLER__CTOR_2_OFFSET))(this, weights, rand);
		}

		static ::System::Int32 BinarySearch(::Il2CppArray<::System::Single>* array, ::System::Single value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_WEIGHTEDSAMPLER_BINARYSEARCH_OFFSET))(array, value);
		}

		::System::Void Init(::Il2CppArray<::System::Single>* weights)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_WEIGHTEDSAMPLER_INIT_OFFSET))(this, weights);
		}

		::System::Int32 SampleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_WEIGHTEDSAMPLER_SAMPLEINDEX_OFFSET))(this);
		}
	};
}
