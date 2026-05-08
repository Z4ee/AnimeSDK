#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_245.h"
#include "unitysdk/System/Object.h"

class Class_2_757B3E5AD8A2E22F;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8B5B22093ECB21F6_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11990D80)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x11990C10)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_154554A987D34A5A_OFFSET UNITYSDK_OFFSET(0x11990960)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x119903A0)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_19F311AC09A8016C_OFFSET UNITYSDK_OFFSET(0x11991330)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11990F00)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x119906A0)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_52C88C7E0D055594_OFFSET UNITYSDK_OFFSET(0x11990710)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_7A22589113E99B91_OFFSET UNITYSDK_OFFSET(0x11990AB0)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_82AED606E137C919_OFFSET UNITYSDK_OFFSET(0x11990F90)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_A43FE04A0FB5ED59_OFFSET UNITYSDK_OFFSET(0x11991250)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x11990D10)
#define CLASS_1_8B5B22093ECB21F6_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x11990400)
#define CLASS_1_8B5B22093ECB21F6__CTOR_OFFSET UNITYSDK_OFFSET(0x11990E40)

inline static constexpr unsigned int Class_1_8B5B22093ECB21F6_TypeDefinitionIndex = 54813;

class Class_1_8B5B22093ECB21F6 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x18
	::Struct_2_1862835F8661A21F_245 Field_1_0; // 0x20
	::Il2CppArray<::Class_2_757B3E5AD8A2E22F*>* Field_1_1; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_5; // 0x40
	::System::Int32 Field_1_4; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_1_154554A987D34A5A(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_154554A987D34A5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_52C88C7E0D055594(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_52C88C7E0D055594_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_2_757B3E5AD8A2E22F* Method_1_82AED606E137C919(::System::Int32 a1)
	{
		return ((::Class_2_757B3E5AD8A2E22F*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_82AED606E137C919_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_2_757B3E5AD8A2E22F*>* Method_1_7A22589113E99B91()
	{
		return ((::Il2CppArray<::Class_2_757B3E5AD8A2E22F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_7A22589113E99B91_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_A43FE04A0FB5ED59(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_A43FE04A0FB5ED59_OFFSET))(this, a1);
	}

	::Class_2_757B3E5AD8A2E22F* Method_1_19F311AC09A8016C(::System::Int32 a1)
	{
		return ((::Class_2_757B3E5AD8A2E22F*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B5B22093ECB21F6_METHOD_1_19F311AC09A8016C_OFFSET))(this, a1);
	}
};
