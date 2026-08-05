#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIGameObjectNumber_NumberUnits.h"
#include "unitysdk/MoleMole/MonoUIGameObjectNumber_SpecOffsetConfig.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoUIGameObjectNumber; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_CLASS_3_C61741D0241F34CC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x199771F0)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_CLASS_3_C61741D0241F34CC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19977200)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_CLASS_3_C61741D0241F34CC_WRITE_OFFSET UNITYSDK_OFFSET(0x19977460)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_CLASS_3_C61741D0241F34CC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19977620)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_CLASS_3_C61741D0241F34CC__CTOR_OFFSET UNITYSDK_OFFSET(0x199775E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGameObjectNumber_Class_3_C61741D0241F34CC_TypeDefinitionIndex = 89107;

	class MonoUIGameObjectNumber_Class_3_C61741D0241F34CC : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoUIGameObjectNumber*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUIGameObjectNumber_NumberUnits, ::System::Boolean>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUIGameObjectNumber_NumberUnits, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIGameObjectNumber_Class_3_C61741D0241F34CC_TypeDefinitionIndex)->GetStaticField(0x519E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUIGameObjectNumber_SpecOffsetConfig>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUIGameObjectNumber_SpecOffsetConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIGameObjectNumber_Class_3_C61741D0241F34CC_TypeDefinitionIndex)->GetStaticField(0x519E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUIGameObjectNumber_NumberUnits, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUIGameObjectNumber_NumberUnits, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIGameObjectNumber_Class_3_C61741D0241F34CC_TypeDefinitionIndex)->GetStaticField(0x519F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_CLASS_3_C61741D0241F34CC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_CLASS_3_C61741D0241F34CC__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_CLASS_3_C61741D0241F34CC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUIGameObjectNumber*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUIGameObjectNumber*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_CLASS_3_C61741D0241F34CC_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoUIGameObjectNumber*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUIGameObjectNumber*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_CLASS_3_C61741D0241F34CC_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
