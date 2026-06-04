#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmLevel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C7B8EE004A1D646B_METHOD_1_93C7C05E295117EF_OFFSET UNITYSDK_OFFSET(0xB502D00)
#define CLASS_1_C7B8EE004A1D646B__CTOR_OFFSET UNITYSDK_OFFSET(0xB5031B0)

inline static constexpr unsigned int Class_1_C7B8EE004A1D646B_TypeDefinitionIndex = 57797;

class Class_1_C7B8EE004A1D646B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7B8EE004A1D646B__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>* Method_1_93C7C05E295117EF(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C7B8EE004A1D646B_METHOD_1_93C7C05E295117EF_OFFSET))(a1);
	}
};
