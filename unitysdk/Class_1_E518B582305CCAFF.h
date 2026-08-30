#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_213;
class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E518B582305CCAFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178DF260)
#define CLASS_1_E518B582305CCAFF_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x178DFB80)
#define CLASS_1_E518B582305CCAFF_METHOD_1_28E845B93A63DBEC_OFFSET UNITYSDK_OFFSET(0x178DF800)
#define CLASS_1_E518B582305CCAFF_METHOD_1_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0x178DF4B0)
#define CLASS_1_E518B582305CCAFF_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x178DF430)
#define CLASS_1_E518B582305CCAFF__CTOR_OFFSET UNITYSDK_OFFSET(0x178DEFF0)

inline static constexpr unsigned int Class_1_E518B582305CCAFF_TypeDefinitionIndex = 77754;

class Class_1_E518B582305CCAFF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FD611945730E269E*>* KGDKFJMNBLE; // 0x10
	::System::String* HNKNDGFGALM; // 0x18
	::System::Action* CIFOILLJFNF; // 0x20
	::System::Boolean OELBLBCINNB; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* a1, ::Class_1_F9FBCC956DFCF137_27* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>*, ::Class_1_F9FBCC956DFCF137_27*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E518B582305CCAFF__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E518B582305CCAFF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E518B582305CCAFF_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_79E872D90798D236(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E518B582305CCAFF_METHOD_1_79E872D90798D236_OFFSET))(this, a1);
	}

	::Class_1_FD611945730E269E* Method_1_28E845B93A63DBEC()
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E518B582305CCAFF_METHOD_1_28E845B93A63DBEC_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E518B582305CCAFF_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
