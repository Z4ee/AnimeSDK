#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_4.h"
#include "unitysdk/System/Object.h"

class Class_1_4C1C750FFB177DCC;
class Class_1_A188133F1B13F2BD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_41D140539C030FAC_METHOD_1_1627AE6BCDE89B9B_OFFSET UNITYSDK_OFFSET(0xA762FF0)
#define CLASS_1_41D140539C030FAC__CTOR_OFFSET UNITYSDK_OFFSET(0xA762F30)

inline static constexpr unsigned int Class_1_41D140539C030FAC_TypeDefinitionIndex = 58533;

class Class_1_41D140539C030FAC : public ::System::Object
{
public:
	::Class_1_4C1C750FFB177DCC* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_4, ::Class_1_A188133F1B13F2BD*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_4C1C750FFB177DCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C1C750FFB177DCC*))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC__CTOR_OFFSET))(this, a1);
	}

	::Class_1_A188133F1B13F2BD* Method_1_1627AE6BCDE89B9B(::Struct_2_019938BC9C50B169_4& a1)
	{
		return ((::Class_1_A188133F1B13F2BD*(*)(::PVOID, ::Struct_2_019938BC9C50B169_4&))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_METHOD_1_1627AE6BCDE89B9B_OFFSET))(this, a1);
	}
};
