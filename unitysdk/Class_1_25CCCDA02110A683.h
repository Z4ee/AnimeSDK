#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_25CCCDA02110A683__CTOR_OFFSET UNITYSDK_OFFSET(0x1C194F00)

inline static constexpr unsigned int Class_1_25CCCDA02110A683_TypeDefinitionIndex = 36143;

class Class_1_25CCCDA02110A683 : public ::System::Object
{
public:
	::System::Int32 OCAJAKNEHAL; // 0x10
	::RPG::MVector3 GCJMFBKLGHI; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25CCCDA02110A683__CTOR_OFFSET))(this);
	}
};
