#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C6CB00B19F1FE9BC.h"
#include "unitysdk/Class_3_DCB7F8B839F0C44B_Struct_2_A6681D6A96AB8E99.h"
#include "unitysdk/System/Nullable_1.h"

class Class_3_DCB7F8B839F0C44B;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_4_DED1DB645FD2C4C3_METHOD_4_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x14C514C0)
#define CLASS_4_DED1DB645FD2C4C3_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14C51480)
#define CLASS_4_DED1DB645FD2C4C3_METHOD_4_30424022465411BE_OFFSET UNITYSDK_OFFSET(0x14C51630)
#define CLASS_4_DED1DB645FD2C4C3_METHOD_4_673C71724813F13B_OFFSET UNITYSDK_OFFSET(0x14C51500)
#define CLASS_4_DED1DB645FD2C4C3_METHOD_4_CABE674194E089EC_OFFSET UNITYSDK_OFFSET(0x14C51AD0)
#define CLASS_4_DED1DB645FD2C4C3__CTOR_OFFSET UNITYSDK_OFFSET(0x14C515A0)

inline static constexpr unsigned int Class_4_DED1DB645FD2C4C3_TypeDefinitionIndex = 14994;

class Class_4_DED1DB645FD2C4C3 : public ::Class_3_C6CB00B19F1FE9BC<::Class_3_DCB7F8B839F0C44B*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DED1DB645FD2C4C3__CTOR_OFFSET))(this);
	}

	::System::String* Method_4_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DED1DB645FD2C4C3_METHOD_4_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_4_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DED1DB645FD2C4C3_METHOD_4_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_4_673C71724813F13B(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_DED1DB645FD2C4C3_METHOD_4_673C71724813F13B_OFFSET))(this, a1);
	}

	::System::String* Method_4_30424022465411BE(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_DED1DB645FD2C4C3_METHOD_4_30424022465411BE_OFFSET))(this, a1);
	}

	::System::Nullable_1<::Class_3_DCB7F8B839F0C44B_Struct_2_A6681D6A96AB8E99> Method_4_CABE674194E089EC(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::Class_3_DCB7F8B839F0C44B_Struct_2_A6681D6A96AB8E99>(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_DED1DB645FD2C4C3_METHOD_4_CABE674194E089EC_OFFSET))(this, a1, a2);
	}
};
