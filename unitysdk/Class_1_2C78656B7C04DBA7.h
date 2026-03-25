#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2C78656B7C04DBA7_CLEAR_OFFSET UNITYSDK_OFFSET(0x16762910)
#define CLASS_1_2C78656B7C04DBA7__CTOR_OFFSET UNITYSDK_OFFSET(0x16762980)

inline static constexpr unsigned int Class_1_2C78656B7C04DBA7_TypeDefinitionIndex = 33047;

class Class_1_2C78656B7C04DBA7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_2; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x1C
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C78656B7C04DBA7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C78656B7C04DBA7_CLEAR_OFFSET))(this);
	}
};
