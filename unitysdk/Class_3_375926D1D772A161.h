#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0037C0B02F452ABE.h"

namespace MoleMole { class EventRange; }
namespace System { class String; }

#define CLASS_3_375926D1D772A161_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x127AF630)
#define CLASS_3_375926D1D772A161_METHOD_3_85C746F74910D9C1_1_OFFSET UNITYSDK_OFFSET(0x127AF820)
#define CLASS_3_375926D1D772A161_METHOD_3_85C746F74910D9C1_OFFSET UNITYSDK_OFFSET(0x127AF7C0)
#define CLASS_3_375926D1D772A161_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x127AF8C0)
#define CLASS_3_375926D1D772A161__CTOR_OFFSET UNITYSDK_OFFSET(0x127AF5E0)

inline static constexpr unsigned int Class_3_375926D1D772A161_TypeDefinitionIndex = 72293;

class Class_3_375926D1D772A161 : public ::Class_2_0037C0B02F452ABE
{
public:
	::System::String* Field_3_1; // 0x38
	::MoleMole::EventRange* Field_3_0; // 0x40

	::System::Void _ctor(::MoleMole::EventRange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EventRange*))((::PBYTE)hIl2Cpp + CLASS_3_375926D1D772A161__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_375926D1D772A161_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Double Method_3_85C746F74910D9C1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_375926D1D772A161_METHOD_3_85C746F74910D9C1_OFFSET))(this);
	}

	::System::Double Method_3_85C746F74910D9C1_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_375926D1D772A161_METHOD_3_85C746F74910D9C1_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_375926D1D772A161_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
