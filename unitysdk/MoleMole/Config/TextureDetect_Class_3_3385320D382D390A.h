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

namespace MoleMole::Config { class TextureDetect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_TEXTUREDETECT_CLASS_3_3385320D382D390A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BA0700)
#define MOLEMOLE_CONFIG_TEXTUREDETECT_CLASS_3_3385320D382D390A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BA0710)
#define MOLEMOLE_CONFIG_TEXTUREDETECT_CLASS_3_3385320D382D390A_WRITE_OFFSET UNITYSDK_OFFSET(0x19BA1C90)
#define MOLEMOLE_CONFIG_TEXTUREDETECT_CLASS_3_3385320D382D390A__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BA28E0)
#define MOLEMOLE_CONFIG_TEXTUREDETECT_CLASS_3_3385320D382D390A__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA28A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex = 89979;

	class TextureDetect_Class_3_3385320D382D390A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::TextureDetect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x48990);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x48998);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x489A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x489A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x489B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x489B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x489C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x489C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x489D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Byte>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x489D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x489E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_Class_3_3385320D382D390A_TypeDefinitionIndex)->GetStaticField(0x489E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_CLASS_3_3385320D382D390A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_CLASS_3_3385320D382D390A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_CLASS_3_3385320D382D390A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::TextureDetect*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::TextureDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_CLASS_3_3385320D382D390A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::TextureDetect*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TextureDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_CLASS_3_3385320D382D390A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
