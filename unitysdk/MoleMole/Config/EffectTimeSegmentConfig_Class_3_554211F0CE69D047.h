#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CLASS_3_554211F0CE69D047_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD69520)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CLASS_3_554211F0CE69D047_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD69530)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CLASS_3_554211F0CE69D047_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD69AC0)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CLASS_3_554211F0CE69D047__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD69E40)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CLASS_3_554211F0CE69D047__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD69E00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectTimeSegmentConfig_Class_3_554211F0CE69D047_TypeDefinitionIndex = 63952;

	class EffectTimeSegmentConfig_Class_3_554211F0CE69D047 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::EffectTimeSegmentConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(EffectTimeSegmentConfig_Class_3_554211F0CE69D047_TypeDefinitionIndex)->GetStaticField(0x50D40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EffectTimeSegmentConfig_Class_3_554211F0CE69D047_TypeDefinitionIndex)->GetStaticField(0x50D48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EffectTimeSegmentConfig_Class_3_554211F0CE69D047_TypeDefinitionIndex)->GetStaticField(0x50D50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CLASS_3_554211F0CE69D047__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CLASS_3_554211F0CE69D047__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CLASS_3_554211F0CE69D047_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::EffectTimeSegmentConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::EffectTimeSegmentConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CLASS_3_554211F0CE69D047_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::EffectTimeSegmentConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectTimeSegmentConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CLASS_3_554211F0CE69D047_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
