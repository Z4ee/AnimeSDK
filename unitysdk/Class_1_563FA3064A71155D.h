#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_39F32ADA6528F94C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_563FA3064A71155D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A14A2A0)
#define CLASS_1_563FA3064A71155D_METHOD_1_39D15CE61EDA5424_OFFSET UNITYSDK_OFFSET(0x1A14A700)
#define CLASS_1_563FA3064A71155D_METHOD_1_3E0E93DFDDB767A4_OFFSET UNITYSDK_OFFSET(0x1A14A2E0)
#define CLASS_1_563FA3064A71155D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A14A0C0)

inline static constexpr unsigned int Class_1_563FA3064A71155D_TypeDefinitionIndex = 70119;

class Class_1_563FA3064A71155D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::GalGame::GalgameFilterType, ::System::ValueTuple_2<::System::String*, ::System::String*>>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563FA3064A71155D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563FA3064A71155D_DISPOSE_OFFSET))(this);
	}

	::Class_1_39F32ADA6528F94C* Method_1_3E0E93DFDDB767A4(::MoleMole::GalGame::GalgameFilterType a1)
	{
		return ((::Class_1_39F32ADA6528F94C*(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType))((::PBYTE)hIl2Cpp + CLASS_1_563FA3064A71155D_METHOD_1_3E0E93DFDDB767A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_39D15CE61EDA5424(::Class_1_39F32ADA6528F94C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_39F32ADA6528F94C*))((::PBYTE)hIl2Cpp + CLASS_1_563FA3064A71155D_METHOD_1_39D15CE61EDA5424_OFFSET))(this, a1);
	}
};
