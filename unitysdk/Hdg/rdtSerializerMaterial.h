#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageComponents_Property.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }
namespace UnityEngine { class Material; }

#define HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15351960)
#define HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_READ_OFFSET UNITYSDK_OFFSET(0x15351A00)
#define HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_WRITE_OFFSET UNITYSDK_OFFSET(0x153519B0)
#define HDG_RDTSERIALIZERMATERIAL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15351350)
#define HDG_RDTSERIALIZERMATERIAL_UPDATESHADERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x15351A50)
#define HDG_RDTSERIALIZERMATERIAL__ADDSHADERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x153513E0)
#define HDG_RDTSERIALIZERMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x15351F70)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerMaterial_TypeDefinitionIndex = 45185;

	class rdtSerializerMaterial : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL__CTOR_OFFSET))(this);
		}

		static ::System::Object* Serialize(::System::Object* a1, ::Hdg::rdtSerializerRegistry* a2)
		{
			return ((::System::Object*(*)(::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL_SERIALIZE_OFFSET))(a1, a2);
		}

		::System::Object* Hdg_rdtSerializerInterface_Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Hdg_rdtSerializerInterface_Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_WRITE_OFFSET))(this, a1);
		}

		::System::Void Hdg_rdtSerializerInterface_Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL_HDG_RDTSERIALIZERINTERFACE_READ_OFFSET))(this, a1);
		}

		static ::System::Void UpdateShaderParameters(::UnityEngine::Material* a1, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL_UPDATESHADERPARAMETERS_OFFSET))(a1, a2);
		}

		static ::System::Void _AddShaderParameters(::UnityEngine::Material* a1, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>* a2, ::Hdg::rdtSerializerRegistry* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Property>*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATERIAL__ADDSHADERPARAMETERS_OFFSET))(a1, a2, a3);
		}
	};
}
