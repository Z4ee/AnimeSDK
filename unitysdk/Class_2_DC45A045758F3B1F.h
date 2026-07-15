#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8128411C248405F5.h"

namespace RPG::GameCore { class FiveDimMiniGameCollectCoinWave; }

#define CLASS_2_DC45A045758F3B1F_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x187321B0)
#define CLASS_2_DC45A045758F3B1F_METHOD_2_4D6E1B5179A93A37_OFFSET UNITYSDK_OFFSET(0x187323B0)
#define CLASS_2_DC45A045758F3B1F_METHOD_2_8F18F86870141CCB_OFFSET UNITYSDK_OFFSET(0x187320B0)
#define CLASS_2_DC45A045758F3B1F_METHOD_2_ADEA50FB2A5D0EA4_OFFSET UNITYSDK_OFFSET(0x187324F0)
#define CLASS_2_DC45A045758F3B1F__CTOR_OFFSET UNITYSDK_OFFSET(0x187326F0)

inline static constexpr unsigned int Class_2_DC45A045758F3B1F_TypeDefinitionIndex = 72991;

class Class_2_DC45A045758F3B1F : public ::Class_1_8128411C248405F5
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC45A045758F3B1F__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimMiniGameCollectCoinWave* Method_2_8F18F86870141CCB()
	{
		return ((::RPG::GameCore::FiveDimMiniGameCollectCoinWave*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC45A045758F3B1F_METHOD_2_8F18F86870141CCB_OFFSET))(this);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC45A045758F3B1F_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Boolean Method_2_4D6E1B5179A93A37(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_DC45A045758F3B1F_METHOD_2_4D6E1B5179A93A37_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_ADEA50FB2A5D0EA4(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_DC45A045758F3B1F_METHOD_2_ADEA50FB2A5D0EA4_OFFSET))(this, a1, a2);
	}
};
