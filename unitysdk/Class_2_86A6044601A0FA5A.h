#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_2_86A6044601A0FA5A_Class_1_64BE3B8CF3C8A3A7;
class Class_2_86A6044601A0FA5A_Class_1_6EDBC2C7855F88CE;
namespace RPG::Client { class CharacterEffect; }
namespace RPG::Client { class MonoEffectPluginBodyAlchemize; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_86A6044601A0FA5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9858520)
#define CLASS_2_86A6044601A0FA5A_METHOD_2_1B5B1459A052AD3F_OFFSET UNITYSDK_OFFSET(0x9858C60)
#define CLASS_2_86A6044601A0FA5A_METHOD_2_5EA1D99C1122FD07_OFFSET UNITYSDK_OFFSET(0x9856CA0)
#define CLASS_2_86A6044601A0FA5A_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x9859FB0)
#define CLASS_2_86A6044601A0FA5A_METHOD_2_92A998451FF61049_OFFSET UNITYSDK_OFFSET(0x9858890)
#define CLASS_2_86A6044601A0FA5A_METHOD_2_B7252E7FA488DD14_OFFSET UNITYSDK_OFFSET(0x98585A0)
#define CLASS_2_86A6044601A0FA5A_METHOD_2_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x9856D20)
#define CLASS_2_86A6044601A0FA5A_METHOD_2_FF63E816B4D956CD_1_OFFSET UNITYSDK_OFFSET(0x9859540)
#define CLASS_2_86A6044601A0FA5A_METHOD_2_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0x9859180)
#define CLASS_2_86A6044601A0FA5A__CCTOR_OFFSET UNITYSDK_OFFSET(0x9859F70)
#define CLASS_2_86A6044601A0FA5A__CTOR_OFFSET UNITYSDK_OFFSET(0x9859F60)
#define CLASS_2_86A6044601A0FA5A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x985A020)

inline static constexpr unsigned int Class_2_86A6044601A0FA5A_TypeDefinitionIndex = 64398;

class Class_2_86A6044601A0FA5A : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_86A6044601A0FA5A_TypeDefinitionIndex)->GetStaticField(0x5440);
	}
	::UnityEngine::Transform* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Class_2_86A6044601A0FA5A_Class_1_6EDBC2C7855F88CE*>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_2_86A6044601A0FA5A_Class_1_64BE3B8CF3C8A3A7*>* Field_2_0; // 0x28
	::RPG::Client::CharacterEffect* Field_2_4; // 0x30
	::System::Boolean Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A__CCTOR_OFFSET))();
	}

	::System::Void Method_2_5EA1D99C1122FD07(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_METHOD_2_5EA1D99C1122FD07_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_92A998451FF61049(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_METHOD_2_92A998451FF61049_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_METHOD_2_FF63E816B4D956CD_OFFSET))(this);
	}

	::System::Void Method_2_FF63E816B4D956CD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_METHOD_2_FF63E816B4D956CD_1_OFFSET))(this);
	}

	::System::Void Method_2_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_METHOD_2_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_2_B7252E7FA488DD14()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_METHOD_2_B7252E7FA488DD14_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginBodyAlchemize* Method_2_1B5B1459A052AD3F()
	{
		return ((::RPG::Client::MonoEffectPluginBodyAlchemize*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_METHOD_2_1B5B1459A052AD3F_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
