#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectExtensionEnum.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class MonoEffectExtensionData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_CLASS_3_CDB42050BA49A791_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x144E4DF0)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_CLASS_3_CDB42050BA49A791_READMEMBER_OFFSET UNITYSDK_OFFSET(0x144E4E00)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_CLASS_3_CDB42050BA49A791_WRITE_OFFSET UNITYSDK_OFFSET(0x144E51B0)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_CLASS_3_CDB42050BA49A791__CCTOR_OFFSET UNITYSDK_OFFSET(0x144E5420)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_CLASS_3_CDB42050BA49A791__CTOR_OFFSET UNITYSDK_OFFSET(0x144E53E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectExtensionData_Class_3_CDB42050BA49A791_TypeDefinitionIndex = 52475;

	class MonoEffectExtensionData_Class_3_CDB42050BA49A791 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectExtensionData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Int32>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectExtensionData_Class_3_CDB42050BA49A791_TypeDefinitionIndex)->GetStaticField(0x3A010);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::String*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectExtensionData_Class_3_CDB42050BA49A791_TypeDefinitionIndex)->GetStaticField(0x3A018);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Boolean>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectExtensionData_Class_3_CDB42050BA49A791_TypeDefinitionIndex)->GetStaticField(0x3A020);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Single>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectExtensionData_Class_3_CDB42050BA49A791_TypeDefinitionIndex)->GetStaticField(0x3A028);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::UnityEngine::Color>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectExtensionData_Class_3_CDB42050BA49A791_TypeDefinitionIndex)->GetStaticField(0x3A030);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_CLASS_3_CDB42050BA49A791__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_CLASS_3_CDB42050BA49A791__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_CLASS_3_CDB42050BA49A791_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectExtensionData*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectExtensionData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_CLASS_3_CDB42050BA49A791_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoEffectExtensionData*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectExtensionData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_CLASS_3_CDB42050BA49A791_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
