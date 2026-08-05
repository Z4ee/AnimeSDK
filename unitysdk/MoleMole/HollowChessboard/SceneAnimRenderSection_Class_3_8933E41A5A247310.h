#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class SceneAnimRenderSection; }
namespace MoleMole::HollowChessboard { class SceneAnimRenderSection_Config; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CLASS_3_8933E41A5A247310_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149F00B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CLASS_3_8933E41A5A247310_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149F00C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CLASS_3_8933E41A5A247310_WRITE_OFFSET UNITYSDK_OFFSET(0x149F0250)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CLASS_3_8933E41A5A247310__CCTOR_OFFSET UNITYSDK_OFFSET(0x149F03B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CLASS_3_8933E41A5A247310__CTOR_OFFSET UNITYSDK_OFFSET(0x149F0370)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SceneAnimRenderSection_Class_3_8933E41A5A247310_TypeDefinitionIndex = 52707;

	class SceneAnimRenderSection_Class_3_8933E41A5A247310 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::SceneAnimRenderSection*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Class_3_8933E41A5A247310_TypeDefinitionIndex)->GetStaticField(0x32750);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Class_3_8933E41A5A247310_TypeDefinitionIndex)->GetStaticField(0x32758);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CLASS_3_8933E41A5A247310__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CLASS_3_8933E41A5A247310__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CLASS_3_8933E41A5A247310_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::SceneAnimRenderSection*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CLASS_3_8933E41A5A247310_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::SceneAnimRenderSection*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CLASS_3_8933E41A5A247310_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
