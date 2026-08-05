#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_36.h"
#include "unitysdk/System/Object.h"

class Class_1_1B26407BD81502D9;
class Class_1_5B173BB2C99C0125;
class Class_2_888C59F77423C576_1;
class Class_3_3C5ECA5FDADC11D0_1;
class Class_3_CF45F0378EFA715F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C3795714EA24D956_METHOD_1_1DC6D9A924D57350_OFFSET UNITYSDK_OFFSET(0x1823DBD0)
#define CLASS_1_C3795714EA24D956_METHOD_1_B36E629C3DBCCDB8_OFFSET UNITYSDK_OFFSET(0x1823DE00)
#define CLASS_1_C3795714EA24D956_METHOD_1_BBDF96BC98C92319_OFFSET UNITYSDK_OFFSET(0x135F57D0)
#define CLASS_1_C3795714EA24D956_METHOD_1_D5359631CB1E52CE_OFFSET UNITYSDK_OFFSET(0x1823DB10)
#define CLASS_1_C3795714EA24D956__CTOR_OFFSET UNITYSDK_OFFSET(0x135F56E0)

inline static constexpr unsigned int Class_1_C3795714EA24D956_TypeDefinitionIndex = 47450;

class Class_1_C3795714EA24D956 : public ::System::Object
{
public:
	::Class_2_888C59F77423C576_1* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_0A3761FE34514D6C_36, ::Class_1_5B173BB2C99C0125*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_1B26407BD81502D9*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3795714EA24D956__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BBDF96BC98C92319(::System::Collections::Generic::List_1<::Class_1_1B26407BD81502D9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1B26407BD81502D9*>*))((::PBYTE)hIl2Cpp + CLASS_1_C3795714EA24D956_METHOD_1_BBDF96BC98C92319_OFFSET))(this, a1);
	}

	::System::Void Method_1_D5359631CB1E52CE(::Class_3_3C5ECA5FDADC11D0_1* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3C5ECA5FDADC11D0_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C3795714EA24D956_METHOD_1_D5359631CB1E52CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1DC6D9A924D57350(::Class_3_CF45F0378EFA715F* a1, ::Enum_3_0A3761FE34514D6C_36 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CF45F0378EFA715F*, ::Enum_3_0A3761FE34514D6C_36))((::PBYTE)hIl2Cpp + CLASS_1_C3795714EA24D956_METHOD_1_1DC6D9A924D57350_OFFSET))(this, a1, a2);
	}

	::Class_1_5B173BB2C99C0125* Method_1_B36E629C3DBCCDB8(::Enum_3_0A3761FE34514D6C_36 a1)
	{
		return ((::Class_1_5B173BB2C99C0125*(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_36))((::PBYTE)hIl2Cpp + CLASS_1_C3795714EA24D956_METHOD_1_B36E629C3DBCCDB8_OFFSET))(this, a1);
	}
};
