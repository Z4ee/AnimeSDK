#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TriDiceLuckPerformType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MoleMole::Config { class ConfigTriDiceAnimationCurveGroup; }
namespace MoleMole::Config { class ConfigUITriDiceOracle; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_CLASS_3_96950E55C379CA65_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4DCEB0)
#define MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_CLASS_3_96950E55C379CA65_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4DCEC0)
#define MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_CLASS_3_96950E55C379CA65_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4DD3C0)
#define MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_CLASS_3_96950E55C379CA65__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4DD6F0)
#define MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_CLASS_3_96950E55C379CA65__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DD6B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUITriDiceOracle_Class_3_96950E55C379CA65_TypeDefinitionIndex = 75148;

	class ConfigUITriDiceOracle_Class_3_96950E55C379CA65 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigUITriDiceOracle*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUITriDiceOracle_Class_3_96950E55C379CA65_TypeDefinitionIndex)->GetStaticField(0x4E6B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigTriDiceAnimationCurveGroup*>*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigTriDiceAnimationCurveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUITriDiceOracle_Class_3_96950E55C379CA65_TypeDefinitionIndex)->GetStaticField(0x4E6B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Quaternion>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Quaternion>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUITriDiceOracle_Class_3_96950E55C379CA65_TypeDefinitionIndex)->GetStaticField(0x4E6C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TriDiceLuckPerformType, ::System::String*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TriDiceLuckPerformType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUITriDiceOracle_Class_3_96950E55C379CA65_TypeDefinitionIndex)->GetStaticField(0x4E6C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_CLASS_3_96950E55C379CA65__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_CLASS_3_96950E55C379CA65__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_CLASS_3_96950E55C379CA65_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUITriDiceOracle*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUITriDiceOracle*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_CLASS_3_96950E55C379CA65_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigUITriDiceOracle*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUITriDiceOracle*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_CLASS_3_96950E55C379CA65_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
