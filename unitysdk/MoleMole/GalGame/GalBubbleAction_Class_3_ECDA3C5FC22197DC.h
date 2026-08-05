#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPerformInterruptType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalBubbleAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_GALBUBBLEACTION_CLASS_3_ECDA3C5FC22197DC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13A8FA10)
#define MOLEMOLE_GALGAME_GALBUBBLEACTION_CLASS_3_ECDA3C5FC22197DC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13A8FA20)
#define MOLEMOLE_GALGAME_GALBUBBLEACTION_CLASS_3_ECDA3C5FC22197DC_WRITE_OFFSET UNITYSDK_OFFSET(0x13A8FBB0)
#define MOLEMOLE_GALGAME_GALBUBBLEACTION_CLASS_3_ECDA3C5FC22197DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A8FD10)
#define MOLEMOLE_GALGAME_GALBUBBLEACTION_CLASS_3_ECDA3C5FC22197DC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8FCD0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleAction_Class_3_ECDA3C5FC22197DC_TypeDefinitionIndex = 88126;

	class GalBubbleAction_Class_3_ECDA3C5FC22197DC : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalBubbleAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Share::EPerformInterruptType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::Share::EPerformInterruptType>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleAction_Class_3_ECDA3C5FC22197DC_TypeDefinitionIndex)->GetStaticField(0x46D10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleAction_Class_3_ECDA3C5FC22197DC_TypeDefinitionIndex)->GetStaticField(0x46D18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLEACTION_CLASS_3_ECDA3C5FC22197DC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLEACTION_CLASS_3_ECDA3C5FC22197DC__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLEACTION_CLASS_3_ECDA3C5FC22197DC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalBubbleAction*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalBubbleAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLEACTION_CLASS_3_ECDA3C5FC22197DC_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalBubbleAction*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalBubbleAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLEACTION_CLASS_3_ECDA3C5FC22197DC_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
