#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelEnvType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1C93ADDE43DB49FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C638BF0)

inline static constexpr unsigned int Class_1_1C93ADDE43DB49FF_TypeDefinitionIndex = 41563;

class Class_1_1C93ADDE43DB49FF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* GCDEPMINDBH; // 0x10
	::System::UInt32 GBNPNJPBBLP; // 0x18
	::RPG::GameCore::FourRotateVoxelEnvType FOLGBLOBAPM; // 0x1C
	::System::Boolean AAMBBADINCL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C93ADDE43DB49FF__CTOR_OFFSET))(this);
	}
};
