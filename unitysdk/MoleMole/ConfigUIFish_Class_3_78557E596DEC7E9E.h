#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUIFish; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGUIFISH_CLASS_3_78557E596DEC7E9E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19AD9C20)
#define MOLEMOLE_CONFIGUIFISH_CLASS_3_78557E596DEC7E9E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19AD9C30)
#define MOLEMOLE_CONFIGUIFISH_CLASS_3_78557E596DEC7E9E_WRITE_OFFSET UNITYSDK_OFFSET(0x19AD9DC0)
#define MOLEMOLE_CONFIGUIFISH_CLASS_3_78557E596DEC7E9E__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AD9F20)
#define MOLEMOLE_CONFIGUIFISH_CLASS_3_78557E596DEC7E9E__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD9EE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIFish_Class_3_78557E596DEC7E9E_TypeDefinitionIndex = 45083;

	class ConfigUIFish_Class_3_78557E596DEC7E9E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUIFish*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraShake*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowCameraShake*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIFish_Class_3_78557E596DEC7E9E_TypeDefinitionIndex)->GetStaticField(0x518F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_CLASS_3_78557E596DEC7E9E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_CLASS_3_78557E596DEC7E9E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_CLASS_3_78557E596DEC7E9E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIFish*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIFish*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_CLASS_3_78557E596DEC7E9E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUIFish*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFish*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH_CLASS_3_78557E596DEC7E9E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
