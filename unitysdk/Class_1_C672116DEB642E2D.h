#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_C672116DEB642E2D_METHOD_1_95FA3048B3F79507_OFFSET UNITYSDK_OFFSET(0x1C766770)
#define CLASS_1_C672116DEB642E2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C766A20)

inline static constexpr unsigned int Class_1_C672116DEB642E2D_TypeDefinitionIndex = 11552;

class Class_1_C672116DEB642E2D : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* FOHHOOKJPIM; // 0x10
	::System::String* BFMNOLGCCKH; // 0x18
	::System::UInt32 JFDHFPIIGCC; // 0x20
	::System::UInt32 DOBKKDIECDO; // 0x24
	::RPG::Client::TextID OENAMINOLLF; // 0x28
	::System::UInt32 PHFMCACHFIJ; // 0x38
	::System::UInt32 HNEIIAGADGO; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C672116DEB642E2D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_95FA3048B3F79507(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C672116DEB642E2D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C672116DEB642E2D*&))((::PBYTE)hIl2Cpp + CLASS_1_C672116DEB642E2D_METHOD_1_95FA3048B3F79507_OFFSET))(a1, a2);
	}
};
