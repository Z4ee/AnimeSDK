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
namespace MoleMole::Config { class BoxCollisionContinuousDetect; }
namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177CD9C0)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177CDAF0)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F_READ_OFFSET UNITYSDK_OFFSET(0x177CD9D0)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F_WRITE_OFFSET UNITYSDK_OFFSET(0x177CF6D0)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F__CCTOR_OFFSET UNITYSDK_OFFSET(0x177D07A0)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F__CTOR_OFFSET UNITYSDK_OFFSET(0x177D0760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex = 61644;

	class BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::BoxCollisionContinuousDetect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44A50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44A58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44A60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44A68);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44A70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44A78);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44A80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44A88);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44A90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44A98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44AA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44AA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionContinuousDetect_Class_3_34FB9C524B47DE6F_TypeDefinitionIndex)->GetStaticField(0x44AB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Void Read(::MoleMole::Config::BoxCollisionContinuousDetect*& a1, ::Sirenix::Serialization::IDataReader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BoxCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F_READ_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReadMember(::MoleMole::Config::BoxCollisionContinuousDetect*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BoxCollisionContinuousDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::BoxCollisionContinuousDetect*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BoxCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_CLASS_3_34FB9C524B47DE6F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
