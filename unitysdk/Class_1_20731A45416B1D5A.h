#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_20731A45416B1D5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1D03E980)

inline static constexpr unsigned int Class_1_20731A45416B1D5A_TypeDefinitionIndex = 40981;

class Class_1_20731A45416B1D5A : public ::System::Object
{
public:
	::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x10
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> LBMFPCIBMAC; // 0x14
	::System::UInt32 JCAEANLAGMB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20731A45416B1D5A__CTOR_OFFSET))(this);
	}
};
