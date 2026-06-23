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

#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_MONOCINEMACAMERALIGHTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D62D10)
#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_MONOCINEMACAMERALIGHTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D62D20)
#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_MONOCINEMACAMERALIGHTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10D62FC0)
#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_MONOCINEMACAMERALIGHTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D631B0)
#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_MONOCINEMACAMERALIGHTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D63170)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCinemaCameraLightConfig_MonoCinemaCameraLightConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 66649;

	class MonoCinemaCameraLightConfig_MonoCinemaCameraLightConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoCinemaCameraLightConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::GameObject*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoCinemaCameraLightConfig_MonoCinemaCameraLightConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x342F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_MONOCINEMACAMERALIGHTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_MONOCINEMACAMERALIGHTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_MONOCINEMACAMERALIGHTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoCinemaCameraLightConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoCinemaCameraLightConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_MONOCINEMACAMERALIGHTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MonoCinemaCameraLightConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoCinemaCameraLightConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_MONOCINEMACAMERALIGHTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
