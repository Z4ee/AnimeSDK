#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_CLASS_3_1C4BC1DE3D77168E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BF7F50)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_CLASS_3_1C4BC1DE3D77168E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BF7F60)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_CLASS_3_1C4BC1DE3D77168E_WRITE_OFFSET UNITYSDK_OFFSET(0x19BF8180)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_CLASS_3_1C4BC1DE3D77168E__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BF8340)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_CLASS_3_1C4BC1DE3D77168E__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF82E0)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueFloat_Class_3_1C4BC1DE3D77168E_TypeDefinitionIndex = 80506;

	class MaterialPropertyModifierValueFloat_Class_3_1C4BC1DE3D77168E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierValueFloat>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueFloat_Class_3_1C4BC1DE3D77168E_TypeDefinitionIndex)->GetStaticField(0x48E20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueFloat_Class_3_1C4BC1DE3D77168E_TypeDefinitionIndex)->GetStaticField(0x48E28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_CLASS_3_1C4BC1DE3D77168E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_CLASS_3_1C4BC1DE3D77168E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_CLASS_3_1C4BC1DE3D77168E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueFloat& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_CLASS_3_1C4BC1DE3D77168E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueFloat& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_CLASS_3_1C4BC1DE3D77168E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
