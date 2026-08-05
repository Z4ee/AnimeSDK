#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class ParticleSection; }
namespace MoleMole::HollowChessboard { class ParticleSection_Config; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CLASS_3_F2166CD87B30FF62_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19255F10)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CLASS_3_F2166CD87B30FF62_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19255F20)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CLASS_3_F2166CD87B30FF62_WRITE_OFFSET UNITYSDK_OFFSET(0x19255FF0)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CLASS_3_F2166CD87B30FF62__CCTOR_OFFSET UNITYSDK_OFFSET(0x192560E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CLASS_3_F2166CD87B30FF62__CTOR_OFFSET UNITYSDK_OFFSET(0x192560A0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ParticleSection_Class_3_F2166CD87B30FF62_TypeDefinitionIndex = 82154;

	class ParticleSection_Class_3_F2166CD87B30FF62 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::ParticleSection*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ParticleSection_Config*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ParticleSection_Config*>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSection_Class_3_F2166CD87B30FF62_TypeDefinitionIndex)->GetStaticField(0x4FD90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CLASS_3_F2166CD87B30FF62__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CLASS_3_F2166CD87B30FF62__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CLASS_3_F2166CD87B30FF62_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::ParticleSection*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::ParticleSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CLASS_3_F2166CD87B30FF62_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::ParticleSection*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ParticleSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CLASS_3_F2166CD87B30FF62_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
