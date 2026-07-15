#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_648258D77F597F54.h"
#include "unitysdk/Class_2_2BAFD0C3CCA817CD_CustomDataChannel.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2BAFD0C3CCA817CD_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x18442150)
#define CLASS_2_2BAFD0C3CCA817CD__CTOR_OFFSET UNITYSDK_OFFSET(0x18443850)

inline static constexpr unsigned int Class_2_2BAFD0C3CCA817CD_TypeDefinitionIndex = 67472;

class Class_2_2BAFD0C3CCA817CD : public ::Class_1_648258D77F597F54
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::TAUtils::SimpleTransform>* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_2_1; // 0x38
	::System::String* Field_2_2; // 0x40
	::System::Collections::Generic::List_1<::System::Single>* Field_2_3; // 0x48
	::System::Single Field_2_4; // 0x50
	::Class_2_2BAFD0C3CCA817CD_CustomDataChannel Field_2_5; // 0x54
	::System::Single Field_2_6; // 0x58
	::System::Single Field_2_7; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2BAFD0C3CCA817CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2BAFD0C3CCA817CD_METHOD_2_CD9F3CEFB366C27A_OFFSET))(this);
	}
};
