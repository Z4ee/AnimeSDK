#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_1_E518B582305CCAFF;
class Class_1_F9FBCC956DFCF137_25;
class Class_2_2E4BAC407E48C5CC;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_187F24CD6942421F_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x18AF2790)
#define CLASS_2_187F24CD6942421F_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x18AF2BE0)
#define CLASS_2_187F24CD6942421F_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18AF2D10)
#define CLASS_2_187F24CD6942421F_METHOD_2_C14E68293537E459_OFFSET UNITYSDK_OFFSET(0x18AF2A00)
#define CLASS_2_187F24CD6942421F_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x18AF2710)
#define CLASS_2_187F24CD6942421F__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF2620)

inline static constexpr unsigned int Class_2_187F24CD6942421F_TypeDefinitionIndex = 74302;

class Class_2_187F24CD6942421F : public ::Class_1_FD611945730E269E
{
public:
	::Class_2_2E4BAC407E48C5CC* Field_2_0; // 0x18
	::System::Collections::Generic::Queue_1<::Class_1_E518B582305CCAFF*>* Field_2_1; // 0x20
	::System::Collections::Generic::Queue_1<::Class_1_E518B582305CCAFF*>* Field_2_2; // 0x28
	::Class_1_F9FBCC956DFCF137_25* Field_2_3; // 0x30
	::System::Int32 Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x3C
	::System::Single Field_2_6; // 0x40

	::System::Void _ctor(::Class_2_2E4BAC407E48C5CC* a1, ::Class_1_F9FBCC956DFCF137_25* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2E4BAC407E48C5CC*, ::Class_1_F9FBCC956DFCF137_25*))((::PBYTE)hIl2Cpp + CLASS_2_187F24CD6942421F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_187F24CD6942421F_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_C14E68293537E459(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_187F24CD6942421F_METHOD_2_C14E68293537E459_OFFSET))(this, a1);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_187F24CD6942421F_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_187F24CD6942421F_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_187F24CD6942421F_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
