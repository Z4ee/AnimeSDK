#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6EF456A21AE85EEC_229;
class Class_3_7957E9B7780DF842;
namespace System { class String; }
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_1_8044E55A6463DF23__CTOR_OFFSET UNITYSDK_OFFSET(0x1352A7A0)

inline static constexpr unsigned int Class_1_8044E55A6463DF23_TypeDefinitionIndex = 85224;

class Class_1_8044E55A6463DF23 : public ::System::Object
{
public:
	::Class_1_8CC15846339E7FB0<::Class_3_6EF456A21AE85EEC_229*>* Field_1_5; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::Boolean Field_1_4; // 0x20
	::System::Boolean Field_1_0; // 0x21
	::System::Boolean Field_1_2; // 0x22
	::System::Boolean Field_1_1; // 0x23

	::System::Void _ctor(::Class_3_7957E9B7780DF842* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7957E9B7780DF842*))((::PBYTE)hIl2Cpp + CLASS_1_8044E55A6463DF23__CTOR_OFFSET))(this, a1);
	}
};
