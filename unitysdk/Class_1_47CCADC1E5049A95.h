#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_A8AC1AB191A5FBF8;

#define CLASS_1_47CCADC1E5049A95_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x159C9270)
#define CLASS_1_47CCADC1E5049A95_METHOD_1_FAD6FC869EACF474_OFFSET UNITYSDK_OFFSET(0x159C8DF0)
#define CLASS_1_47CCADC1E5049A95__CTOR_OFFSET UNITYSDK_OFFSET(0x159C92E0)

inline static constexpr unsigned int Class_1_47CCADC1E5049A95_TypeDefinitionIndex = 79692;

class Class_1_47CCADC1E5049A95 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47CCADC1E5049A95__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FAD6FC869EACF474(::Class_1_A8AC1AB191A5FBF8* a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A8AC1AB191A5FBF8*, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_47CCADC1E5049A95_METHOD_1_FAD6FC869EACF474_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_A8AC1AB191A5FBF8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A8AC1AB191A5FBF8*))((::PBYTE)hIl2Cpp + CLASS_1_47CCADC1E5049A95_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
