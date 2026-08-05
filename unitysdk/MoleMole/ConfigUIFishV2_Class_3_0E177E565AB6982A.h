#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUIFishV2; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGUIFISHV2_CLASS_3_0E177E565AB6982A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD80610)
#define MOLEMOLE_CONFIGUIFISHV2_CLASS_3_0E177E565AB6982A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD80620)
#define MOLEMOLE_CONFIGUIFISHV2_CLASS_3_0E177E565AB6982A_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD80930)
#define MOLEMOLE_CONFIGUIFISHV2_CLASS_3_0E177E565AB6982A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD80B50)
#define MOLEMOLE_CONFIGUIFISHV2_CLASS_3_0E177E565AB6982A__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD80B10)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIFishV2_Class_3_0E177E565AB6982A_TypeDefinitionIndex = 65041;

	class ConfigUIFishV2_Class_3_0E177E565AB6982A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUIFishV2*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraShake*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraShake*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIFishV2_Class_3_0E177E565AB6982A_TypeDefinitionIndex)->GetStaticField(0x50E30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISHV2_CLASS_3_0E177E565AB6982A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISHV2_CLASS_3_0E177E565AB6982A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISHV2_CLASS_3_0E177E565AB6982A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIFishV2*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIFishV2*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISHV2_CLASS_3_0E177E565AB6982A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUIFishV2*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFishV2*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISHV2_CLASS_3_0E177E565AB6982A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
