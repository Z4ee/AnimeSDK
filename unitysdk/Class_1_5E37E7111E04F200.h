#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_32;
class Class_2_69FE2A2F26EAE95C;
class Class_2_AB7222869DE4C4BF;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define CLASS_1_5E37E7111E04F200_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1F436FB0)
#define CLASS_1_5E37E7111E04F200_METHOD_1_9549A972A390745A_OFFSET UNITYSDK_OFFSET(0x1F436EE0)
#define CLASS_1_5E37E7111E04F200_METHOD_1_A7FD041C3B0AC101_OFFSET UNITYSDK_OFFSET(0x1F437060)
#define CLASS_1_5E37E7111E04F200_METHOD_1_BE07475E6B6B99D9_OFFSET UNITYSDK_OFFSET(0x1F436BC0)
#define CLASS_1_5E37E7111E04F200_METHOD_1_E6D6AB6C9DBFD15F_OFFSET UNITYSDK_OFFSET(0x1F436FC0)
#define CLASS_1_5E37E7111E04F200__CTOR_OFFSET UNITYSDK_OFFSET(0x1F436BB0)

inline static constexpr unsigned int Class_1_5E37E7111E04F200_TypeDefinitionIndex = 19142;

class Class_1_5E37E7111E04F200 : public ::System::Object
{
public:
	::System::Func_2<::Class_0_16E4307DCC419505_32*, ::System::Int32>* Field_1_2; // 0x10
	::Class_2_AB7222869DE4C4BF* Field_1_0; // 0x18
	::System::Action_1<::Class_0_16E4307DCC419505_32*>* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_AB7222869DE4C4BF* a1, ::System::Func_2<::Class_0_16E4307DCC419505_32*, ::System::Int32>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_32*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AB7222869DE4C4BF*, ::System::Func_2<::Class_0_16E4307DCC419505_32*, ::System::Int32>*, ::System::Action_1<::Class_0_16E4307DCC419505_32*>*))((::PBYTE)hIl2Cpp + CLASS_1_5E37E7111E04F200__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_1_5E37E7111E04F200* Method_1_BE07475E6B6B99D9(::Class_2_AB7222869DE4C4BF* a1, ::System::Reflection::PropertyInfo* a2, ::System::Reflection::MethodInfo* a3)
	{
		return ((::Class_1_5E37E7111E04F200*(*)(::Class_2_AB7222869DE4C4BF*, ::System::Reflection::PropertyInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5E37E7111E04F200_METHOD_1_BE07475E6B6B99D9_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_5E37E7111E04F200* Method_1_9549A972A390745A(::Class_2_AB7222869DE4C4BF* a1)
	{
		return ((::Class_1_5E37E7111E04F200*(*)(::Class_2_AB7222869DE4C4BF*))((::PBYTE)hIl2Cpp + CLASS_1_5E37E7111E04F200_METHOD_1_9549A972A390745A_OFFSET))(a1);
	}

	::Class_2_AB7222869DE4C4BF* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_AB7222869DE4C4BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E37E7111E04F200_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::Class_2_69FE2A2F26EAE95C* Method_1_E6D6AB6C9DBFD15F(::Class_0_16E4307DCC419505_32* a1)
	{
		return ((::Class_2_69FE2A2F26EAE95C*(*)(::PVOID, ::Class_0_16E4307DCC419505_32*))((::PBYTE)hIl2Cpp + CLASS_1_5E37E7111E04F200_METHOD_1_E6D6AB6C9DBFD15F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A7FD041C3B0AC101(::Class_0_16E4307DCC419505_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_32*))((::PBYTE)hIl2Cpp + CLASS_1_5E37E7111E04F200_METHOD_1_A7FD041C3B0AC101_OFFSET))(this, a1);
	}
};
