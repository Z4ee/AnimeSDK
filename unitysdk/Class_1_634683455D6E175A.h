#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_264.h"
#include "unitysdk/System/Object.h"

class Class_2_12C7427695D73C29;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_634683455D6E175A_FINALIZE_OFFSET UNITYSDK_OFFSET(0x189C6380)
#define CLASS_1_634683455D6E175A_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x1898D9C0)
#define CLASS_1_634683455D6E175A_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x189C6CE0)
#define CLASS_1_634683455D6E175A_METHOD_1_5F6BDF3FF43F02F0_OFFSET UNITYSDK_OFFSET(0x189C66D0)
#define CLASS_1_634683455D6E175A_METHOD_1_6F5CEC33F06E3A5A_OFFSET UNITYSDK_OFFSET(0x189C6910)
#define CLASS_1_634683455D6E175A_METHOD_1_7C19027BC0D7BCAF_OFFSET UNITYSDK_OFFSET(0x189C5AD0)
#define CLASS_1_634683455D6E175A_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x189C61E0)
#define CLASS_1_634683455D6E175A_METHOD_1_9BAB385F8658C2AD_OFFSET UNITYSDK_OFFSET(0x189C5CE0)
#define CLASS_1_634683455D6E175A_METHOD_1_A5CDD95397E12BA4_1_OFFSET UNITYSDK_OFFSET(0x189C6F60)
#define CLASS_1_634683455D6E175A_METHOD_1_A5CDD95397E12BA4_OFFSET UNITYSDK_OFFSET(0x189C6A20)
#define CLASS_1_634683455D6E175A_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x189C62A0)
#define CLASS_1_634683455D6E175A_METHOD_1_BD917F4EC8B82D68_OFFSET UNITYSDK_OFFSET(0x189C5AE0)
#define CLASS_1_634683455D6E175A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x189C5960)
#define CLASS_1_634683455D6E175A_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x189C5980)
#define CLASS_1_634683455D6E175A_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x189C65E0)
#define CLASS_1_634683455D6E175A_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x189C66B0)
#define CLASS_1_634683455D6E175A__CTOR_OFFSET UNITYSDK_OFFSET(0x189C6520)

inline static constexpr unsigned int Class_1_634683455D6E175A_TypeDefinitionIndex = 11099;

class Class_1_634683455D6E175A : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::Struct_2_1862835F8661A21F_264 Field_1_0; // 0x18
	::Il2CppArray<::Class_2_12C7427695D73C29*>* Field_1_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x40
	::System::Int32 Field_1_4; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_BD917F4EC8B82D68(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_BD917F4EC8B82D68_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C19027BC0D7BCAF(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_7C19027BC0D7BCAF_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_12C7427695D73C29*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_12C7427695D73C29*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::Class_2_12C7427695D73C29* Method_1_5F6BDF3FF43F02F0(::System::Int32 a1)
	{
		return ((::Class_2_12C7427695D73C29*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_5F6BDF3FF43F02F0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_1_6F5CEC33F06E3A5A(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_6F5CEC33F06E3A5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_12C7427695D73C29*>* Method_1_A5CDD95397E12BA4(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_12C7427695D73C29*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_A5CDD95397E12BA4_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BAB385F8658C2AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_9BAB385F8658C2AD_OFFSET))(this);
	}

	::Class_2_12C7427695D73C29* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_12C7427695D73C29*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_12C7427695D73C29*>* Method_1_A5CDD95397E12BA4_1(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_12C7427695D73C29*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_A5CDD95397E12BA4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634683455D6E175A_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
