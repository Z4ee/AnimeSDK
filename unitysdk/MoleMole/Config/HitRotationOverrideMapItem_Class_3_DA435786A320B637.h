#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class HitEffectMapItem; }
namespace MoleMole::Config { class HitRotationOverrideMapItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_CLASS_3_DA435786A320B637_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9217B0)
#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_CLASS_3_DA435786A320B637_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B9217C0)
#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_CLASS_3_DA435786A320B637_WRITE_OFFSET UNITYSDK_OFFSET(0x1B921950)
#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_CLASS_3_DA435786A320B637__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B921AB0)
#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_CLASS_3_DA435786A320B637__CTOR_OFFSET UNITYSDK_OFFSET(0x1B921A70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitRotationOverrideMapItem_Class_3_DA435786A320B637_TypeDefinitionIndex = 72351;

	class HitRotationOverrideMapItem_Class_3_DA435786A320B637 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::HitRotationOverrideMapItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitEffectMapItem*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitEffectMapItem*>**)Il2CppClass::FromTypeDefinitionIndex(HitRotationOverrideMapItem_Class_3_DA435786A320B637_TypeDefinitionIndex)->GetStaticField(0x39D30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HitRotationOverrideMapItem_Class_3_DA435786A320B637_TypeDefinitionIndex)->GetStaticField(0x39D38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_CLASS_3_DA435786A320B637__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_CLASS_3_DA435786A320B637__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_CLASS_3_DA435786A320B637_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::HitRotationOverrideMapItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::HitRotationOverrideMapItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_CLASS_3_DA435786A320B637_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::HitRotationOverrideMapItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HitRotationOverrideMapItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_CLASS_3_DA435786A320B637_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
