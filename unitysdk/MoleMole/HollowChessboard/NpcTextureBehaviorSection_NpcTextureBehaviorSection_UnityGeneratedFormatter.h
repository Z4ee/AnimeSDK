#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class NpcTextureBehaviorSection; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_NPCTEXTUREBEHAVIORSECTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A035F60)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_NPCTEXTUREBEHAVIORSECTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A035F70)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_NPCTEXTUREBEHAVIORSECTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A0360A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_NPCTEXTUREBEHAVIORSECTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0361E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_NPCTEXTUREBEHAVIORSECTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0361A0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int NpcTextureBehaviorSection_NpcTextureBehaviorSection_UnityGeneratedFormatter_TypeDefinitionIndex = 53798;

	class NpcTextureBehaviorSection_NpcTextureBehaviorSection_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::NpcTextureBehaviorSection*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NpcTextureBehaviorSection_NpcTextureBehaviorSection_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BE30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_NPCTEXTUREBEHAVIORSECTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_NPCTEXTUREBEHAVIORSECTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_NPCTEXTUREBEHAVIORSECTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::NpcTextureBehaviorSection*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::NpcTextureBehaviorSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_NPCTEXTUREBEHAVIORSECTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::HollowChessboard::NpcTextureBehaviorSection*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::NpcTextureBehaviorSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_NPCTEXTUREBEHAVIORSECTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
