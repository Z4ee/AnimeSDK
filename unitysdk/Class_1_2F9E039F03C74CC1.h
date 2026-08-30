#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A043D803AC652E6E;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2F9E039F03C74CC1__CTOR_OFFSET UNITYSDK_OFFSET(0x15835B30)

inline static constexpr unsigned int Class_1_2F9E039F03C74CC1_TypeDefinitionIndex = 73428;

class Class_1_2F9E039F03C74CC1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A043D803AC652E6E*>* OAAFHFBNDHN; // 0x10
	::UnityEngine::Transform* EJHLGMEBPBG; // 0x18
	::Class_1_A043D803AC652E6E* DPMAJECLGCP; // 0x20
	::System::Int32 PGLHCDBLPEJ; // 0x28
	::System::Boolean DKOLADJHBMD; // 0x2C
	::System::Boolean HHLNAHPCJAJ; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F9E039F03C74CC1__CTOR_OFFSET))(this);
	}
};
