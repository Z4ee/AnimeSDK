#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyChangedEventArgs.h"

namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_1C169A0F2ACF26E7_GET_PROTOCOLDATA_OFFSET UNITYSDK_OFFSET(0x152EA770)
#define CLASS_3_1C169A0F2ACF26E7__CTOR_OFFSET UNITYSDK_OFFSET(0x152EA780)

inline static constexpr unsigned int Class_3_1C169A0F2ACF26E7_TypeDefinitionIndex = 74776;

class Class_3_1C169A0F2ACF26E7 : public ::System::ComponentModel::PropertyChangedEventArgs
{
public:
	::System::Object* _ProtocolData_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_1C169A0F2ACF26E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Object* get_ProtocolData()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C169A0F2ACF26E7_GET_PROTOCOLDATA_OFFSET))(this);
	}
};
