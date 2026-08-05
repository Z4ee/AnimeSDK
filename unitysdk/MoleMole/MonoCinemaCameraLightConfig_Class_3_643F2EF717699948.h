#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoCinemaCameraLightConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_CLASS_3_643F2EF717699948_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x173833A0)
#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_CLASS_3_643F2EF717699948_READMEMBER_OFFSET UNITYSDK_OFFSET(0x173833B0)
#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_CLASS_3_643F2EF717699948_WRITE_OFFSET UNITYSDK_OFFSET(0x17383600)
#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_CLASS_3_643F2EF717699948__CCTOR_OFFSET UNITYSDK_OFFSET(0x173837C0)
#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_CLASS_3_643F2EF717699948__CTOR_OFFSET UNITYSDK_OFFSET(0x17383780)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCinemaCameraLightConfig_Class_3_643F2EF717699948_TypeDefinitionIndex = 67931;

	class MonoCinemaCameraLightConfig_Class_3_643F2EF717699948 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoCinemaCameraLightConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::GameObject*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoCinemaCameraLightConfig_Class_3_643F2EF717699948_TypeDefinitionIndex)->GetStaticField(0x44DF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_CLASS_3_643F2EF717699948__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_CLASS_3_643F2EF717699948__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_CLASS_3_643F2EF717699948_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoCinemaCameraLightConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoCinemaCameraLightConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_CLASS_3_643F2EF717699948_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoCinemaCameraLightConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoCinemaCameraLightConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_CLASS_3_643F2EF717699948_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
