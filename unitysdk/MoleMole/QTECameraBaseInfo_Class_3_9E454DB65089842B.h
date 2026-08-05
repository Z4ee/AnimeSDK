#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class QTECameraBaseInfo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_QTECAMERABASEINFO_CLASS_3_9E454DB65089842B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14A1DDC0)
#define MOLEMOLE_QTECAMERABASEINFO_CLASS_3_9E454DB65089842B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14A1DDD0)
#define MOLEMOLE_QTECAMERABASEINFO_CLASS_3_9E454DB65089842B_WRITE_OFFSET UNITYSDK_OFFSET(0x14A1E2C0)
#define MOLEMOLE_QTECAMERABASEINFO_CLASS_3_9E454DB65089842B__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A1E5E0)
#define MOLEMOLE_QTECAMERABASEINFO_CLASS_3_9E454DB65089842B__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1E5A0)

namespace MoleMole
{
	inline static constexpr unsigned int QTECameraBaseInfo_Class_3_9E454DB65089842B_TypeDefinitionIndex = 72058;

	class QTECameraBaseInfo_Class_3_9E454DB65089842B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::QTECameraBaseInfo*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(QTECameraBaseInfo_Class_3_9E454DB65089842B_TypeDefinitionIndex)->GetStaticField(0x32840);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(QTECameraBaseInfo_Class_3_9E454DB65089842B_TypeDefinitionIndex)->GetStaticField(0x32848);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(QTECameraBaseInfo_Class_3_9E454DB65089842B_TypeDefinitionIndex)->GetStaticField(0x32850);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_CLASS_3_9E454DB65089842B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_CLASS_3_9E454DB65089842B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_CLASS_3_9E454DB65089842B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::QTECameraBaseInfo*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::QTECameraBaseInfo*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_CLASS_3_9E454DB65089842B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::QTECameraBaseInfo*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::QTECameraBaseInfo*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_CLASS_3_9E454DB65089842B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
