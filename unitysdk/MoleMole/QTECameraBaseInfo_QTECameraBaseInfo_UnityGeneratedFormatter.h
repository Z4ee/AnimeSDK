#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class QTECameraBaseInfo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_QTECAMERABASEINFO_QTECAMERABASEINFO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x160E95F0)
#define MOLEMOLE_QTECAMERABASEINFO_QTECAMERABASEINFO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x160E9600)
#define MOLEMOLE_QTECAMERABASEINFO_QTECAMERABASEINFO_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x160E9B50)
#define MOLEMOLE_QTECAMERABASEINFO_QTECAMERABASEINFO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x160E9EA0)
#define MOLEMOLE_QTECAMERABASEINFO_QTECAMERABASEINFO_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x160E9E60)

namespace MoleMole
{
	inline static constexpr unsigned int QTECameraBaseInfo_QTECameraBaseInfo_UnityGeneratedFormatter_TypeDefinitionIndex = 48903;

	class QTECameraBaseInfo_QTECameraBaseInfo_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::QTECameraBaseInfo*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(QTECameraBaseInfo_QTECameraBaseInfo_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4B0B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(QTECameraBaseInfo_QTECameraBaseInfo_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4B0B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(QTECameraBaseInfo_QTECameraBaseInfo_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4B0C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_QTECAMERABASEINFO_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_QTECAMERABASEINFO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_QTECAMERABASEINFO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::QTECameraBaseInfo*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::QTECameraBaseInfo*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_QTECAMERABASEINFO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::QTECameraBaseInfo*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::QTECameraBaseInfo*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_QTECAMERABASEINFO_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
