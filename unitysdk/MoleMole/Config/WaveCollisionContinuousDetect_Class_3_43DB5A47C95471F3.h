#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosYType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BaseRotXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BaseRotYType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace MoleMole::Config { class ConfigWaveMorphParam; }
namespace MoleMole::Config { class WaveCollisionContinuousDetect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD787E0)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD78910)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3_READ_OFFSET UNITYSDK_OFFSET(0x1BD787F0)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD7A830)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD7BAD0)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD7BA90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex = 42553;

	class WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::WaveCollisionContinuousDetect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50D60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50D68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50D70);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50D78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50D80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50D88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50D90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50D98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50DA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50DA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50DB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50DB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50DC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigWaveMorphParam*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigWaveMorphParam*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_Class_3_43DB5A47C95471F3_TypeDefinitionIndex)->GetStaticField(0x50DC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Void Read(::MoleMole::Config::WaveCollisionContinuousDetect*& a1, ::Sirenix::Serialization::IDataReader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WaveCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3_READ_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReadMember(::MoleMole::Config::WaveCollisionContinuousDetect*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::WaveCollisionContinuousDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::WaveCollisionContinuousDetect*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WaveCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_CLASS_3_43DB5A47C95471F3_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
