#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimFixedParam.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_CLASS_3_FF801EE4A6097269_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14344510)
#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_CLASS_3_FF801EE4A6097269_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14344520)
#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_CLASS_3_FF801EE4A6097269_WRITE_OFFSET UNITYSDK_OFFSET(0x14344920)
#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_CLASS_3_FF801EE4A6097269__CCTOR_OFFSET UNITYSDK_OFFSET(0x14344BD0)
#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_CLASS_3_FF801EE4A6097269__CTOR_OFFSET UNITYSDK_OFFSET(0x14344B70)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimFixedParam_Class_3_FF801EE4A6097269_TypeDefinitionIndex = 70220;

	class ProceduralAnimFixedParam_Class_3_FF801EE4A6097269 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::ProceduralAnimFixedParam>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimatorStateInfo>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimatorStateInfo>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimFixedParam_Class_3_FF801EE4A6097269_TypeDefinitionIndex)->GetStaticField(0x36240);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimFixedParam_Class_3_FF801EE4A6097269_TypeDefinitionIndex)->GetStaticField(0x36248);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimFixedParam_Class_3_FF801EE4A6097269_TypeDefinitionIndex)->GetStaticField(0x36250);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimFixedParam_Class_3_FF801EE4A6097269_TypeDefinitionIndex)->GetStaticField(0x36258);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimFixedParam_Class_3_FF801EE4A6097269_TypeDefinitionIndex)->GetStaticField(0x36260);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_CLASS_3_FF801EE4A6097269__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_CLASS_3_FF801EE4A6097269__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_CLASS_3_FF801EE4A6097269_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::ProceduralAnimFixedParam& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimFixedParam&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_CLASS_3_FF801EE4A6097269_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Battle::ProceduralAnimFixedParam& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimFixedParam&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_CLASS_3_FF801EE4A6097269_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
