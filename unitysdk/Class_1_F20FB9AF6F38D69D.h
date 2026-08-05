#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0EEAD3778F96A256.h"
#include "unitysdk/Struct_2_430298E7CED86228.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"

namespace MoleMole::EffectSimulate { class NapEffectSimulatorComponent; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F20FB9AF6F38D69D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1861A870)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1861AC40)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_2144A24F9EC80B59_OFFSET UNITYSDK_OFFSET(0x18B57700)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_38264E5EEE5074E2_OFFSET UNITYSDK_OFFSET(0x18B57000)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x18B57AB0)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_3B86CF5A1A661FA8_1_OFFSET UNITYSDK_OFFSET(0x18B57A70)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_3B86CF5A1A661FA8_OFFSET UNITYSDK_OFFSET(0x18B572D0)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x18B57310)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x18B579D0)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_7DD3D03D8E87D146_OFFSET UNITYSDK_OFFSET(0x1861AC30)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1861AAC0)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x18B57330)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_967A283994DC8B2E_OFFSET UNITYSDK_OFFSET(0x18B58420)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x18B57FE0)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_B3A8877A146D62E8_OFFSET UNITYSDK_OFFSET(0x1861ACA0)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_C7A245A399C94E47_1_OFFSET UNITYSDK_OFFSET(0x18B580D0)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_C7A245A399C94E47_OFFSET UNITYSDK_OFFSET(0x18B57380)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_DE042ADF54338445_OFFSET UNITYSDK_OFFSET(0x18B57E40)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_EDE4049B2B6C0533_OFFSET UNITYSDK_OFFSET(0x18B58060)
#define CLASS_1_F20FB9AF6F38D69D_METHOD_1_F5F862E86A336E6A_OFFSET UNITYSDK_OFFSET(0x1861AC20)
#define CLASS_1_F20FB9AF6F38D69D__CTOR_OFFSET UNITYSDK_OFFSET(0x1861A8C0)

inline static constexpr unsigned int Class_1_F20FB9AF6F38D69D_TypeDefinitionIndex = 63623;

class Class_1_F20FB9AF6F38D69D : public ::System::Object
{
public:
	static ::Class_1_F20FB9AF6F38D69D** StaticGet_Field_1_11()
	{
		return (::Class_1_F20FB9AF6F38D69D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F20FB9AF6F38D69D_TypeDefinitionIndex)->GetStaticField(0x4F630);
	}
	// static const ::System::Int32 Field_1_2 = 0x40; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_1_9; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::System::Int32>>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x28
	::System::Collections::Generic::HashSet_1<::MoleMole::EffectSimulate::NapEffectSimulatorMgr*>* Field_1_10; // 0x30
	::UnityEngine::Jobs::TransformAccessArray Field_1_1; // 0x38
	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> Field_1_7; // 0x40
	::Unity::Collections::NativeList_1<::Struct_2_0EEAD3778F96A256> Field_1_0; // 0x50
	::System::Boolean Field_1_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> Method_1_F5F862E86A336E6A()
	{
		return ((::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_F5F862E86A336E6A_OFFSET))(this);
	}

	::UnityEngine::Jobs::TransformAccessArray Method_1_7DD3D03D8E87D146()
	{
		return ((::UnityEngine::Jobs::TransformAccessArray(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_7DD3D03D8E87D146_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_B3A8877A146D62E8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_B3A8877A146D62E8_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_38264E5EEE5074E2(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_38264E5EEE5074E2_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Method_1_3B86CF5A1A661FA8()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_3B86CF5A1A661FA8_OFFSET))(this);
	}

	::Struct_2_430298E7CED86228 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_430298E7CED86228(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_C7A245A399C94E47(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_C7A245A399C94E47_OFFSET))(this, a1);
	}

	::System::Void Method_1_2144A24F9EC80B59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_2144A24F9EC80B59_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Method_1_3B86CF5A1A661FA8_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_3B86CF5A1A661FA8_1_OFFSET))(this);
	}

	::System::Void Method_1_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_1_DE042ADF54338445(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_DE042ADF54338445_OFFSET))(this, a1);
	}

	static ::Class_1_F20FB9AF6F38D69D* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_F20FB9AF6F38D69D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_EDE4049B2B6C0533(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_EDE4049B2B6C0533_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7A245A399C94E47_1(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_C7A245A399C94E47_1_OFFSET))(this, a1);
	}

	::Unity::Collections::NativeList_1<::Struct_2_0EEAD3778F96A256> Method_1_967A283994DC8B2E()
	{
		return ((::Unity::Collections::NativeList_1<::Struct_2_0EEAD3778F96A256>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20FB9AF6F38D69D_METHOD_1_967A283994DC8B2E_OFFSET))(this);
	}
};
