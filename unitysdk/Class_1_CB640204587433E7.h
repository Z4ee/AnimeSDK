#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmTrack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CB640204587433E7_METHOD_1_74344849D98F5992_OFFSET UNITYSDK_OFFSET(0xA53E770)
#define CLASS_1_CB640204587433E7_METHOD_1_B5ECC908F90A027E_OFFSET UNITYSDK_OFFSET(0xA53E9A0)
#define CLASS_1_CB640204587433E7__CTOR_OFFSET UNITYSDK_OFFSET(0xA53EB80)

inline static constexpr unsigned int Class_1_CB640204587433E7_TypeDefinitionIndex = 57011;

class Class_1_CB640204587433E7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB640204587433E7__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* Method_1_74344849D98F5992(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB640204587433E7_METHOD_1_74344849D98F5992_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* Method_1_B5ECC908F90A027E(::Il2CppArray<::System::UInt32>*& a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*(*)(::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_CB640204587433E7_METHOD_1_B5ECC908F90A027E_OFFSET))(a1);
	}
};
