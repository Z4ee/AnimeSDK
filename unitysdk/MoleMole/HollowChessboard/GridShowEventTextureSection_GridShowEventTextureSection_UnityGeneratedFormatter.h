#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class GridShowEventTextureSection; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_GRIDSHOWEVENTTEXTURESECTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16D4B140)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_GRIDSHOWEVENTTEXTURESECTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16D4B150)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_GRIDSHOWEVENTTEXTURESECTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16D4B1C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_GRIDSHOWEVENTTEXTURESECTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D4B210)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int GridShowEventTextureSection_GridShowEventTextureSection_UnityGeneratedFormatter_TypeDefinitionIndex = 66049;

	class GridShowEventTextureSection_GridShowEventTextureSection_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::GridShowEventTextureSection*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_GRIDSHOWEVENTTEXTURESECTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_GRIDSHOWEVENTTEXTURESECTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::GridShowEventTextureSection*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::GridShowEventTextureSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_GRIDSHOWEVENTTEXTURESECTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::HollowChessboard::GridShowEventTextureSection*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::GridShowEventTextureSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_GRIDSHOWEVENTTEXTURESECTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
