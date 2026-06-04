#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_191;
class Class_1_F9FBCC956DFCF137_25;
class Class_1_FD611945730E269E;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3F1549C2A53A3A5B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF26C70)
#define CLASS_1_3F1549C2A53A3A5B_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xBF27210)
#define CLASS_1_3F1549C2A53A3A5B_METHOD_1_4040EB4607655A3D_OFFSET UNITYSDK_OFFSET(0xBF26F60)
#define CLASS_1_3F1549C2A53A3A5B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBF26DA0)
#define CLASS_1_3F1549C2A53A3A5B_METHOD_1_E3ADA5CA2C064E44_OFFSET UNITYSDK_OFFSET(0xBF26E20)
#define CLASS_1_3F1549C2A53A3A5B__CTOR_OFFSET UNITYSDK_OFFSET(0xBF26A70)

inline static constexpr unsigned int Class_1_3F1549C2A53A3A5B_TypeDefinitionIndex = 72744;

class Class_1_3F1549C2A53A3A5B : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_FD611945730E269E*>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* a1, ::Class_1_F9FBCC956DFCF137_25* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>*, ::Class_1_F9FBCC956DFCF137_25*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3F1549C2A53A3A5B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F1549C2A53A3A5B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F1549C2A53A3A5B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_E3ADA5CA2C064E44(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F1549C2A53A3A5B_METHOD_1_E3ADA5CA2C064E44_OFFSET))(this, a1);
	}

	::Class_1_FD611945730E269E* Method_1_4040EB4607655A3D()
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F1549C2A53A3A5B_METHOD_1_4040EB4607655A3D_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3F1549C2A53A3A5B_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
