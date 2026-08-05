#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class NpcTextureBehaviorSection; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CLASS_3_188BC44B25DA592E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16858D10)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CLASS_3_188BC44B25DA592E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16858D20)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CLASS_3_188BC44B25DA592E_WRITE_OFFSET UNITYSDK_OFFSET(0x16858DF0)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CLASS_3_188BC44B25DA592E__CCTOR_OFFSET UNITYSDK_OFFSET(0x16858EE0)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CLASS_3_188BC44B25DA592E__CTOR_OFFSET UNITYSDK_OFFSET(0x16858EA0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int NpcTextureBehaviorSection_Class_3_188BC44B25DA592E_TypeDefinitionIndex = 53353;

	class NpcTextureBehaviorSection_Class_3_188BC44B25DA592E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::NpcTextureBehaviorSection*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NpcTextureBehaviorSection_Class_3_188BC44B25DA592E_TypeDefinitionIndex)->GetStaticField(0x367C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CLASS_3_188BC44B25DA592E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CLASS_3_188BC44B25DA592E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CLASS_3_188BC44B25DA592E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::NpcTextureBehaviorSection*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::NpcTextureBehaviorSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CLASS_3_188BC44B25DA592E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::NpcTextureBehaviorSection*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::NpcTextureBehaviorSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CLASS_3_188BC44B25DA592E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
