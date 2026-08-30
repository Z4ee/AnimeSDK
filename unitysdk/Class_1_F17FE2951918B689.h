#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_F17FE2951918B689_METHOD_1_D7FD80F0A66781EF_OFFSET UNITYSDK_OFFSET(0x1D062650)
#define CLASS_1_F17FE2951918B689__CTOR_OFFSET UNITYSDK_OFFSET(0x1D062830)

inline static constexpr unsigned int Class_1_F17FE2951918B689_TypeDefinitionIndex = 13817;

class Class_1_F17FE2951918B689 : public ::System::Object
{
public:
	::System::UInt32 JAKLCIIEDON; // 0x10
	::System::UInt32 HFFBGDNDBHC; // 0x14
	::RPG::Client::TextID DNJCIDFBHPC; // 0x18
	::System::UInt32 AHCGOKDLKHM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F17FE2951918B689__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D7FD80F0A66781EF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_F17FE2951918B689*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_F17FE2951918B689*&))((::PBYTE)hIl2Cpp + CLASS_1_F17FE2951918B689_METHOD_1_D7FD80F0A66781EF_OFFSET))(a1, a2);
	}
};
