#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x13AC48F0)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_0F3D59CED568B39A_OFFSET UNITYSDK_OFFSET(0x13AC4030)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13AC47B0)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_34F7947C923561B2_OFFSET UNITYSDK_OFFSET(0x13AC4270)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0x13AC4200)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_4A17C0F4A08BBA38_OFFSET UNITYSDK_OFFSET(0x13AC37F0)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x13AC4410)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x13AC4540)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_EFB5322CAF695953_OFFSET UNITYSDK_OFFSET(0x13AC3EA0)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_F00C9C530ADB1CA9_OFFSET UNITYSDK_OFFSET(0x13AC4380)
#define CLASS_1_E05E7A6D9DE9138B__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AC4C50)
#define CLASS_1_E05E7A6D9DE9138B__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC49D0)

inline static constexpr unsigned int Class_1_E05E7A6D9DE9138B_TypeDefinitionIndex = 56016;

class Class_1_E05E7A6D9DE9138B : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E05E7A6D9DE9138B_TypeDefinitionIndex)->GetStaticField(0x12080);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E05E7A6D9DE9138B_TypeDefinitionIndex)->GetStaticField(0x12084);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Object*>* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::UnityEngine::Object*>*>* Field_1_6; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_4A17C0F4A08BBA38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_4A17C0F4A08BBA38_OFFSET))(this);
	}

	::System::Void Method_1_EFB5322CAF695953(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_EFB5322CAF695953_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F3D59CED568B39A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_0F3D59CED568B39A_OFFSET))(this, a1);
	}

	::System::Void Method_1_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_485502A9571E17C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_34F7947C923561B2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_34F7947C923561B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F00C9C530ADB1CA9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_F00C9C530ADB1CA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}
};
