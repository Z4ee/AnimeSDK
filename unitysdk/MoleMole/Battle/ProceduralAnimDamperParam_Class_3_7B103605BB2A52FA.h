#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/CustomDamperUtility_DampingType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_CLASS_3_7B103605BB2A52FA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x114497E0)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_CLASS_3_7B103605BB2A52FA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x114497F0)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_CLASS_3_7B103605BB2A52FA_WRITE_OFFSET UNITYSDK_OFFSET(0x11449AC0)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_CLASS_3_7B103605BB2A52FA__CCTOR_OFFSET UNITYSDK_OFFSET(0x11449CC0)
#define MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_CLASS_3_7B103605BB2A52FA__CTOR_OFFSET UNITYSDK_OFFSET(0x11449C60)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimDamperParam_Class_3_7B103605BB2A52FA_TypeDefinitionIndex = 59381;

	class ProceduralAnimDamperParam_Class_3_7B103605BB2A52FA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::ProceduralAnimDamperParam>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimDamperParam_Class_3_7B103605BB2A52FA_TypeDefinitionIndex)->GetStaticField(0x468C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CustomDamperUtility_DampingType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CustomDamperUtility_DampingType>**)Il2CppClass::FromTypeDefinitionIndex(ProceduralAnimDamperParam_Class_3_7B103605BB2A52FA_TypeDefinitionIndex)->GetStaticField(0x468C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_CLASS_3_7B103605BB2A52FA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_CLASS_3_7B103605BB2A52FA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_CLASS_3_7B103605BB2A52FA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::ProceduralAnimDamperParam& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimDamperParam&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_CLASS_3_7B103605BB2A52FA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Battle::ProceduralAnimDamperParam& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimDamperParam&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PROCEDURALANIMDAMPERPARAM_CLASS_3_7B103605BB2A52FA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
