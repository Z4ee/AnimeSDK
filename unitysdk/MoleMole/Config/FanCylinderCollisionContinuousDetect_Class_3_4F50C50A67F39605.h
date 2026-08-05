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

#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A93AA90)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A93ABC0)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605_READ_OFFSET UNITYSDK_OFFSET(0x1A93AAA0)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605_WRITE_OFFSET UNITYSDK_OFFSET(0x1A93CA40)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A93DC80)
#define MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605__CTOR_OFFSET UNITYSDK_OFFSET(0x1A93DC40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex = 76472;

	class FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::FanCylinderCollisionContinuousDetect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36520);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36528);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36530);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36538);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36540);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36548);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36550);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTimeDrivenAttackCollider*>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36558);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36560);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36568);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36570);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36578);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FanCylinderCollisionContinuousDetect_Class_3_4F50C50A67F39605_TypeDefinitionIndex)->GetStaticField(0x36580);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Void Read(::MoleMole::Config::FanCylinderCollisionContinuousDetect*& a1, ::Sirenix::Serialization::IDataReader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FanCylinderCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605_READ_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReadMember(::MoleMole::Config::FanCylinderCollisionContinuousDetect*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::FanCylinderCollisionContinuousDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::FanCylinderCollisionContinuousDetect*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FanCylinderCollisionContinuousDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCYLINDERCOLLISIONCONTINUOUSDETECT_CLASS_3_4F50C50A67F39605_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
