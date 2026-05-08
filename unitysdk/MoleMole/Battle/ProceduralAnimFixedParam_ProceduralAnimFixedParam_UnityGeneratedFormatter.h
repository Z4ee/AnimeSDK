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

#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_PROCEDURALANIMFIXEDPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFF01360)
#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_PROCEDURALANIMFIXEDPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFF01370)
#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_PROCEDURALANIMFIXEDPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xFF017D0)
#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_PROCEDURALANIMFIXEDPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF01AB0)
#define MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_PROCEDURALANIMFIXEDPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xFF01A50)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimFixedParam_ProceduralAnimFixedParam_UnityGeneratedFormatter_TypeDefinitionIndex = 62806;

	class ProceduralAnimFixedParam_ProceduralAnimFixedParam_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::ProceduralAnimFixedParam>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimFixedParam_ProceduralAnimFixedParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x473C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimFixedParam_ProceduralAnimFixedParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x473C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimFixedParam_ProceduralAnimFixedParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x473D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimatorStateInfo>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimatorStateInfo>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimFixedParam_ProceduralAnimFixedParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x473D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimFixedParam_ProceduralAnimFixedParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x473E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_PROCEDURALANIMFIXEDPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_PROCEDURALANIMFIXEDPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_PROCEDURALANIMFIXEDPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::ProceduralAnimFixedParam& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimFixedParam&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_PROCEDURALANIMFIXEDPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Battle::ProceduralAnimFixedParam& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimFixedParam&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMFIXEDPARAM_PROCEDURALANIMFIXEDPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
