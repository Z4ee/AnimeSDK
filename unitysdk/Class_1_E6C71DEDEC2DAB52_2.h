#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_9EAA18C22BA51AC3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E6C71DEDEC2DAB52_2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15CBE910)
#define CLASS_1_E6C71DEDEC2DAB52_2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15CBE6B0)
#define CLASS_1_E6C71DEDEC2DAB52_2_METHOD_1_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0x15CBE970)
#define CLASS_1_E6C71DEDEC2DAB52_2_METHOD_1_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0x15CBE730)
#define CLASS_1_E6C71DEDEC2DAB52_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBEB20)

inline static constexpr unsigned int Class_1_E6C71DEDEC2DAB52_2_TypeDefinitionIndex = 73640;

class Class_1_E6C71DEDEC2DAB52_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9EAA18C22BA51AC3*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C71DEDEC2DAB52_2__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_E6C71DEDEC2DAB52_2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6C71DEDEC2DAB52_2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6C71DEDEC2DAB52_2_METHOD_1_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_E6C71DEDEC2DAB52_2_METHOD_1_5253759692D6DAC1_OFFSET))(this, a1);
	}
};
