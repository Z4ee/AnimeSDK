#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLevelSound_ListenerConfig.h"
#include "unitysdk/MoleMole/ConfigLevelSound_WwiseWeatherConfig.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigLevelSound; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIGLEVELSOUND_CLASS_3_1B724BDC4A842ABA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x135194F0)
#define MOLEMOLE_CONFIGLEVELSOUND_CLASS_3_1B724BDC4A842ABA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13519500)
#define MOLEMOLE_CONFIGLEVELSOUND_CLASS_3_1B724BDC4A842ABA_WRITE_OFFSET UNITYSDK_OFFSET(0x13519750)
#define MOLEMOLE_CONFIGLEVELSOUND_CLASS_3_1B724BDC4A842ABA__CCTOR_OFFSET UNITYSDK_OFFSET(0x13519910)
#define MOLEMOLE_CONFIGLEVELSOUND_CLASS_3_1B724BDC4A842ABA__CTOR_OFFSET UNITYSDK_OFFSET(0x135198D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLevelSound_Class_3_1B724BDC4A842ABA_TypeDefinitionIndex = 56158;

	class ConfigLevelSound_Class_3_1B724BDC4A842ABA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigLevelSound*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelSound_Class_3_1B724BDC4A842ABA_TypeDefinitionIndex)->GetStaticField(0x4C070);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigLevelSound_WwiseWeatherConfig>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigLevelSound_WwiseWeatherConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelSound_Class_3_1B724BDC4A842ABA_TypeDefinitionIndex)->GetStaticField(0x4C078);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigLevelSound_ListenerConfig>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigLevelSound_ListenerConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelSound_Class_3_1B724BDC4A842ABA_TypeDefinitionIndex)->GetStaticField(0x4C080);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_CLASS_3_1B724BDC4A842ABA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_CLASS_3_1B724BDC4A842ABA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_CLASS_3_1B724BDC4A842ABA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigLevelSound*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigLevelSound*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_CLASS_3_1B724BDC4A842ABA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigLevelSound*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLevelSound*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_CLASS_3_1B724BDC4A842ABA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
