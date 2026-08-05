#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosYType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BaseRotXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BaseRotYType.h"
#include "unitysdk/MoleMole/Config/FanCollisionWithHeightDetect_FanFollowAtkDirType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class FanCollisionWithHeightDetect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_CLASS_3_EE3A430370FEF735_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1350B4A0)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_CLASS_3_EE3A430370FEF735_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1350B4B0)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_CLASS_3_EE3A430370FEF735_WRITE_OFFSET UNITYSDK_OFFSET(0x1350CA30)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_CLASS_3_EE3A430370FEF735__CCTOR_OFFSET UNITYSDK_OFFSET(0x1350D680)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_CLASS_3_EE3A430370FEF735__CTOR_OFFSET UNITYSDK_OFFSET(0x1350D640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex = 90128;

	class FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::FanCollisionWithHeightDetect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C000);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C008);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C010);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C018);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C020);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C028);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C030);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C038);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C040);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C048);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C050);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_Class_3_EE3A430370FEF735_TypeDefinitionIndex)->GetStaticField(0x4C058);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_CLASS_3_EE3A430370FEF735__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_CLASS_3_EE3A430370FEF735__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_CLASS_3_EE3A430370FEF735_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::FanCollisionWithHeightDetect*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::FanCollisionWithHeightDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_CLASS_3_EE3A430370FEF735_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::FanCollisionWithHeightDetect*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FanCollisionWithHeightDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_CLASS_3_EE3A430370FEF735_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
