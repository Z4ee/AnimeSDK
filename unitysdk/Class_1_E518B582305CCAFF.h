#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_215;
class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E518B582305CCAFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF19B60)
#define CLASS_1_E518B582305CCAFF_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xCF1A480)
#define CLASS_1_E518B582305CCAFF_METHOD_1_28E845B93A63DBEC_OFFSET UNITYSDK_OFFSET(0xCF1A100)
#define CLASS_1_E518B582305CCAFF_METHOD_1_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0xCF19DB0)
#define CLASS_1_E518B582305CCAFF_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCF19D30)
#define CLASS_1_E518B582305CCAFF__CTOR_OFFSET UNITYSDK_OFFSET(0xCF198F0)

inline static constexpr unsigned int Class_1_E518B582305CCAFF_TypeDefinitionIndex = 78226;

class Class_1_E518B582305CCAFF : public ::System::Object
{
public:
	::System::String* HNKNDGFGALM; // 0x10
	::System::Action* CIFOILLJFNF; // 0x18
	::System::Collections::Generic::List_1<::Class_1_FD611945730E269E*>* KGDKFJMNBLE; // 0x20
	::System::Boolean OELBLBCINNB; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_215*>* a1, ::Class_1_F9FBCC956DFCF137_27* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_215*>*, ::Class_1_F9FBCC956DFCF137_27*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E518B582305CCAFF__CTOR_OFFSET))(this, a1, a2, a3);
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
