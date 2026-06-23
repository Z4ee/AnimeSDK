#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/CustomDamperUtility_DampingType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_PROCEDURALANIMDAMPERPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13FEEF30)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_PROCEDURALANIMDAMPERPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13FEEF40)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_PROCEDURALANIMDAMPERPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13FEF260)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_PROCEDURALANIMDAMPERPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13FEF490)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_PROCEDURALANIMDAMPERPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13FEF430)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimDamperParam_ProceduralAnimDamperParam_UnityGeneratedFormatter_TypeDefinitionIndex = 73652;

	class ProceduralAnimDamperParam_ProceduralAnimDamperParam_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::ProceduralAnimDamperParam>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CustomDamperUtility_DampingType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CustomDamperUtility_DampingType>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimDamperParam_ProceduralAnimDamperParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D310);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimDamperParam_ProceduralAnimDamperParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D318);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_PROCEDURALANIMDAMPERPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_PROCEDURALANIMDAMPERPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_PROCEDURALANIMDAMPERPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::ProceduralAnimDamperParam& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimDamperParam&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_PROCEDURALANIMDAMPERPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Battle::ProceduralAnimDamperParam& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimDamperParam&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_PROCEDURALANIMDAMPERPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
