#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_4_EFA50CF68B3FAF7B_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1018A8D0)
#define CLASS_4_EFA50CF68B3FAF7B_METHOD_4_C46DE03DA12C2BD6_OFFSET UNITYSDK_OFFSET(0x1018A8E0)
#define CLASS_4_EFA50CF68B3FAF7B_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1018A650)
#define CLASS_4_EFA50CF68B3FAF7B_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x1018A750)
#define CLASS_4_EFA50CF68B3FAF7B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1018A6A0)
#define CLASS_4_EFA50CF68B3FAF7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1018A840)

inline static constexpr unsigned int Class_4_EFA50CF68B3FAF7B_TypeDefinitionIndex = 45564;

class Class_4_EFA50CF68B3FAF7B : public ::Class_3_627DF5C40DDAA45B<::Class_4_EFA50CF68B3FAF7B*>
{
public:
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_EFA50CF68B3FAF7B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EFA50CF68B3FAF7B__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EFA50CF68B3FAF7B_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_EFA50CF68B3FAF7B_RECEIVEFEATUREEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EFA50CF68B3FAF7B_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_C46DE03DA12C2BD6(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_EFA50CF68B3FAF7B_METHOD_4_C46DE03DA12C2BD6_OFFSET))(this, a1, a2);
	}
};
