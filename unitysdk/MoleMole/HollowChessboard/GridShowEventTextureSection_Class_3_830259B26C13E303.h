#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class GridShowEventTextureSection; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CLASS_3_830259B26C13E303_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x129AA8B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CLASS_3_830259B26C13E303_READMEMBER_OFFSET UNITYSDK_OFFSET(0x129AA8C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CLASS_3_830259B26C13E303_WRITE_OFFSET UNITYSDK_OFFSET(0x129AA8D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CLASS_3_830259B26C13E303__CTOR_OFFSET UNITYSDK_OFFSET(0x129AA8E0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int GridShowEventTextureSection_Class_3_830259B26C13E303_TypeDefinitionIndex = 62511;

	class GridShowEventTextureSection_Class_3_830259B26C13E303 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::GridShowEventTextureSection*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CLASS_3_830259B26C13E303__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CLASS_3_830259B26C13E303_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::GridShowEventTextureSection*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::GridShowEventTextureSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CLASS_3_830259B26C13E303_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::GridShowEventTextureSection*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::GridShowEventTextureSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CLASS_3_830259B26C13E303_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
