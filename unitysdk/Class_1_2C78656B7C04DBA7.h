#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2C78656B7C04DBA7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C557550)
#define CLASS_1_2C78656B7C04DBA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5575C0)

inline static constexpr unsigned int Class_1_2C78656B7C04DBA7_TypeDefinitionIndex = 41352;

class Class_1_2C78656B7C04DBA7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* FDNIMKMJAIE; // 0x10
	::System::Int32 KPBLJANAOAF; // 0x18
	::System::UInt32 FALHGPLBOMC; // 0x1C
	::System::UInt32 GJNJCGFIDEB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C78656B7C04DBA7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C78656B7C04DBA7_CLEAR_OFFSET))(this);
	}
};
