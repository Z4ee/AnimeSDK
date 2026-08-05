#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_CLASS_3_21EF297CBF3852CB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x129AE520)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_CLASS_3_21EF297CBF3852CB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x129AE530)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_CLASS_3_21EF297CBF3852CB_WRITE_OFFSET UNITYSDK_OFFSET(0x129AE750)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_CLASS_3_21EF297CBF3852CB__CCTOR_OFFSET UNITYSDK_OFFSET(0x129AE910)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_CLASS_3_21EF297CBF3852CB__CTOR_OFFSET UNITYSDK_OFFSET(0x129AE8B0)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueBool_Class_3_21EF297CBF3852CB_TypeDefinitionIndex = 74044;

	class MaterialPropertyModifierValueBool_Class_3_21EF297CBF3852CB : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierValueBool>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueBool_Class_3_21EF297CBF3852CB_TypeDefinitionIndex)->GetStaticField(0x50F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_CLASS_3_21EF297CBF3852CB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_CLASS_3_21EF297CBF3852CB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_CLASS_3_21EF297CBF3852CB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueBool& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueBool&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_CLASS_3_21EF297CBF3852CB_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueBool& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueBool&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUEBOOL_CLASS_3_21EF297CBF3852CB_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
