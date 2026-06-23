#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class HollowEntityRenderSequence; }
namespace MoleMole::HollowChessboard { class HollowEntityRenderTrack; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_HOLLOWENTITYRENDERSEQUENCE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12621880)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_HOLLOWENTITYRENDERSEQUENCE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12621890)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_HOLLOWENTITYRENDERSEQUENCE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12621A70)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_HOLLOWENTITYRENDERSEQUENCE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12621C10)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_HOLLOWENTITYRENDERSEQUENCE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12621BD0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityRenderSequence_HollowEntityRenderSequence_UnityGeneratedFormatter_TypeDefinitionIndex = 80154;

	class HollowEntityRenderSequence_HollowEntityRenderSequence_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::HollowEntityRenderSequence*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderSequence_HollowEntityRenderSequence_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x307E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderSequence_HollowEntityRenderSequence_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x307E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_HOLLOWENTITYRENDERSEQUENCE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_HOLLOWENTITYRENDERSEQUENCE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_HOLLOWENTITYRENDERSEQUENCE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::HollowEntityRenderSequence*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntityRenderSequence*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_HOLLOWENTITYRENDERSEQUENCE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::HollowChessboard::HollowEntityRenderSequence*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntityRenderSequence*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_HOLLOWENTITYRENDERSEQUENCE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
