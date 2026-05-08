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

#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16AAC0B0)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16AAC220)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x16AAC0C0)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16AAE240)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AAF4F0)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAF4B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex = 44973;

	class WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::WaveCollisionContinuousDetect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32090);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32098);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigWaveMorphParam*>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigWaveMorphParam*>**)Il2CppClass::FromTypeDefinitionIndex(WaveCollisionContinuousDetect_WaveCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x320F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Void Read(::MoleMole::Config::WaveCollisionContinuousDetect*& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WaveCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Boolean ReadMember(::MoleMole::Config::WaveCollisionContinuousDetect*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::WaveCollisionContinuousDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::WaveCollisionContinuousDetect*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WaveCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_WAVECOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
