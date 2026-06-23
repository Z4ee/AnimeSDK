#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
class Class_1_4244D4E1DC314FF1;
namespace MoleMole { class BaseRedDotRecord; }
namespace System { class String; }

#define CLASS_1_9B5C598FECDB132E_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1539C960)
#define CLASS_1_9B5C598FECDB132E_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1539C950)
#define CLASS_1_9B5C598FECDB132E_METHOD_1_AE3DFA91C1F3CEC5_OFFSET UNITYSDK_OFFSET(0x1539CCB0)
#define CLASS_1_9B5C598FECDB132E_METHOD_1_CCE7E9F295E45525_OFFSET UNITYSDK_OFFSET(0x1539C970)
#define CLASS_1_9B5C598FECDB132E__CTOR_OFFSET UNITYSDK_OFFSET(0x1539C910)

inline static constexpr unsigned int Class_1_9B5C598FECDB132E_TypeDefinitionIndex = 47712;

class Class_1_9B5C598FECDB132E : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::MoleMole::BaseRedDotRecord* Field_1_4; // 0x18
	::Class_1_4244D4E1DC314FF1* Field_1_0; // 0x20
	::System::Int64 Field_1_2; // 0x28
	::System::Boolean Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B5C598FECDB132E__CTOR_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B5C598FECDB132E_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_9B5C598FECDB132E_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::String* Method_1_CCE7E9F295E45525()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B5C598FECDB132E_METHOD_1_CCE7E9F295E45525_OFFSET))(this);
	}

	::System::Void Method_1_AE3DFA91C1F3CEC5(::Class_1_1EA8435E138F2E03* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B5C598FECDB132E_METHOD_1_AE3DFA91C1F3CEC5_OFFSET))(this, a1, a2);
	}
};
