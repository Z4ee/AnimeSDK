#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/DebugColor.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_BATTLE_DEBUGCOLOR_CLASS_3_66561C018E9D8D9A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16238E00)
#define MOLEMOLE_BATTLE_DEBUGCOLOR_CLASS_3_66561C018E9D8D9A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16238E10)
#define MOLEMOLE_BATTLE_DEBUGCOLOR_CLASS_3_66561C018E9D8D9A_WRITE_OFFSET UNITYSDK_OFFSET(0x16238FA0)
#define MOLEMOLE_BATTLE_DEBUGCOLOR_CLASS_3_66561C018E9D8D9A__CCTOR_OFFSET UNITYSDK_OFFSET(0x16239130)
#define MOLEMOLE_BATTLE_DEBUGCOLOR_CLASS_3_66561C018E9D8D9A__CTOR_OFFSET UNITYSDK_OFFSET(0x162390D0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int DebugColor_Class_3_66561C018E9D8D9A_TypeDefinitionIndex = 59346;

	class DebugColor_Class_3_66561C018E9D8D9A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::DebugColor>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(DebugColor_Class_3_66561C018E9D8D9A_TypeDefinitionIndex)->GetStaticField(0x31DC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_DEBUGCOLOR_CLASS_3_66561C018E9D8D9A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_DEBUGCOLOR_CLASS_3_66561C018E9D8D9A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_DEBUGCOLOR_CLASS_3_66561C018E9D8D9A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::DebugColor& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::DebugColor&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_DEBUGCOLOR_CLASS_3_66561C018E9D8D9A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Battle::DebugColor& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::DebugColor&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_DEBUGCOLOR_CLASS_3_66561C018E9D8D9A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
