#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmLevel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_374F28DEFB9E7A6A_METHOD_1_165E862FB19DED06_OFFSET UNITYSDK_OFFSET(0x11386100)
#define CLASS_1_374F28DEFB9E7A6A__CTOR_OFFSET UNITYSDK_OFFSET(0x11386560)

inline static constexpr unsigned int Class_1_374F28DEFB9E7A6A_TypeDefinitionIndex = 50163;

class Class_1_374F28DEFB9E7A6A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_374F28DEFB9E7A6A__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>* Method_1_165E862FB19DED06(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_374F28DEFB9E7A6A_METHOD_1_165E862FB19DED06_OFFSET))(a1);
	}
};
