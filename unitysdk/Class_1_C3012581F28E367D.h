#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavVertexType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1152;
class Class_1_4BC03BAAC61C4531;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C3012581F28E367D_METHOD_1_56E37159C2615A15_OFFSET UNITYSDK_OFFSET(0x16530B60)
#define CLASS_1_C3012581F28E367D_METHOD_1_95845CDE41866C6C_OFFSET UNITYSDK_OFFSET(0x165305E0)
#define CLASS_1_C3012581F28E367D_METHOD_1_98B3685A0DA3BB40_OFFSET UNITYSDK_OFFSET(0x16530660)

inline static constexpr unsigned int Class_1_C3012581F28E367D_TypeDefinitionIndex = 71182;

class Class_1_C3012581F28E367D : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0

	static ::Class_0_16E4307DCC419505_1152* Method_1_95845CDE41866C6C(::Class_1_4BC03BAAC61C4531* a1, ::RPG::Client::NavMap::NavVertexType a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a3)
	{
		return ((::Class_0_16E4307DCC419505_1152*(*)(::Class_1_4BC03BAAC61C4531*, ::RPG::Client::NavMap::NavVertexType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C3012581F28E367D_METHOD_1_95845CDE41866C6C_OFFSET))(a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_1152* Method_1_98B3685A0DA3BB40(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_1152*(*)(::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C3012581F28E367D_METHOD_1_98B3685A0DA3BB40_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_1152* Method_1_56E37159C2615A15(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_1152*(*)(::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C3012581F28E367D_METHOD_1_56E37159C2615A15_OFFSET))(a1, a2);
	}
};
