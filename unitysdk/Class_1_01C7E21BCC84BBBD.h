#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_01C7E21BCC84BBBD_METHOD_1_AD2A1F0FF4DD4C01_OFFSET UNITYSDK_OFFSET(0x109D02C0)
#define CLASS_1_01C7E21BCC84BBBD__CTOR_OFFSET UNITYSDK_OFFSET(0x109D0860)

inline static constexpr unsigned int Class_1_01C7E21BCC84BBBD_TypeDefinitionIndex = 50162;

class Class_1_01C7E21BCC84BBBD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C7E21BCC84BBBD__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* Method_1_AD2A1F0FF4DD4C01(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_01C7E21BCC84BBBD_METHOD_1_AD2A1F0FF4DD4C01_OFFSET))(a1);
	}
};
