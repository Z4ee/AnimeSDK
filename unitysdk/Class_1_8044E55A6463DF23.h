#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_63BB0318F1FE77F0;
class Class_3_6EF456A21AE85EEC_341;
namespace System { class String; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_1_8044E55A6463DF23__CTOR_OFFSET UNITYSDK_OFFSET(0x1292D6F0)

inline static constexpr unsigned int Class_1_8044E55A6463DF23_TypeDefinitionIndex = 89771;

class Class_1_8044E55A6463DF23 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::Class_1_27F786FF2A30778C<::Class_3_6EF456A21AE85EEC_341*>* Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x20
	::System::Boolean Field_1_0; // 0x21
	::System::Boolean Field_1_2; // 0x22
	::System::Boolean Field_1_1; // 0x23

	::System::Void _ctor(::Class_3_63BB0318F1FE77F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_63BB0318F1FE77F0*))((::PBYTE)hIl2Cpp + CLASS_1_8044E55A6463DF23__CTOR_OFFSET))(this, a1);
	}
};
