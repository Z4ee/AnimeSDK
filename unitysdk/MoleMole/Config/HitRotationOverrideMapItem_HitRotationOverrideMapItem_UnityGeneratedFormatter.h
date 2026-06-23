#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class HitEffectMapItem; }
namespace MoleMole::Config { class HitRotationOverrideMapItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_HITROTATIONOVERRIDEMAPITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17E36C40)
#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_HITROTATIONOVERRIDEMAPITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17E36C50)
#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_HITROTATIONOVERRIDEMAPITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17E36E30)
#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_HITROTATIONOVERRIDEMAPITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E36FD0)
#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_HITROTATIONOVERRIDEMAPITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E36F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitRotationOverrideMapItem_HitRotationOverrideMapItem_UnityGeneratedFormatter_TypeDefinitionIndex = 61729;

	class HitRotationOverrideMapItem_HitRotationOverrideMapItem_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::HitRotationOverrideMapItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HitRotationOverrideMapItem_HitRotationOverrideMapItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44B70);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitEffectMapItem*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitEffectMapItem*>**)Il2CppClass::FromTypeDefinitionIndex(HitRotationOverrideMapItem_HitRotationOverrideMapItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44B78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_HITROTATIONOVERRIDEMAPITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_HITROTATIONOVERRIDEMAPITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_HITROTATIONOVERRIDEMAPITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::HitRotationOverrideMapItem*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::HitRotationOverrideMapItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_HITROTATIONOVERRIDEMAPITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::HitRotationOverrideMapItem*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HitRotationOverrideMapItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_HITROTATIONOVERRIDEMAPITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
