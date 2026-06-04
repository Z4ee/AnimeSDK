#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_AC66714FF5876767;

#define CLASS_1_F9FBCC956DFCF137_5_METHOD_1_0EB2ACFBD5A30D96_OFFSET UNITYSDK_OFFSET(0x14340F80)
#define CLASS_1_F9FBCC956DFCF137_5__CTOR_OFFSET UNITYSDK_OFFSET(0x14340F70)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_5_TypeDefinitionIndex = 50809;

class Class_1_F9FBCC956DFCF137_5 : public ::System::Object
{
public:
	::Class_1_AC66714FF5876767* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_AC66714FF5876767* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_5__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_0EB2ACFBD5A30D96()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_5_METHOD_1_0EB2ACFBD5A30D96_OFFSET))(this);
	}
};
