#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6EF456A21AE85EEC_80;
class Class_3_946CAF80E7DA1AC6;
namespace System { class String; }
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_1_8044E55A6463DF23__CTOR_OFFSET UNITYSDK_OFFSET(0x127DEFA0)

inline static constexpr unsigned int Class_1_8044E55A6463DF23_TypeDefinitionIndex = 39504;

class Class_1_8044E55A6463DF23 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::Class_1_DD0DD411D84DAED3<::Class_3_6EF456A21AE85EEC_80*>* Field_1_5; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Boolean Field_1_4; // 0x21
	::System::Boolean Field_1_2; // 0x22
	::System::Boolean Field_1_0; // 0x23

	::System::Void _ctor(::Class_3_946CAF80E7DA1AC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_946CAF80E7DA1AC6*))((::PBYTE)hIl2Cpp + CLASS_1_8044E55A6463DF23__CTOR_OFFSET))(this, a1);
	}
};
