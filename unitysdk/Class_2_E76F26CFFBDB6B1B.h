#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"

class Class_1_D9E989B298282E16;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E76F26CFFBDB6B1B_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16ECFC20)
#define CLASS_2_E76F26CFFBDB6B1B_METHOD_2_28065FBC4645B1B8_OFFSET UNITYSDK_OFFSET(0x16ECFF00)
#define CLASS_2_E76F26CFFBDB6B1B_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16ECFD20)
#define CLASS_2_E76F26CFFBDB6B1B_METHOD_2_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x16ECFE00)
#define CLASS_2_E76F26CFFBDB6B1B__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECFF80)

inline static constexpr unsigned int Class_2_E76F26CFFBDB6B1B_TypeDefinitionIndex = 51281;

class Class_2_E76F26CFFBDB6B1B : public ::Class_1_8A0BE42C657CE107
{
public:
	::Class_1_D9E989B298282E16* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76F26CFFBDB6B1B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76F26CFFBDB6B1B_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E76F26CFFBDB6B1B_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E76F26CFFBDB6B1B_METHOD_2_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Void Method_2_28065FBC4645B1B8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E76F26CFFBDB6B1B_METHOD_2_28065FBC4645B1B8_OFFSET))(this, a1);
	}
};
