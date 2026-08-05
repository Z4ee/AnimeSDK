#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CAMERAORBIT_CLASS_3_F69AA2F8852A6A33_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14356310)
#define MOLEMOLE_CAMERAORBIT_CLASS_3_F69AA2F8852A6A33_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14356320)
#define MOLEMOLE_CAMERAORBIT_CLASS_3_F69AA2F8852A6A33_WRITE_OFFSET UNITYSDK_OFFSET(0x143564A0)
#define MOLEMOLE_CAMERAORBIT_CLASS_3_F69AA2F8852A6A33__CCTOR_OFFSET UNITYSDK_OFFSET(0x14356610)
#define MOLEMOLE_CAMERAORBIT_CLASS_3_F69AA2F8852A6A33__CTOR_OFFSET UNITYSDK_OFFSET(0x143565B0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraOrbit_Class_3_F69AA2F8852A6A33_TypeDefinitionIndex = 50866;

	class CameraOrbit_Class_3_F69AA2F8852A6A33 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::CameraOrbit>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraOrbit_Class_3_F69AA2F8852A6A33_TypeDefinitionIndex)->GetStaticField(0x362E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAORBIT_CLASS_3_F69AA2F8852A6A33__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAORBIT_CLASS_3_F69AA2F8852A6A33__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAORBIT_CLASS_3_F69AA2F8852A6A33_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CameraOrbit& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CameraOrbit&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAORBIT_CLASS_3_F69AA2F8852A6A33_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::CameraOrbit& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CameraOrbit&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAORBIT_CLASS_3_F69AA2F8852A6A33_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
