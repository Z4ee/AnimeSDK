#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A483BC3F77616F6.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_9DD07CD96ECD8FE6_METHOD_1_3CB561DA9080CC56_1_OFFSET UNITYSDK_OFFSET(0x119733B0)
#define CLASS_1_9DD07CD96ECD8FE6_METHOD_1_3CB561DA9080CC56_OFFSET UNITYSDK_OFFSET(0x11973200)
#define CLASS_1_9DD07CD96ECD8FE6_METHOD_1_5CA608FAE0A8FE27_OFFSET UNITYSDK_OFFSET(0x11973460)
#define CLASS_1_9DD07CD96ECD8FE6_METHOD_1_773109C009D520C4_OFFSET UNITYSDK_OFFSET(0x11973160)
#define CLASS_1_9DD07CD96ECD8FE6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11973360)
#define CLASS_1_9DD07CD96ECD8FE6_METHOD_1_E62AA23783E450AD_1_OFFSET UNITYSDK_OFFSET(0x119734F0)
#define CLASS_1_9DD07CD96ECD8FE6_METHOD_1_E62AA23783E450AD_OFFSET UNITYSDK_OFFSET(0x119732B0)
#define CLASS_1_9DD07CD96ECD8FE6__CTOR_OFFSET UNITYSDK_OFFSET(0x11973150)

inline static constexpr unsigned int Class_1_9DD07CD96ECD8FE6_TypeDefinitionIndex = 87291;

class Class_1_9DD07CD96ECD8FE6 : public ::System::Object
{
public:
	::System::Action_1<::Enum_3_4A483BC3F77616F6>* Field_1_1; // 0x10
	::System::Action_2<::Enum_3_4A483BC3F77616F6, ::System::Object*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DD07CD96ECD8FE6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_773109C009D520C4(::Enum_3_4A483BC3F77616F6 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4A483BC3F77616F6, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9DD07CD96ECD8FE6_METHOD_1_773109C009D520C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CB561DA9080CC56(::System::Action_1<::Enum_3_4A483BC3F77616F6>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Enum_3_4A483BC3F77616F6>*))((::PBYTE)hIl2Cpp + CLASS_1_9DD07CD96ECD8FE6_METHOD_1_3CB561DA9080CC56_OFFSET))(this, a1);
	}

	::System::Void Method_1_E62AA23783E450AD(::System::Action_2<::Enum_3_4A483BC3F77616F6, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Enum_3_4A483BC3F77616F6, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_9DD07CD96ECD8FE6_METHOD_1_E62AA23783E450AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DD07CD96ECD8FE6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3CB561DA9080CC56_1(::System::Action_1<::Enum_3_4A483BC3F77616F6>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Enum_3_4A483BC3F77616F6>*))((::PBYTE)hIl2Cpp + CLASS_1_9DD07CD96ECD8FE6_METHOD_1_3CB561DA9080CC56_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CA608FAE0A8FE27(::Enum_3_4A483BC3F77616F6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4A483BC3F77616F6))((::PBYTE)hIl2Cpp + CLASS_1_9DD07CD96ECD8FE6_METHOD_1_5CA608FAE0A8FE27_OFFSET))(this, a1);
	}

	::System::Void Method_1_E62AA23783E450AD_1(::System::Action_2<::Enum_3_4A483BC3F77616F6, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Enum_3_4A483BC3F77616F6, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_9DD07CD96ECD8FE6_METHOD_1_E62AA23783E450AD_1_OFFSET))(this, a1);
	}
};
