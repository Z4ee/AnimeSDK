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

#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_MONOUIGAMEOBJECTNUMBER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1916F550)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_MONOUIGAMEOBJECTNUMBER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1916F560)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_MONOUIGAMEOBJECTNUMBER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1916F800)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_MONOUIGAMEOBJECTNUMBER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1916F9F0)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_MONOUIGAMEOBJECTNUMBER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1916F9B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGameObjectNumber_MonoUIGameObjectNumber_UnityGeneratedFormatter_TypeDefinitionIndex = 81314;

	class MonoUIGameObjectNumber_MonoUIGameObjectNumber_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoUIGameObjectNumber*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUIGameObjectNumber_SpecOffsetConfig>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUIGameObjectNumber_SpecOffsetConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIGameObjectNumber_MonoUIGameObjectNumber_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39EC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUIGameObjectNumber_NumberUnits, ::System::Boolean>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUIGameObjectNumber_NumberUnits, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIGameObjectNumber_MonoUIGameObjectNumber_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39EC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUIGameObjectNumber_NumberUnits, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUIGameObjectNumber_NumberUnits, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIGameObjectNumber_MonoUIGameObjectNumber_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39ED0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_MONOUIGAMEOBJECTNUMBER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_MONOUIGAMEOBJECTNUMBER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_MONOUIGAMEOBJECTNUMBER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUIGameObjectNumber*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUIGameObjectNumber*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_MONOUIGAMEOBJECTNUMBER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MonoUIGameObjectNumber*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUIGameObjectNumber*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_MONOUIGAMEOBJECTNUMBER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
