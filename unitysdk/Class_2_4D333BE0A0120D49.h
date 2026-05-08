#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_3D5F31420A8FFFAB.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_4.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NapLodControllerGroup;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4D333BE0A0120D49_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF525450)
#define CLASS_2_4D333BE0A0120D49_METHOD_2_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0xF526920)
#define CLASS_2_4D333BE0A0120D49_METHOD_2_27D653C7C945D9C3_OFFSET UNITYSDK_OFFSET(0xF526C30)
#define CLASS_2_4D333BE0A0120D49_METHOD_2_428BD246F5FAAA99_OFFSET UNITYSDK_OFFSET(0xF525F30)
#define CLASS_2_4D333BE0A0120D49_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0xF526340)
#define CLASS_2_4D333BE0A0120D49_METHOD_2_A7D50E28504198F7_OFFSET UNITYSDK_OFFSET(0xF526EC0)
#define CLASS_2_4D333BE0A0120D49_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xF525840)
#define CLASS_2_4D333BE0A0120D49_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xF525D70)
#define CLASS_2_4D333BE0A0120D49_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xF526720)
#define CLASS_2_4D333BE0A0120D49_METHOD_2_F5F664453A058EF6_OFFSET UNITYSDK_OFFSET(0xF525990)
#define CLASS_2_4D333BE0A0120D49_METHOD_2_FE7BE152F33A3B50_1_OFFSET UNITYSDK_OFFSET(0xF525CC0)
#define CLASS_2_4D333BE0A0120D49_METHOD_2_FE7BE152F33A3B50_OFFSET UNITYSDK_OFFSET(0xF525C10)
#define CLASS_2_4D333BE0A0120D49_ONCREATE_OFFSET UNITYSDK_OFFSET(0xF525270)
#define CLASS_2_4D333BE0A0120D49__CCTOR_OFFSET UNITYSDK_OFFSET(0xF525830)
#define CLASS_2_4D333BE0A0120D49__CTOR_OFFSET UNITYSDK_OFFSET(0xF525810)

inline static constexpr unsigned int Class_2_4D333BE0A0120D49_TypeDefinitionIndex = 73748;

class Class_2_4D333BE0A0120D49 : public ::Foundation::SingletonDisposable_1<::Class_2_4D333BE0A0120D49*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4D333BE0A0120D49_TypeDefinitionIndex)->GetStaticField(0xE7A0);
	}
	::System::Collections::Generic::HashSet_1<::NapLodControllerGroup*>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::NapLodControllerGroup*, ::System::Int32>* Field_2_3; // 0x18
	::System::Collections::Generic::HashSet_1<::NapLodControllerGroup*>* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::NapLodControllerGroup*>* Field_2_5; // 0x28
	::Unity::Jobs::JobHandle Field_2_8; // 0x30
	::Unity::Collections::NativeQueue_1<::Struct_2_4C8453486C91E3A1_4> Field_2_6; // 0x40
	::UnityEngine::Jobs::TransformAccessArray Field_2_7; // 0x58
	::Unity::Collections::NativeList_1<::Struct_2_3D5F31420A8FFFAB> Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	static ::System::Void Method_2_F5F664453A058EF6(::System::Int32 a1, ::Struct_2_3D5F31420A8FFFAB& a2, ::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4C8453486C91E3A1_4> a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::System::Int32, ::Struct_2_3D5F31420A8FFFAB&, ::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4C8453486C91E3A1_4>, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_METHOD_2_F5F664453A058EF6_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_FE7BE152F33A3B50(::NapLodControllerGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_METHOD_2_FE7BE152F33A3B50_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE7BE152F33A3B50_1(::NapLodControllerGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_METHOD_2_FE7BE152F33A3B50_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_27D653C7C945D9C3(::NapLodControllerGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_METHOD_2_27D653C7C945D9C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_428BD246F5FAAA99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_METHOD_2_428BD246F5FAAA99_OFFSET))(this);
	}

	::System::Void Method_2_A7D50E28504198F7(::NapLodControllerGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_METHOD_2_A7D50E28504198F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B3D8773D1869301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_METHOD_2_1B3D8773D1869301_OFFSET))(this);
	}

	::System::Void Method_2_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D333BE0A0120D49_METHOD_2_A1C7122184516C18_OFFSET))(this);
	}
};
