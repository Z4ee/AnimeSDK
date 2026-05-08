#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Struct_2_4A663F55BC7468E2.h"
#include "unitysdk/Struct_2_B1941CB6F01E0E82.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_5382E38C73403999_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14131EC0)
#define CLASS_2_5382E38C73403999_METHOD_2_1094E0C49C268B0B_1_OFFSET UNITYSDK_OFFSET(0x141345E0)
#define CLASS_2_5382E38C73403999_METHOD_2_1094E0C49C268B0B_OFFSET UNITYSDK_OFFSET(0x14132A50)
#define CLASS_2_5382E38C73403999_METHOD_2_47C3094B9BEBAE50_OFFSET UNITYSDK_OFFSET(0x14132FA0)
#define CLASS_2_5382E38C73403999_METHOD_2_554208C84546EE8E_OFFSET UNITYSDK_OFFSET(0x14132CE0)
#define CLASS_2_5382E38C73403999_METHOD_2_7073B423B15F467A_OFFSET UNITYSDK_OFFSET(0x141322C0)
#define CLASS_2_5382E38C73403999_METHOD_2_8856EAF4107B25FF_OFFSET UNITYSDK_OFFSET(0x14134070)
#define CLASS_2_5382E38C73403999_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x14133C50)
#define CLASS_2_5382E38C73403999_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x141342D0)
#define CLASS_2_5382E38C73403999_METHOD_2_CF69CA82465CB63A_OFFSET UNITYSDK_OFFSET(0x141336F0)
#define CLASS_2_5382E38C73403999_METHOD_2_DDBB302CF7A9787C_OFFSET UNITYSDK_OFFSET(0x14133350)
#define CLASS_2_5382E38C73403999_METHOD_2_DF020A3AEF2B8AFC_OFFSET UNITYSDK_OFFSET(0x14132590)
#define CLASS_2_5382E38C73403999_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x14134420)
#define CLASS_2_5382E38C73403999_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x141340D0)
#define CLASS_2_5382E38C73403999_METHOD_2_F73A863594E0C572_OFFSET UNITYSDK_OFFSET(0x14132AB0)
#define CLASS_2_5382E38C73403999_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14131CD0)
#define CLASS_2_5382E38C73403999__CCTOR_OFFSET UNITYSDK_OFFSET(0x141322A0)
#define CLASS_2_5382E38C73403999__CTOR_OFFSET UNITYSDK_OFFSET(0x14132280)

inline static constexpr unsigned int Class_2_5382E38C73403999_TypeDefinitionIndex = 53855;

class Class_2_5382E38C73403999 : public ::Foundation::SingletonDisposable_1<::Class_2_5382E38C73403999*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5382E38C73403999_TypeDefinitionIndex)->GetStaticField(0x10100);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5382E38C73403999_TypeDefinitionIndex)->GetStaticField(0x10104);
	}
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Animator*>* Field_2_5; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_4; // 0x28
	::UnityEngine::Jobs::TransformAccessArray Field_2_8; // 0x30
	::Unity::Collections::NativeQueue_1<::Struct_2_4A663F55BC7468E2> Field_2_7; // 0x38
	::Unity::Collections::NativeList_1<::Struct_2_B1941CB6F01E0E82> Field_2_6; // 0x50
	::Unity::Jobs::JobHandle Field_2_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7073B423B15F467A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_7073B423B15F467A_OFFSET))(this);
	}

	::System::Void Method_2_1094E0C49C268B0B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_1094E0C49C268B0B_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_F73A863594E0C572(::Struct_2_B1941CB6F01E0E82& a1, ::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4A663F55BC7468E2> a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::Struct_2_B1941CB6F01E0E82&, ::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4A663F55BC7468E2>, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_F73A863594E0C572_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_554208C84546EE8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_554208C84546EE8E_OFFSET))(this);
	}

	::System::Void Method_2_47C3094B9BEBAE50()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_47C3094B9BEBAE50_OFFSET))(this);
	}

	::System::Void Method_2_DDBB302CF7A9787C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_DDBB302CF7A9787C_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_DF020A3AEF2B8AFC(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_DF020A3AEF2B8AFC_OFFSET))(a1);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	static ::System::Boolean Method_2_8856EAF4107B25FF(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_8856EAF4107B25FF_OFFSET))(a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_CF69CA82465CB63A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_CF69CA82465CB63A_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_1094E0C49C268B0B_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_1094E0C49C268B0B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5382E38C73403999_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};
