#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageComponents_Property.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }
namespace UnityEngine { class Material; }

#define HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8C24860)
#define HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_READ_OFFSET UNITYSDK_OFFSET(0x8C24900)
#define HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_WRITE_OFFSET UNITYSDK_OFFSET(0x8C248B0)
#define HDG_RDTSERIALIZERMATERIAL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x8C242A0)
#define HDG_RDTSERIALIZERMATERIAL_UPDATESHADERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8C24950)
#define HDG_RDTSERIALIZERMATERIAL__ADDSHADERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8C24310)
#define HDG_RDTSERIALIZERMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x8C24DC0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerMaterial_TypeDefinitionIndex = 43773;

	class rdtSerializerMaterial : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL__CTOR_OFFSET))(this);
		}

		static ::System::Object* Serialize(::System::Object* objIn, ::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL_SERIALIZE_OFFSET))(objIn, registry);
		}

		::System::Object* Hdg_rdtSerializerInterface_Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Hdg_rdtSerializerInterface_Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_WRITE_OFFSET))(this, w);
		}

		::System::Void Hdg_rdtSerializerInterface_Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_READ_OFFSET))(this, r);
		}

		static ::System::Void UpdateShaderParameters(::UnityEngine::Material* mat, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* props)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL_UPDATESHADERPARAMETERS_OFFSET))(mat, props);
		}

		static ::System::Void _AddShaderParameters(::UnityEngine::Material* mat, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* result, ::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL__ADDSHADERPARAMETERS_OFFSET))(mat, result, registry);
		}
	};
}
