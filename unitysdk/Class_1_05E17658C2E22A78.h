#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_05E17658C2E22A78_METHOD_1_1F767BD23DEB91AD_OFFSET UNITYSDK_OFFSET(0x141FC310)
#define CLASS_1_05E17658C2E22A78__CTOR_OFFSET UNITYSDK_OFFSET(0x141FC970)

inline static constexpr unsigned int Class_1_05E17658C2E22A78_TypeDefinitionIndex = 57796;

class Class_1_05E17658C2E22A78 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05E17658C2E22A78__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>* Method_1_1F767BD23DEB91AD(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_05E17658C2E22A78_METHOD_1_1F767BD23DEB91AD_OFFSET))(a1);
	}
};
