#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_2D9CC120C3114C37_Enum_3_6A7C46D848DB3953.h"
#include "unitysdk/Class_3_2D9CC120C3114C37_Struct_2_7D740BB091DF59E1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole { class MonoEffectPluginFollow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2D9CC120C3114C37_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xD0C6700)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_2503976170FFA354_OFFSET UNITYSDK_OFFSET(0xD0C62A0)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_365F29BEAE9055AF_OFFSET UNITYSDK_OFFSET(0xD0C6FC0)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_46D78B8894C3D058_OFFSET UNITYSDK_OFFSET(0xD0C6610)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0xD0C6FB0)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_543A0015448C59F2_OFFSET UNITYSDK_OFFSET(0xD0C69A0)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_5C8BA5F8E857A2FC_OFFSET UNITYSDK_OFFSET(0xD0C68B0)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_81C4E2D1295BCC95_OFFSET UNITYSDK_OFFSET(0xD0C6E80)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xD0C6820)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_B2AE43CACB777B2F_OFFSET UNITYSDK_OFFSET(0xD0C73C0)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_C38DE0E34C398638_OFFSET UNITYSDK_OFFSET(0xD0C7190)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xD0C7180)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xD0C7560)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_DFBA32323EBA8DC1_OFFSET UNITYSDK_OFFSET(0xD0C6FA0)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xD0C6810)
#define CLASS_3_2D9CC120C3114C37_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD0C6800)
#define CLASS_3_2D9CC120C3114C37_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xD0C6110)
#define CLASS_3_2D9CC120C3114C37__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0C6750)
#define CLASS_3_2D9CC120C3114C37__CTOR_OFFSET UNITYSDK_OFFSET(0xD0C67F0)

inline static constexpr unsigned int Class_3_2D9CC120C3114C37_TypeDefinitionIndex = 75408;

class Class_3_2D9CC120C3114C37 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_3_4()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2D9CC120C3114C37_TypeDefinitionIndex)->GetStaticField(0x385B0);
	}
	// static const ::System::Int32 Field_3_14 = 0x69; // 0x0
	::MoleMole::MonoEffectPluginFollow* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*>* Field_3_9; // 0x50
	::System::Collections::Generic::List_1<::Class_3_2D9CC120C3114C37_Struct_2_7D740BB091DF59E1>* Field_3_13; // 0x58
	::Class_3_2D9CC120C3114C37_Enum_3_6A7C46D848DB3953 Field_3_11; // 0x60
	::System::Boolean Field_3_12; // 0x64
	::System::UInt16 Field_3_2; // 0x66
	::UnityEngine::Quaternion Field_3_7; // 0x68
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_3_5; // 0x78
	::UnityEngine::Vector3 Field_3_6; // 0xB0
	::System::Boolean Field_3_10; // 0xBC
	::System::Boolean Field_3_3; // 0xBD
	::UnityEngine::Vector3 Field_3_8; // 0xC0
	::System::Int32 Field_3_0; // 0xCC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_2503976170FFA354(::MoleMole::MonoEffectPluginFollow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginFollow*))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_2503976170FFA354_OFFSET))(this, a1);
	}

	::System::Void Method_3_543A0015448C59F2(::Class_3_4875884AB352B34E* a1, ::Class_3_D6DA183EF60F02C8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4875884AB352B34E*, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_543A0015448C59F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_81C4E2D1295BCC95(::Class_3_2D9CC120C3114C37_Struct_2_7D740BB091DF59E1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_2D9CC120C3114C37_Struct_2_7D740BB091DF59E1))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_81C4E2D1295BCC95_OFFSET))(this, a1);
	}

	::MoleMole::MonoEffectPluginFollow* Method_3_DFBA32323EBA8DC1()
	{
		return ((::MoleMole::MonoEffectPluginFollow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_DFBA32323EBA8DC1_OFFSET))(this);
	}

	::Class_3_2D9CC120C3114C37_Enum_3_6A7C46D848DB3953 Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_2D9CC120C3114C37_Enum_3_6A7C46D848DB3953(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Void Method_3_365F29BEAE9055AF(::System::Object* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_365F29BEAE9055AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_5C8BA5F8E857A2FC(::System::UInt16 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_5C8BA5F8E857A2FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C38DE0E34C398638(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_C38DE0E34C398638_OFFSET))(this, a1);
	}

	::System::Void Method_3_B2AE43CACB777B2F(::Class_3_2D9CC120C3114C37_Enum_3_6A7C46D848DB3953 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_2D9CC120C3114C37_Enum_3_6A7C46D848DB3953))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_B2AE43CACB777B2F_OFFSET))(this, a1);
	}

	::System::Void Method_3_46D78B8894C3D058(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_46D78B8894C3D058_OFFSET))(this, a1);
	}

	static ::Class_3_2D9CC120C3114C37* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_2D9CC120C3114C37*(*)())((::PBYTE)hIl2Cpp + CLASS_3_2D9CC120C3114C37_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
