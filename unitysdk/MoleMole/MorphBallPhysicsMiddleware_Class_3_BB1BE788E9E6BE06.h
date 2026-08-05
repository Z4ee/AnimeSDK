#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MorphBallPhysicsMiddleware; }
namespace MoleMole::Battle { class MorphBallConfig; }
namespace MoleMole::Battle { class MorphBallPhysicsSwitch; }
namespace MoleMole::Battle { class MorphBallSwitchChecker; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLASS_3_BB1BE788E9E6BE06_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x144F8E90)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLASS_3_BB1BE788E9E6BE06_READMEMBER_OFFSET UNITYSDK_OFFSET(0x144F8EA0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLASS_3_BB1BE788E9E6BE06_WRITE_OFFSET UNITYSDK_OFFSET(0x144F9100)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLASS_3_BB1BE788E9E6BE06__CCTOR_OFFSET UNITYSDK_OFFSET(0x144F92C0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLASS_3_BB1BE788E9E6BE06__CTOR_OFFSET UNITYSDK_OFFSET(0x144F9280)

namespace MoleMole
{
	inline static constexpr unsigned int MorphBallPhysicsMiddleware_Class_3_BB1BE788E9E6BE06_TypeDefinitionIndex = 67582;

	class MorphBallPhysicsMiddleware_Class_3_BB1BE788E9E6BE06 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MorphBallPhysicsMiddleware*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallConfig*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MorphBallPhysicsMiddleware_Class_3_BB1BE788E9E6BE06_TypeDefinitionIndex)->GetStaticField(0x3A050);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallPhysicsSwitch*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallPhysicsSwitch*>**)Il2CppClass::FromTypeDefinitionIndex(MorphBallPhysicsMiddleware_Class_3_BB1BE788E9E6BE06_TypeDefinitionIndex)->GetStaticField(0x3A058);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallSwitchChecker*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::MorphBallSwitchChecker*>**)Il2CppClass::FromTypeDefinitionIndex(MorphBallPhysicsMiddleware_Class_3_BB1BE788E9E6BE06_TypeDefinitionIndex)->GetStaticField(0x3A060);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLASS_3_BB1BE788E9E6BE06__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLASS_3_BB1BE788E9E6BE06__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLASS_3_BB1BE788E9E6BE06_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MorphBallPhysicsMiddleware*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MorphBallPhysicsMiddleware*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLASS_3_BB1BE788E9E6BE06_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MorphBallPhysicsMiddleware*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MorphBallPhysicsMiddleware*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLASS_3_BB1BE788E9E6BE06_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
