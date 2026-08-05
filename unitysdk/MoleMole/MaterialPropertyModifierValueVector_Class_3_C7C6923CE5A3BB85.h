#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_CLASS_3_C7C6923CE5A3BB85_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B2E760)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_CLASS_3_C7C6923CE5A3BB85_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B2E770)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_CLASS_3_C7C6923CE5A3BB85_WRITE_OFFSET UNITYSDK_OFFSET(0x19B2EA40)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_CLASS_3_C7C6923CE5A3BB85__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B2EC50)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_CLASS_3_C7C6923CE5A3BB85__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2EBF0)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueVector_Class_3_C7C6923CE5A3BB85_TypeDefinitionIndex = 47119;

	class MaterialPropertyModifierValueVector_Class_3_C7C6923CE5A3BB85 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierValueVector>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Byte>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueVector_Class_3_C7C6923CE5A3BB85_TypeDefinitionIndex)->GetStaticField(0x51990);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueVector_Class_3_C7C6923CE5A3BB85_TypeDefinitionIndex)->GetStaticField(0x51998);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueVector_Class_3_C7C6923CE5A3BB85_TypeDefinitionIndex)->GetStaticField(0x519A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_CLASS_3_C7C6923CE5A3BB85__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_CLASS_3_C7C6923CE5A3BB85__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_CLASS_3_C7C6923CE5A3BB85_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueVector& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_CLASS_3_C7C6923CE5A3BB85_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueVector& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_CLASS_3_C7C6923CE5A3BB85_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
