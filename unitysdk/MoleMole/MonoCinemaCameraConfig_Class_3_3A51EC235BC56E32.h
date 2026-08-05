#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CinemaCameraFogEffectOffset.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoCinemaCameraConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_MONOCINEMACAMERACONFIG_CLASS_3_3A51EC235BC56E32_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13AA8940)
#define MOLEMOLE_MONOCINEMACAMERACONFIG_CLASS_3_3A51EC235BC56E32_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13AA8950)
#define MOLEMOLE_MONOCINEMACAMERACONFIG_CLASS_3_3A51EC235BC56E32_WRITE_OFFSET UNITYSDK_OFFSET(0x13AA8AE0)
#define MOLEMOLE_MONOCINEMACAMERACONFIG_CLASS_3_3A51EC235BC56E32__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AA8C40)
#define MOLEMOLE_MONOCINEMACAMERACONFIG_CLASS_3_3A51EC235BC56E32__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA8C00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCinemaCameraConfig_Class_3_3A51EC235BC56E32_TypeDefinitionIndex = 62406;

	class MonoCinemaCameraConfig_Class_3_3A51EC235BC56E32 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoCinemaCameraConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaCameraFogEffectOffset>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaCameraFogEffectOffset>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoCinemaCameraConfig_Class_3_3A51EC235BC56E32_TypeDefinitionIndex)->GetStaticField(0x46E10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::Camera*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::Camera*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoCinemaCameraConfig_Class_3_3A51EC235BC56E32_TypeDefinitionIndex)->GetStaticField(0x46E18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_CLASS_3_3A51EC235BC56E32__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_CLASS_3_3A51EC235BC56E32__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_CLASS_3_3A51EC235BC56E32_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoCinemaCameraConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoCinemaCameraConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_CLASS_3_3A51EC235BC56E32_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoCinemaCameraConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoCinemaCameraConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_CLASS_3_3A51EC235BC56E32_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
