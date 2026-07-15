#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_790C3EB71BE1365A_METHOD_1_303D3AEC876F84B2_OFFSET UNITYSDK_OFFSET(0x186D0690)
#define CLASS_1_790C3EB71BE1365A_METHOD_1_3C83A906C7260423_OFFSET UNITYSDK_OFFSET(0x186D0B80)
#define CLASS_1_790C3EB71BE1365A_METHOD_1_5168F3C444604898_OFFSET UNITYSDK_OFFSET(0x186D06F0)
#define CLASS_1_790C3EB71BE1365A_METHOD_1_79B265BE1B093513_OFFSET UNITYSDK_OFFSET(0x186D10C0)
#define CLASS_1_790C3EB71BE1365A_METHOD_1_9BADE3E301981C8B_OFFSET UNITYSDK_OFFSET(0x186D11E0)
#define CLASS_1_790C3EB71BE1365A_METHOD_1_C2D0A28EDD88D4E9_OFFSET UNITYSDK_OFFSET(0x186D1050)
#define CLASS_1_790C3EB71BE1365A__CTOR_OFFSET UNITYSDK_OFFSET(0x186D0680)

inline static constexpr unsigned int Class_1_790C3EB71BE1365A_TypeDefinitionIndex = 59738;

class Class_1_790C3EB71BE1365A : public ::System::Object
{
public:
	::System::Action_1<::Class_1_075C34D03AFA1215_7*>* Field_1_0; // 0x10
	::Class_1_075C34D03AFA1215_7* Field_1_1; // 0x18

	::System::Void _ctor(::System::Action_1<::Class_1_075C34D03AFA1215_7*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_075C34D03AFA1215_7*>*))((::PBYTE)hIl2Cpp + CLASS_1_790C3EB71BE1365A__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_303D3AEC876F84B2(::Class_1_075C34D03AFA1215_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_790C3EB71BE1365A_METHOD_1_303D3AEC876F84B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C83A906C7260423(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_790C3EB71BE1365A_METHOD_1_3C83A906C7260423_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C2D0A28EDD88D4E9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_790C3EB71BE1365A_METHOD_1_C2D0A28EDD88D4E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_79B265BE1B093513(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_790C3EB71BE1365A_METHOD_1_79B265BE1B093513_OFFSET))(this, a1);
	}

	::Class_1_075C34D03AFA1215_7* Method_1_9BADE3E301981C8B()
	{
		return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_790C3EB71BE1365A_METHOD_1_9BADE3E301981C8B_OFFSET))(this);
	}

	::System::Boolean Method_1_5168F3C444604898(::Class_1_075C34D03AFA1215_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_790C3EB71BE1365A_METHOD_1_5168F3C444604898_OFFSET))(this, a1);
	}
};
