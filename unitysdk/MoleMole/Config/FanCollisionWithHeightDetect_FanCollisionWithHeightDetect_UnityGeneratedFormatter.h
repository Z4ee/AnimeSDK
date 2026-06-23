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

#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_FANCOLLISIONWITHHEIGHTDETECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x170BD840)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_FANCOLLISIONWITHHEIGHTDETECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x170BD850)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_FANCOLLISIONWITHHEIGHTDETECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x170BEE90)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_FANCOLLISIONWITHHEIGHTDETECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170BFB00)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_FANCOLLISIONWITHHEIGHTDETECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x170BFAC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex = 68073;

	class FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::FanCollisionWithHeightDetect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x483E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x483E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x483F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x483F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48400);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48408);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48410);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48418);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48420);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48428);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48430);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>**)Il2CppClass::FromTypeDefinitionIndex(FanCollisionWithHeightDetect_FanCollisionWithHeightDetect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48438);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_FANCOLLISIONWITHHEIGHTDETECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_FANCOLLISIONWITHHEIGHTDETECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_FANCOLLISIONWITHHEIGHTDETECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::FanCollisionWithHeightDetect*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::FanCollisionWithHeightDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_FANCOLLISIONWITHHEIGHTDETECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::FanCollisionWithHeightDetect*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FanCollisionWithHeightDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_FANCOLLISIONWITHHEIGHTDETECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
