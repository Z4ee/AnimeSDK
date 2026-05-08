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

#define MOLEMOLE_MONOCINEMACAMERACONFIG_MONOCINEMACAMERACONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x170DEA50)
#define MOLEMOLE_MONOCINEMACAMERACONFIG_MONOCINEMACAMERACONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x170DEA60)
#define MOLEMOLE_MONOCINEMACAMERACONFIG_MONOCINEMACAMERACONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x170DEC40)
#define MOLEMOLE_MONOCINEMACAMERACONFIG_MONOCINEMACAMERACONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170DEDE0)
#define MOLEMOLE_MONOCINEMACAMERACONFIG_MONOCINEMACAMERACONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x170DEDA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCinemaCameraConfig_MonoCinemaCameraConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 66949;

	class MonoCinemaCameraConfig_MonoCinemaCameraConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoCinemaCameraConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaCameraFogEffectOffset>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaCameraFogEffectOffset>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoCinemaCameraConfig_MonoCinemaCameraConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49560);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::Camera*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::Camera*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoCinemaCameraConfig_MonoCinemaCameraConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49568);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_MONOCINEMACAMERACONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_MONOCINEMACAMERACONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_MONOCINEMACAMERACONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoCinemaCameraConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoCinemaCameraConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_MONOCINEMACAMERACONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MonoCinemaCameraConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoCinemaCameraConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_MONOCINEMACAMERACONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
