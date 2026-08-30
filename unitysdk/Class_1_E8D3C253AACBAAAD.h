#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsInterviewDecoType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_E8D3C253AACBAAAD_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1CFEC5B0)
#define CLASS_1_E8D3C253AACBAAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEC980)

inline static constexpr unsigned int Class_1_E8D3C253AACBAAAD_TypeDefinitionIndex = 13805;

class Class_1_E8D3C253AACBAAAD : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* EECIBIDGPEI; // 0x10
	::Il2CppArray<::System::UInt32>* LIDHGBEAJMA; // 0x18
	::System::String* LMDEHNMJHDJ; // 0x20
	::Il2CppArray<::RPG::GameCore::LimaoNewsInterviewDecoType>* GEKGGMKGIPE; // 0x28
	::System::String* PFKLDBGEGAO; // 0x30
	::System::UInt32 KMIBDJKKGDE; // 0x38
	::System::UInt32 DKPOHCDMHBF; // 0x3C
	::RPG::Client::TextID HMFGANHKHIM; // 0x40
	::RPG::Client::TextID LNHLPKEHJBA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8D3C253AACBAAAD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_E8D3C253AACBAAAD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_E8D3C253AACBAAAD*&))((::PBYTE)hIl2Cpp + CLASS_1_E8D3C253AACBAAAD_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
