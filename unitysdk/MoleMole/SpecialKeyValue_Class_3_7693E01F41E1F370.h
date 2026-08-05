#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SpecialKeyValue; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_SPECIALKEYVALUE_CLASS_3_7693E01F41E1F370_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1792E090)
#define MOLEMOLE_SPECIALKEYVALUE_CLASS_3_7693E01F41E1F370_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1792E0A0)
#define MOLEMOLE_SPECIALKEYVALUE_CLASS_3_7693E01F41E1F370_WRITE_OFFSET UNITYSDK_OFFSET(0x1792E230)
#define MOLEMOLE_SPECIALKEYVALUE_CLASS_3_7693E01F41E1F370__CCTOR_OFFSET UNITYSDK_OFFSET(0x1792E390)
#define MOLEMOLE_SPECIALKEYVALUE_CLASS_3_7693E01F41E1F370__CTOR_OFFSET UNITYSDK_OFFSET(0x1792E350)

namespace MoleMole
{
	inline static constexpr unsigned int SpecialKeyValue_Class_3_7693E01F41E1F370_TypeDefinitionIndex = 63712;

	class SpecialKeyValue_Class_3_7693E01F41E1F370 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SpecialKeyValue*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SpecialKeyValue_Class_3_7693E01F41E1F370_TypeDefinitionIndex)->GetStaticField(0x42800);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialKeyValue_Class_3_7693E01F41E1F370_TypeDefinitionIndex)->GetStaticField(0x42808);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALKEYVALUE_CLASS_3_7693E01F41E1F370__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALKEYVALUE_CLASS_3_7693E01F41E1F370__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALKEYVALUE_CLASS_3_7693E01F41E1F370_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SpecialKeyValue*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SpecialKeyValue*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALKEYVALUE_CLASS_3_7693E01F41E1F370_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::SpecialKeyValue*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SpecialKeyValue*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALKEYVALUE_CLASS_3_7693E01F41E1F370_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
