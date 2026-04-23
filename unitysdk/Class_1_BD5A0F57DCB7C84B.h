#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD5A0F57DCB7C84B__CTOR_OFFSET UNITYSDK_OFFSET(0x17C67330)

inline static constexpr unsigned int Class_1_BD5A0F57DCB7C84B_TypeDefinitionIndex = 34640;

class Class_1_BD5A0F57DCB7C84B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::MVector3>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD5A0F57DCB7C84B__CTOR_OFFSET))(this);
	}
};
