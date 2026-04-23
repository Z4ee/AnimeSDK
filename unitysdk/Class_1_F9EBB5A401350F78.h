#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_182;
class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F9EBB5A401350F78_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11E352C0)
#define CLASS_1_F9EBB5A401350F78_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x11E357F0)
#define CLASS_1_F9EBB5A401350F78_METHOD_1_301CAF2C32BB6D08_OFFSET UNITYSDK_OFFSET(0x11E355E0)
#define CLASS_1_F9EBB5A401350F78_METHOD_1_8D595942D57F40CD_OFFSET UNITYSDK_OFFSET(0x11E35490)
#define CLASS_1_F9EBB5A401350F78_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11E35420)
#define CLASS_1_F9EBB5A401350F78__CTOR_OFFSET UNITYSDK_OFFSET(0x11E35160)

inline static constexpr unsigned int Class_1_F9EBB5A401350F78_TypeDefinitionIndex = 71722;

class Class_1_F9EBB5A401350F78 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FD611945730E269E*>* Field_1_3; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>* a1, ::Class_1_F9FBCC956DFCF137_17* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>*, ::Class_1_F9FBCC956DFCF137_17*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9EBB5A401350F78__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EBB5A401350F78_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EBB5A401350F78_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_8D595942D57F40CD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F9EBB5A401350F78_METHOD_1_8D595942D57F40CD_OFFSET))(this, a1);
	}

	::Class_1_FD611945730E269E* Method_1_301CAF2C32BB6D08()
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9EBB5A401350F78_METHOD_1_301CAF2C32BB6D08_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F9EBB5A401350F78_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
