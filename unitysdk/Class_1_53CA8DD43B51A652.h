#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_109;
class Class_1_4AE9DE3D2ED9A9E2;
class Class_1_EADE0AA2443F1473;
namespace MoleMole { class ShoppingMallLimitedCardRowContext; }

#define CLASS_1_53CA8DD43B51A652_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x1390FB80)
#define CLASS_1_53CA8DD43B51A652_METHOD_1_7B0A407379BA27E7_OFFSET UNITYSDK_OFFSET(0x1390FE60)
#define CLASS_1_53CA8DD43B51A652_METHOD_1_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x1390EFA0)
#define CLASS_1_53CA8DD43B51A652_METHOD_1_C7A97D09E69D604A_OFFSET UNITYSDK_OFFSET(0x1390FEB0)
#define CLASS_1_53CA8DD43B51A652__CTOR_OFFSET UNITYSDK_OFFSET(0x1390EEC0)

inline static constexpr unsigned int Class_1_53CA8DD43B51A652_TypeDefinitionIndex = 61236;

class Class_1_53CA8DD43B51A652 : public ::System::Object
{
public:
	::MoleMole::ShoppingMallLimitedCardRowContext* Field_1_7; // 0x10
	::Class_1_EADE0AA2443F1473* Field_1_2; // 0x18
	::Class_1_4AE9DE3D2ED9A9E2* Field_1_1; // 0x20
	::Class_1_43BD383C98B4C0C5_109* Field_1_0; // 0x28

	::System::Void _ctor(::Class_1_43BD383C98B4C0C5_109* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_109*))((::PBYTE)hIl2Cpp + CLASS_1_53CA8DD43B51A652__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53CA8DD43B51A652_METHOD_1_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53CA8DD43B51A652_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_1_7B0A407379BA27E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53CA8DD43B51A652_METHOD_1_7B0A407379BA27E7_OFFSET))(this);
	}

	::System::Void Method_1_C7A97D09E69D604A(::MoleMole::ShoppingMallLimitedCardRowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ShoppingMallLimitedCardRowContext*))((::PBYTE)hIl2Cpp + CLASS_1_53CA8DD43B51A652_METHOD_1_C7A97D09E69D604A_OFFSET))(this, a1);
	}
};
