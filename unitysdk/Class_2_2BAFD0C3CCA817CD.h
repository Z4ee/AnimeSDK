#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_648258D77F597F54.h"
#include "unitysdk/Class_2_2BAFD0C3CCA817CD_CustomDataChannel.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2BAFD0C3CCA817CD_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0xDAC6A50)
#define CLASS_2_2BAFD0C3CCA817CD__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC8150)

inline static constexpr unsigned int Class_2_2BAFD0C3CCA817CD_TypeDefinitionIndex = 70595;

class Class_2_2BAFD0C3CCA817CD : public ::Class_1_648258D77F597F54
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::TAUtils::SimpleTransform>* IKJPLHINJMH; // 0x30
	::System::Collections::Generic::List_1<::System::Single>* GLOIAGHEBML; // 0x38
	::System::String* EINFJLDMHOA; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GINMNCLNFCF; // 0x48
	::System::Single FLAKJKCOBPN; // 0x50
	::System::Single OMKIKAECLDF; // 0x54
	::System::Single FDODPACHCFE; // 0x58
	::Class_2_2BAFD0C3CCA817CD_CustomDataChannel IHGCIPOANNK; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2BAFD0C3CCA817CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2BAFD0C3CCA817CD_METHOD_2_CD9F3CEFB366C27A_OFFSET))(this);
	}
};
