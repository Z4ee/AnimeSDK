#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_39;
class Class_1_6E20402DFA434D50;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_2BCAC54CCD8ECE83_METHOD_1_34D5285AA88ED29E_OFFSET UNITYSDK_OFFSET(0x176702E0)
#define CLASS_1_2BCAC54CCD8ECE83__CTOR_OFFSET UNITYSDK_OFFSET(0x17670260)

inline static constexpr unsigned int Class_1_2BCAC54CCD8ECE83_TypeDefinitionIndex = 85412;

class Class_1_2BCAC54CCD8ECE83 : public ::System::Object
{
public:
	::System::Func_3<::Class_1_43BD383C98B4C0C5_39*, ::Class_1_6E20402DFA434D50*, ::System::Boolean>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Func_3<::Class_1_43BD383C98B4C0C5_39*, ::Class_1_6E20402DFA434D50*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::Class_1_43BD383C98B4C0C5_39*, ::Class_1_6E20402DFA434D50*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_2BCAC54CCD8ECE83__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_34D5285AA88ED29E(::Class_1_43BD383C98B4C0C5_39* a1, ::Class_1_6E20402DFA434D50* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_39*, ::Class_1_6E20402DFA434D50*))((::PBYTE)hIl2Cpp + CLASS_1_2BCAC54CCD8ECE83_METHOD_1_34D5285AA88ED29E_OFFSET))(this, a1, a2);
	}
};
