#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/MoleMole/HollowChessboard/ShowEntryType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::HollowChessboard { class SceneAnimRenderSection_Config; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CLASS_3_E096827FF9D38A14_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192571C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CLASS_3_E096827FF9D38A14_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192571D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CLASS_3_E096827FF9D38A14_WRITE_OFFSET UNITYSDK_OFFSET(0x19257760)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CLASS_3_E096827FF9D38A14__CCTOR_OFFSET UNITYSDK_OFFSET(0x19257AE0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CLASS_3_E096827FF9D38A14__CTOR_OFFSET UNITYSDK_OFFSET(0x19257AA0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SceneAnimRenderSection_Config_Class_3_E096827FF9D38A14_TypeDefinitionIndex = 52706;

	class SceneAnimRenderSection_Config_Class_3_E096827FF9D38A14 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Class_3_E096827FF9D38A14_TypeDefinitionIndex)->GetStaticField(0x4FDB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ShowEntryType>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ShowEntryType>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Class_3_E096827FF9D38A14_TypeDefinitionIndex)->GetStaticField(0x4FDB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::RenderDataAliveType>>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::RenderDataAliveType>>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Class_3_E096827FF9D38A14_TypeDefinitionIndex)->GetStaticField(0x4FDC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Class_3_E096827FF9D38A14_TypeDefinitionIndex)->GetStaticField(0x4FDC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::System::Int32>>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Class_3_E096827FF9D38A14_TypeDefinitionIndex)->GetStaticField(0x4FDD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Class_3_E096827FF9D38A14_TypeDefinitionIndex)->GetStaticField(0x4FDD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CLASS_3_E096827FF9D38A14__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CLASS_3_E096827FF9D38A14__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CLASS_3_E096827FF9D38A14_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CLASS_3_E096827FF9D38A14_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CLASS_3_E096827FF9D38A14_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
