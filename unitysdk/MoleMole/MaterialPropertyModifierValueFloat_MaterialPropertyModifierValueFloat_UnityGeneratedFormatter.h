#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_MATERIALPROPERTYMODIFIERVALUEFLOAT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15135BE0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_MATERIALPROPERTYMODIFIERVALUEFLOAT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15135BF0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_MATERIALPROPERTYMODIFIERVALUEFLOAT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x15135E60)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_MATERIALPROPERTYMODIFIERVALUEFLOAT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15136050)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_MATERIALPROPERTYMODIFIERVALUEFLOAT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15135FF0)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueFloat_MaterialPropertyModifierValueFloat_UnityGeneratedFormatter_TypeDefinitionIndex = 49463;

	class MaterialPropertyModifierValueFloat_MaterialPropertyModifierValueFloat_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierValueFloat>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueFloat_MaterialPropertyModifierValueFloat_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41150);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueFloat_MaterialPropertyModifierValueFloat_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41158);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_MATERIALPROPERTYMODIFIERVALUEFLOAT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_MATERIALPROPERTYMODIFIERVALUEFLOAT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_MATERIALPROPERTYMODIFIERVALUEFLOAT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueFloat& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_MATERIALPROPERTYMODIFIERVALUEFLOAT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueFloat& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEFLOAT_MATERIALPROPERTYMODIFIERVALUEFLOAT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
