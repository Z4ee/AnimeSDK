#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICoopTeam3D_CameraConfigEnum.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICoopTeam3D; }
namespace MoleMole { class ConfigUICoopTeam3D_AvatarConfig; }
namespace MoleMole { class ConfigUICoopTeam3D_CameraConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOOPTEAM3D_CLASS_3_1F169206C3DD90F7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4C96A0)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_CLASS_3_1F169206C3DD90F7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4C96B0)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_CLASS_3_1F169206C3DD90F7_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4C9840)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_CLASS_3_1F169206C3DD90F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4C99A0)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_CLASS_3_1F169206C3DD90F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C9960)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICoopTeam3D_Class_3_1F169206C3DD90F7_TypeDefinitionIndex = 47597;

	class ConfigUICoopTeam3D_Class_3_1F169206C3DD90F7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICoopTeam3D*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ConfigUICoopTeam3D_CameraConfigEnum, ::MoleMole::ConfigUICoopTeam3D_CameraConfig*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ConfigUICoopTeam3D_CameraConfigEnum, ::MoleMole::ConfigUICoopTeam3D_CameraConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICoopTeam3D_Class_3_1F169206C3DD90F7_TypeDefinitionIndex)->GetStaticField(0x3CAC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUICoopTeam3D_AvatarConfig*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUICoopTeam3D_AvatarConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICoopTeam3D_Class_3_1F169206C3DD90F7_TypeDefinitionIndex)->GetStaticField(0x3CAC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CLASS_3_1F169206C3DD90F7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CLASS_3_1F169206C3DD90F7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CLASS_3_1F169206C3DD90F7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICoopTeam3D*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICoopTeam3D*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CLASS_3_1F169206C3DD90F7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUICoopTeam3D*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICoopTeam3D*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_CLASS_3_1F169206C3DD90F7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
