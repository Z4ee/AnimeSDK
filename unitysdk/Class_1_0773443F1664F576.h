#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_0773443F1664F576_CLEAR_OFFSET UNITYSDK_OFFSET(0x19C79FE0)
#define CLASS_1_0773443F1664F576_ONALLOC_OFFSET UNITYSDK_OFFSET(0x19C7A050)
#define CLASS_1_0773443F1664F576_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x19C7A130)
#define CLASS_1_0773443F1664F576__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7A170)

inline static constexpr unsigned int Class_1_0773443F1664F576_TypeDefinitionIndex = 40676;

class Class_1_0773443F1664F576 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0773443F1664F576__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0773443F1664F576_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0773443F1664F576_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0773443F1664F576_ONRECYCLE_OFFSET))(this);
	}
};
