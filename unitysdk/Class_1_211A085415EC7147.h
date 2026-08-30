#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_211A085415EC7147_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1D348B30)
#define CLASS_1_211A085415EC7147__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3490A0)

inline static constexpr unsigned int Class_1_211A085415EC7147_TypeDefinitionIndex = 11511;

class Class_1_211A085415EC7147 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x10
	::System::String* NGAGNNIHGFE; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x20
	::System::UInt32 GDLLGLFCEHC; // 0x28
	::RPG::GameCore::FateHouguType GMPGDEINODK; // 0x2C
	::RPG::Client::TextID GMGEMCFDIOE; // 0x30
	::System::UInt32 EFAIIOHKFGD; // 0x40
	::System::UInt32 OHFGNODANEP; // 0x44
	::RPG::Client::TextID OKCCPDBENOJ; // 0x48
	::System::UInt32 ILLBMODJJGP; // 0x58
	::System::UInt32 AMONFPEGLAF; // 0x5C
	::RPG::Client::TextID CBCOAKMDBHD; // 0x60
	::RPG::Client::TextID LEPNNKOAOJF; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_211A085415EC7147__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_211A085415EC7147*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_211A085415EC7147*&))((::PBYTE)hIl2Cpp + CLASS_1_211A085415EC7147_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
