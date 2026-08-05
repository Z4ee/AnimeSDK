#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class SoundActionWithWeight; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_CLASS_3_4FD928737982ED7B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4BEB20)
#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_CLASS_3_4FD928737982ED7B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4BEB30)
#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_CLASS_3_4FD928737982ED7B_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4BECC0)
#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_CLASS_3_4FD928737982ED7B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4BEE20)
#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_CLASS_3_4FD928737982ED7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BEDE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SoundActionWithWeight_Class_3_4FD928737982ED7B_TypeDefinitionIndex = 51162;

	class SoundActionWithWeight_Class_3_4FD928737982ED7B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::SoundActionWithWeight*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(SoundActionWithWeight_Class_3_4FD928737982ED7B_TypeDefinitionIndex)->GetStaticField(0x3C9B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(SoundActionWithWeight_Class_3_4FD928737982ED7B_TypeDefinitionIndex)->GetStaticField(0x3C9B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_CLASS_3_4FD928737982ED7B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_CLASS_3_4FD928737982ED7B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_CLASS_3_4FD928737982ED7B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SoundActionWithWeight*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SoundActionWithWeight*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_CLASS_3_4FD928737982ED7B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::SoundActionWithWeight*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SoundActionWithWeight*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_CLASS_3_4FD928737982ED7B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
