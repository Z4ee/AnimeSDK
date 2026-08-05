#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigInteractionFanCylinder.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class InteractTraitData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_INTERACTTRAITDATA_CLASS_3_7F15DD85FA964C41_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149F2000)
#define MOLEMOLE_INTERACTTRAITDATA_CLASS_3_7F15DD85FA964C41_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149F2010)
#define MOLEMOLE_INTERACTTRAITDATA_CLASS_3_7F15DD85FA964C41_WRITE_OFFSET UNITYSDK_OFFSET(0x149F2200)
#define MOLEMOLE_INTERACTTRAITDATA_CLASS_3_7F15DD85FA964C41__CCTOR_OFFSET UNITYSDK_OFFSET(0x149F23B0)
#define MOLEMOLE_INTERACTTRAITDATA_CLASS_3_7F15DD85FA964C41__CTOR_OFFSET UNITYSDK_OFFSET(0x149F2370)

namespace MoleMole
{
	inline static constexpr unsigned int InteractTraitData_Class_3_7F15DD85FA964C41_TypeDefinitionIndex = 61707;

	class InteractTraitData_Class_3_7F15DD85FA964C41 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::InteractTraitData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigInteractionFanCylinder>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigInteractionFanCylinder>**)Il2CppClass::FromTypeDefinitionIndex(InteractTraitData_Class_3_7F15DD85FA964C41_TypeDefinitionIndex)->GetStaticField(0x32770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA_CLASS_3_7F15DD85FA964C41__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA_CLASS_3_7F15DD85FA964C41__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA_CLASS_3_7F15DD85FA964C41_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::InteractTraitData*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InteractTraitData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA_CLASS_3_7F15DD85FA964C41_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::InteractTraitData*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InteractTraitData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA_CLASS_3_7F15DD85FA964C41_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
