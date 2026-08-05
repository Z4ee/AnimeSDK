#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

namespace System { class EventArgs; }

#define CLASS_4_1C38D09F9A12A280_METHOD_4_C46DE03DA12C2BD6_OFFSET UNITYSDK_OFFSET(0x12339B40)
#define CLASS_4_1C38D09F9A12A280_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x12339950)
#define CLASS_4_1C38D09F9A12A280__CCTOR_OFFSET UNITYSDK_OFFSET(0x123398A0)
#define CLASS_4_1C38D09F9A12A280__CTOR_OFFSET UNITYSDK_OFFSET(0x12339AB0)

inline static constexpr unsigned int Class_4_1C38D09F9A12A280_TypeDefinitionIndex = 68785;

class Class_4_1C38D09F9A12A280 : public ::Class_3_627DF5C40DDAA45B<::Class_4_1C38D09F9A12A280*>
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_1C38D09F9A12A280__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C38D09F9A12A280__CTOR_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_1C38D09F9A12A280_RECEIVEFEATUREEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_C46DE03DA12C2BD6(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_1C38D09F9A12A280_METHOD_4_C46DE03DA12C2BD6_OFFSET))(this, a1, a2);
	}
};
