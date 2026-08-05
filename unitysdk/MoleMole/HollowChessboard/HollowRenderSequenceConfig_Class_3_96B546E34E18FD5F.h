#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class HollowEntityRenderSequence; }
namespace MoleMole::HollowChessboard { class HollowRenderSequenceConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_CLASS_3_96B546E34E18FD5F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x179086E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_CLASS_3_96B546E34E18FD5F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x179086F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_CLASS_3_96B546E34E18FD5F_WRITE_OFFSET UNITYSDK_OFFSET(0x179087C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_CLASS_3_96B546E34E18FD5F__CCTOR_OFFSET UNITYSDK_OFFSET(0x179088B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_CLASS_3_96B546E34E18FD5F__CTOR_OFFSET UNITYSDK_OFFSET(0x17908870)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowRenderSequenceConfig_Class_3_96B546E34E18FD5F_TypeDefinitionIndex = 57071;

	class HollowRenderSequenceConfig_Class_3_96B546E34E18FD5F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::HollowRenderSequenceConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::HollowEntityRenderSequence*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::HollowEntityRenderSequence*>**)Il2CppClass::FromTypeDefinitionIndex(HollowRenderSequenceConfig_Class_3_96B546E34E18FD5F_TypeDefinitionIndex)->GetStaticField(0x427A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_CLASS_3_96B546E34E18FD5F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_CLASS_3_96B546E34E18FD5F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_CLASS_3_96B546E34E18FD5F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::HollowRenderSequenceConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowRenderSequenceConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_CLASS_3_96B546E34E18FD5F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::HollowRenderSequenceConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowRenderSequenceConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWRENDERSEQUENCECONFIG_CLASS_3_96B546E34E18FD5F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
