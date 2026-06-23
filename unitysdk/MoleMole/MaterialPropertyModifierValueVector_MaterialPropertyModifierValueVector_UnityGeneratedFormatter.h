#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_MATERIALPROPERTYMODIFIERVALUEVECTOR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12BCA340)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_MATERIALPROPERTYMODIFIERVALUEVECTOR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12BCA350)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_MATERIALPROPERTYMODIFIERVALUEVECTOR_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12BCA670)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_MATERIALPROPERTYMODIFIERVALUEVECTOR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BCA8B0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_MATERIALPROPERTYMODIFIERVALUEVECTOR_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BCA850)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueVector_MaterialPropertyModifierValueVector_UnityGeneratedFormatter_TypeDefinitionIndex = 54060;

	class MaterialPropertyModifierValueVector_MaterialPropertyModifierValueVector_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierValueVector>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Byte>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueVector_MaterialPropertyModifierValueVector_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueVector_MaterialPropertyModifierValueVector_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE58);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueVector_MaterialPropertyModifierValueVector_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_MATERIALPROPERTYMODIFIERVALUEVECTOR_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_MATERIALPROPERTYMODIFIERVALUEVECTOR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_MATERIALPROPERTYMODIFIERVALUEVECTOR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueVector& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_MATERIALPROPERTYMODIFIERVALUEVECTOR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueVector& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEVECTOR_MATERIALPROPERTYMODIFIERVALUEVECTOR_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
