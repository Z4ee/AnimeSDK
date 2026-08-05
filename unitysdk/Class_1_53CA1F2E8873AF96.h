#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_266;
class Class_0_16E4307DCC419505_427;
namespace MoleMole { class ZenkovYokaiHenshinSubSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_53CA1F2E8873AF96_METHOD_1_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x17FE12A0)
#define CLASS_1_53CA1F2E8873AF96_METHOD_1_74536FB86B1DF8C2_OFFSET UNITYSDK_OFFSET(0x17FE1260)
#define CLASS_1_53CA1F2E8873AF96_METHOD_1_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x17FE0C70)
#define CLASS_1_53CA1F2E8873AF96_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x17FE1200)
#define CLASS_1_53CA1F2E8873AF96__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE0BD0)

inline static constexpr unsigned int Class_1_53CA1F2E8873AF96_TypeDefinitionIndex = 64415;

class Class_1_53CA1F2E8873AF96 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x4; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_427*>* Field_1_4; // 0x10
	::Class_0_16E4307DCC419505_266* Field_1_6; // 0x18
	::MoleMole::ZenkovYokaiHenshinSubSystem* Field_1_7; // 0x20
	::System::Boolean Field_1_5; // 0x28

	::System::Void _ctor(::MoleMole::ZenkovYokaiHenshinSubSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ZenkovYokaiHenshinSubSystem*))((::PBYTE)hIl2Cpp + CLASS_1_53CA1F2E8873AF96__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53CA1F2E8873AF96_METHOD_1_CCD88C0D86A5A786_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_266* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_266*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53CA1F2E8873AF96_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_427*>* Method_1_74536FB86B1DF8C2()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_427*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53CA1F2E8873AF96_METHOD_1_74536FB86B1DF8C2_OFFSET))(this);
	}

	::System::Void Method_1_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53CA1F2E8873AF96_METHOD_1_61929A3103595552_OFFSET))(this);
	}
};
