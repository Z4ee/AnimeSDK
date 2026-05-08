#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_011AF2E14064C658_CLASS_1_E4DD996A98E3A324_METHOD_1_30006490B179B693_OFFSET UNITYSDK_OFFSET(0x12DCFF80)
#define CLASS_1_011AF2E14064C658_CLASS_1_E4DD996A98E3A324__CTOR_OFFSET UNITYSDK_OFFSET(0x12DCFF70)

inline static constexpr unsigned int Class_1_011AF2E14064C658_Class_1_E4DD996A98E3A324_TypeDefinitionIndex = 47058;

class Class_1_011AF2E14064C658_Class_1_E4DD996A98E3A324 : public ::System::Object
{
public:
	::MoleMole::FlowCanvas::Nodes::EntityDieCheckType Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E4DD996A98E3A324__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_30006490B179B693(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E4DD996A98E3A324_METHOD_1_30006490B179B693_OFFSET))(this, a1);
	}
};
