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

#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x161F5710)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x161F5720)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x161F5D10)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x161F60C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x161F6080)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SceneAnimRenderSection_Config_Config_UnityGeneratedFormatter_TypeDefinitionIndex = 84374;

	class SceneAnimRenderSection_Config_Config_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::RenderDataAliveType>>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::RenderDataAliveType>>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Config_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x376B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ShowEntryType>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ShowEntryType>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Config_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x376B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::System::Int32>>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Config_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x376C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Config_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x376C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Config_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x376D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_Config_Config_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x376D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection_Config*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG_CONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
