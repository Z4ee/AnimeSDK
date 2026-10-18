#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_37A884EB0F1E4D5B_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1D2CBDD0)
#define CLASS_1_37A884EB0F1E4D5B__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CC150)

inline static constexpr unsigned int Class_1_37A884EB0F1E4D5B_TypeDefinitionIndex = 11576;

class Class_1_37A884EB0F1E4D5B : public ::System::Object
{
public:
	::RPG::GameCore::FateRinCaseBoardTeamType JCDIEKGKCPP; // 0x10
	::System::UInt32 GMCBNNKJAGJ; // 0x14
	::RPG::Client::TextID IGKPNJCFCPN; // 0x18
	::RPG::Client::TextID NMAHGFAPENI; // 0x28
	::RPG::Client::TextID KONCALJBIOB; // 0x38
	::RPG::Client::TextID BGNGIBBEGMB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37A884EB0F1E4D5B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_37A884EB0F1E4D5B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_37A884EB0F1E4D5B*&))((::PBYTE)hIl2Cpp + CLASS_1_37A884EB0F1E4D5B_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
