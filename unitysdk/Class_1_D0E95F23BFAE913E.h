#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D0E95F23BFAE913E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47ED60)

inline static constexpr unsigned int Class_1_D0E95F23BFAE913E_TypeDefinitionIndex = 40388;

class Class_1_D0E95F23BFAE913E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LPCOFGEEBIP; // 0x10
	::System::String* AADAFGFFODK; // 0x18
	::System::Int32 BHKEBNJFACD; // 0x20
	::System::Int32 DDEPKGPNDEA; // 0x24
	::System::UInt32 BOKJJKFCFME; // 0x28
	::System::Int32 GOHPCPGPIFB; // 0x2C
	::System::UInt32 NALMBOOCCIN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0E95F23BFAE913E__CTOR_OFFSET))(this);
	}
};
