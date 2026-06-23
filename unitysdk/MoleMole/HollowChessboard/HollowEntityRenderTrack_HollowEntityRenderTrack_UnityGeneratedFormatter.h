#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class HollowEntityRenderTrack; }
namespace MoleMole::HollowChessboard { class ICondition; }
namespace MoleMole::HollowChessboard { class IHollowEntitySection; }
namespace MoleMole::HollowChessboard { class IRenderEvent; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_HOLLOWENTITYRENDERTRACK_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17E83450)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_HOLLOWENTITYRENDERTRACK_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17E83460)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_HOLLOWENTITYRENDERTRACK_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17E83860)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_HOLLOWENTITYRENDERTRACK_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E83B00)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_HOLLOWENTITYRENDERTRACK_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E83AC0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityRenderTrack_HollowEntityRenderTrack_UnityGeneratedFormatter_TypeDefinitionIndex = 58167;

	class HollowEntityRenderTrack_HollowEntityRenderTrack_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::RenderSequenceSectionType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::RenderSequenceSectionType>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack_HollowEntityRenderTrack_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44E40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::ICondition*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::ICondition*>*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack_HollowEntityRenderTrack_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44E48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack_HollowEntityRenderTrack_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44E50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack_HollowEntityRenderTrack_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44E58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IHollowEntitySection*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IHollowEntitySection*>*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack_HollowEntityRenderTrack_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_HOLLOWENTITYRENDERTRACK_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_HOLLOWENTITYRENDERTRACK_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_HOLLOWENTITYRENDERTRACK_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::HollowEntityRenderTrack*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntityRenderTrack*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_HOLLOWENTITYRENDERTRACK_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::HollowChessboard::HollowEntityRenderTrack*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntityRenderTrack*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_HOLLOWENTITYRENDERTRACK_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
