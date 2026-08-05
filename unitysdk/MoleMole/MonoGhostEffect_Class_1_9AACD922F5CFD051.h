#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/MonoGhostEffect_Struct_2_9167F944B15AEA92.h"
#include "unitysdk/Struct_2_70FF0A172150B476.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_3_FFD0045B4597F294;
class NapGradient;
namespace MoleMole { class MonoGhostEffect; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1080ACF0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_21979913643BB809_OFFSET UNITYSDK_OFFSET(0x1080B310)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1080D3A0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x1080BD60)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x1080B4A0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1080AC30)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x1080D400)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10810690)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_3765338D546EFAE7_OFFSET UNITYSDK_OFFSET(0x1080B570)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x108107D0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10810830)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_499E04DDEB14CC7B_OFFSET UNITYSDK_OFFSET(0x1080B820)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_4AD015C8B128B3A0_OFFSET UNITYSDK_OFFSET(0x1080DD10)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_5FA5B4B5299932AC_OFFSET UNITYSDK_OFFSET(0x1080BE40)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_634EC99842BE8134_OFFSET UNITYSDK_OFFSET(0x1080E510)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_80AFF79D869A05A6_OFFSET UNITYSDK_OFFSET(0x1080E9B0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_85F9AAEEA394BE31_1_OFFSET UNITYSDK_OFFSET(0x10810570)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_85F9AAEEA394BE31_OFFSET UNITYSDK_OFFSET(0x1080B3D0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x1080B2A0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1080E440)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_A0E0FB8E164709DE_OFFSET UNITYSDK_OFFSET(0x1080D620)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_AE712F8BEC77C268_OFFSET UNITYSDK_OFFSET(0x1080A9D0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_AEBA7FC38248F3FF_OFFSET UNITYSDK_OFFSET(0x1080B7D0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_B00DACF23A35F308_OFFSET UNITYSDK_OFFSET(0x1080E890)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_B1712F69A7605204_OFFSET UNITYSDK_OFFSET(0x1080CB60)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_B351685B52F64011_OFFSET UNITYSDK_OFFSET(0x1080AF10)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_B80A153D9268702C_OFFSET UNITYSDK_OFFSET(0x10810880)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_C3D92A0C64DE0E19_OFFSET UNITYSDK_OFFSET(0x1080A910)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_C5D39B68EE6A1786_OFFSET UNITYSDK_OFFSET(0x1080DFD0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1080DF90)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1080B530)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0x1080AFB0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x10810770)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051__CTOR_OFFSET UNITYSDK_OFFSET(0x1080A330)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGhostEffect_Class_1_9AACD922F5CFD051_TypeDefinitionIndex = 70634;

	class MonoGhostEffect_Class_1_9AACD922F5CFD051 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* Field_1_11; // 0x10
		::UnityEngine::Mesh* Field_1_0; // 0x18
		::Il2CppArray<::System::Collections::Generic::List_1<::MoleMole::MonoGhostEffect_Struct_2_9167F944B15AEA92>*>* Field_1_9; // 0x20
		::UnityEngine::Renderer* Field_1_22; // 0x28
		::Il2CppArray<::UnityEngine::Material*>* Field_1_10; // 0x30
		::MoleMole::MonoGhostEffect* Field_1_18; // 0x38
		::UnityEngine::MeshRenderer* Field_1_2; // 0x40
		::MoleMole::Config::ConfigGhostMove* Field_1_20; // 0x48
		::UnityEngine::SkinnedMeshRenderer* Field_1_3; // 0x50
		::MoleMole::Battle::Entity* Field_1_8; // 0x58
		::UnityEngine::GameObject* Field_1_23; // 0x60
		::MoleMole::EntityHandle Field_1_15; // 0x68
		::Il2CppArray<::UnityEngine::Material*>* Field_1_4; // 0x78
		::UnityEngine::Vector3 Field_1_24; // 0x80
		::System::Int32 Field_1_16; // 0x8C
		::System::Single Field_1_13; // 0x90
		::UnityEngine::Vector3 Field_1_25; // 0x94
		::Struct_2_70FF0A172150B476 Field_1_14; // 0xA0
		::UnityEngine::Vector3 Field_1_12; // 0xB0
		::System::Single Field_1_5; // 0xBC
		::System::Boolean Field_1_21; // 0xC0
		::System::Boolean Field_1_7; // 0xC1
		::System::Boolean Field_1_17; // 0xC2
		::System::Boolean Field_1_19; // 0xC3
		::System::Single Field_1_6; // 0xC4
		::System::Int32 Field_1_1; // 0xC8
		::System::Single Field_1_26; // 0xCC
		::System::Single Field_1_27; // 0xD0

		::System::Void _ctor(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::MeshRenderer* a2, ::UnityEngine::Mesh* a3, ::System::Single a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::MonoGhostEffect* a6, ::UnityEngine::Material* a7, ::System::Boolean a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::MeshRenderer*, ::UnityEngine::Mesh*, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::MonoGhostEffect*, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Method_1_AE712F8BEC77C268(::UnityEngine::Material* a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_AE712F8BEC77C268_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_1_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_1_B351685B52F64011(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_B351685B52F64011_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_D0B68C1DD4B91F49(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_D0B68C1DD4B91F49_OFFSET))(this, a1);
		}

		::System::Void Method_1_21979913643BB809(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_21979913643BB809_OFFSET))(this, a1);
		}

		::System::Void Method_1_85F9AAEEA394BE31(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_85F9AAEEA394BE31_OFFSET))(this, a1);
		}

		::System::String* Method_1_C3D92A0C64DE0E19(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_C3D92A0C64DE0E19_OFFSET))(this, a1);
		}

		::System::Void Method_1_30D1209326FA87FC_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_3765338D546EFAE7(::Class_3_FFD0045B4597F294* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_FFD0045B4597F294*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_3765338D546EFAE7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_AEBA7FC38248F3FF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_AEBA7FC38248F3FF_OFFSET))(this, a1);
		}

		::System::Void Method_1_499E04DDEB14CC7B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_499E04DDEB14CC7B_OFFSET))(this, a1);
		}

		::System::Void Method_1_5FA5B4B5299932AC(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_5FA5B4B5299932AC_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Transform* Method_1_90EC931103FB6F31()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_90EC931103FB6F31_OFFSET))(this);
		}

		::System::Void Method_1_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Boolean Method_1_4AD015C8B128B3A0(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_4AD015C8B128B3A0_OFFSET))(this, a1);
		}

		::System::Void Method_1_A0E0FB8E164709DE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_A0E0FB8E164709DE_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_276036CDF4BFF5A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_634EC99842BE8134(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_634EC99842BE8134_OFFSET))(this, a1);
		}

		::System::Void Method_1_80AFF79D869A05A6(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapGradient*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapGradient*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_80AFF79D869A05A6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_85F9AAEEA394BE31_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_85F9AAEEA394BE31_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_1_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_1_38B862BB2192EC08()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_38B862BB2192EC08_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_1_B1712F69A7605204(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_B1712F69A7605204_OFFSET))(this, a1);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET))(this);
		}

		::System::Void Method_1_B80A153D9268702C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_B80A153D9268702C_OFFSET))(this, a1);
		}

		::System::Void Method_1_C5D39B68EE6A1786(::System::Boolean& a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_C5D39B68EE6A1786_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_B00DACF23A35F308(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_9AACD922F5CFD051_METHOD_1_B00DACF23A35F308_OFFSET))(this, a1, a2);
		}
	};
}
