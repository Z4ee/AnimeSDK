#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmPhase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C033AF7FA3BA35C0_METHOD_1_6C20FFC0C14D6B9C_OFFSET UNITYSDK_OFFSET(0x11E10390)
#define CLASS_1_C033AF7FA3BA35C0__CTOR_OFFSET UNITYSDK_OFFSET(0x11E111F0)

inline static constexpr unsigned int Class_1_C033AF7FA3BA35C0_TypeDefinitionIndex = 57008;

class Class_1_C033AF7FA3BA35C0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C033AF7FA3BA35C0__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>* Method_1_6C20FFC0C14D6B9C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C033AF7FA3BA35C0_METHOD_1_6C20FFC0C14D6B9C_OFFSET))();
	}
};
