#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class ParticleSection_Config; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_CLASS_3_7A739EB494239450_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19256150)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_CLASS_3_7A739EB494239450_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19256160)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_CLASS_3_7A739EB494239450_WRITE_OFFSET UNITYSDK_OFFSET(0x19256230)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_CLASS_3_7A739EB494239450__CCTOR_OFFSET UNITYSDK_OFFSET(0x19256320)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_CLASS_3_7A739EB494239450__CTOR_OFFSET UNITYSDK_OFFSET(0x192562E0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ParticleSection_Config_Class_3_7A739EB494239450_TypeDefinitionIndex = 82156;

	class ParticleSection_Config_Class_3_7A739EB494239450 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::ParticleSection_Config*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSection_Config_Class_3_7A739EB494239450_TypeDefinitionIndex)->GetStaticField(0x4FDA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_CLASS_3_7A739EB494239450__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_CLASS_3_7A739EB494239450__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_CLASS_3_7A739EB494239450_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::ParticleSection_Config*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::ParticleSection_Config*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_CLASS_3_7A739EB494239450_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::ParticleSection_Config*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ParticleSection_Config*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG_CLASS_3_7A739EB494239450_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
