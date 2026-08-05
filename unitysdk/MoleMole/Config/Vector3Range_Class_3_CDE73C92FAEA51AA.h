#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_VECTOR3RANGE_CLASS_3_CDE73C92FAEA51AA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x172C08D0)
#define MOLEMOLE_CONFIG_VECTOR3RANGE_CLASS_3_CDE73C92FAEA51AA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x172C08E0)
#define MOLEMOLE_CONFIG_VECTOR3RANGE_CLASS_3_CDE73C92FAEA51AA_WRITE_OFFSET UNITYSDK_OFFSET(0x172C0A80)
#define MOLEMOLE_CONFIG_VECTOR3RANGE_CLASS_3_CDE73C92FAEA51AA__CCTOR_OFFSET UNITYSDK_OFFSET(0x172C0C20)
#define MOLEMOLE_CONFIG_VECTOR3RANGE_CLASS_3_CDE73C92FAEA51AA__CTOR_OFFSET UNITYSDK_OFFSET(0x172C0BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Vector3Range_Class_3_CDE73C92FAEA51AA_TypeDefinitionIndex = 48695;

	class Vector3Range_Class_3_CDE73C92FAEA51AA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::Vector3Range>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Vector3Range_Class_3_CDE73C92FAEA51AA_TypeDefinitionIndex)->GetStaticField(0x3F750);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VECTOR3RANGE_CLASS_3_CDE73C92FAEA51AA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VECTOR3RANGE_CLASS_3_CDE73C92FAEA51AA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VECTOR3RANGE_CLASS_3_CDE73C92FAEA51AA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::Vector3Range& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::Vector3Range&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VECTOR3RANGE_CLASS_3_CDE73C92FAEA51AA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::Vector3Range& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::Vector3Range&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VECTOR3RANGE_CLASS_3_CDE73C92FAEA51AA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
