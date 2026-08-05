#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class QTECameraInfo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_QTECAMERAINFO_CLASS_3_A9C98B480C72DA77_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190A6D90)
#define MOLEMOLE_QTECAMERAINFO_CLASS_3_A9C98B480C72DA77_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190A6DA0)
#define MOLEMOLE_QTECAMERAINFO_CLASS_3_A9C98B480C72DA77_WRITE_OFFSET UNITYSDK_OFFSET(0x190A7520)
#define MOLEMOLE_QTECAMERAINFO_CLASS_3_A9C98B480C72DA77__CCTOR_OFFSET UNITYSDK_OFFSET(0x190A79B0)
#define MOLEMOLE_QTECAMERAINFO_CLASS_3_A9C98B480C72DA77__CTOR_OFFSET UNITYSDK_OFFSET(0x190A7970)

namespace MoleMole
{
	inline static constexpr unsigned int QTECameraInfo_Class_3_A9C98B480C72DA77_TypeDefinitionIndex = 53428;

	class QTECameraInfo_Class_3_A9C98B480C72DA77 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::QTECameraInfo*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(QTECameraInfo_Class_3_A9C98B480C72DA77_TypeDefinitionIndex)->GetStaticField(0x4A9A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(QTECameraInfo_Class_3_A9C98B480C72DA77_TypeDefinitionIndex)->GetStaticField(0x4A9A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(QTECameraInfo_Class_3_A9C98B480C72DA77_TypeDefinitionIndex)->GetStaticField(0x4A9B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(QTECameraInfo_Class_3_A9C98B480C72DA77_TypeDefinitionIndex)->GetStaticField(0x4A9B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERAINFO_CLASS_3_A9C98B480C72DA77__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERAINFO_CLASS_3_A9C98B480C72DA77__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERAINFO_CLASS_3_A9C98B480C72DA77_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::QTECameraInfo*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::QTECameraInfo*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERAINFO_CLASS_3_A9C98B480C72DA77_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::QTECameraInfo*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::QTECameraInfo*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERAINFO_CLASS_3_A9C98B480C72DA77_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
