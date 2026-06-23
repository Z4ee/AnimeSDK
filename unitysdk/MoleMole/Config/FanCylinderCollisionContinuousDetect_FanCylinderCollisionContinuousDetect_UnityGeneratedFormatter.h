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
namespace MoleMole::Config { class FanCylinderCollisionContinuousDetect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA68F10)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1AA69080)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1AA68F20)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1AA6AFF0)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA6C240)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA6C200)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex = 66285;

	class FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::FanCylinderCollisionContinuousDetect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42CB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42CB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42CC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42CC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42CD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42CD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42CE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42CE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42CF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42CF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42D00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42D08);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_FanCylinderCollisionContinuousDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42D10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Void Read(::MoleMole::Config::FanCylinderCollisionContinuousDetect*& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FanCylinderCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Boolean ReadMember(::MoleMole::Config::FanCylinderCollisionContinuousDetect*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::FanCylinderCollisionContinuousDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::FanCylinderCollisionContinuousDetect*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FanCylinderCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_FANCYLINDERCOLLISIONCONTINUOUSDETECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
