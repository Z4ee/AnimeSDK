#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class ConfigUICommon_Performance; }
namespace MoleMole { class PropBgLevel; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CLASS_3_5E9A03B1FC48E3FF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0037A0)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CLASS_3_5E9A03B1FC48E3FF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A0037B0)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CLASS_3_5E9A03B1FC48E3FF_WRITE_OFFSET UNITYSDK_OFFSET(0x1A003FF0)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CLASS_3_5E9A03B1FC48E3FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0044F0)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CLASS_3_5E9A03B1FC48E3FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0044B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Performance_Class_3_5E9A03B1FC48E3FF_TypeDefinitionIndex = 59013;

	class ConfigUICommon_Performance_Class_3_5E9A03B1FC48E3FF : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon_Performance*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_Class_3_5E9A03B1FC48E3FF_TypeDefinitionIndex)->GetStaticField(0x44C80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_Class_3_5E9A03B1FC48E3FF_TypeDefinitionIndex)->GetStaticField(0x44C88);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::PropBgLevel*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::PropBgLevel*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_Class_3_5E9A03B1FC48E3FF_TypeDefinitionIndex)->GetStaticField(0x44C90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_Class_3_5E9A03B1FC48E3FF_TypeDefinitionIndex)->GetStaticField(0x44C98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_Class_3_5E9A03B1FC48E3FF_TypeDefinitionIndex)->GetStaticField(0x44CA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_Class_3_5E9A03B1FC48E3FF_TypeDefinitionIndex)->GetStaticField(0x44CA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_Class_3_5E9A03B1FC48E3FF_TypeDefinitionIndex)->GetStaticField(0x44CB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_Class_3_5E9A03B1FC48E3FF_TypeDefinitionIndex)->GetStaticField(0x44CB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Performance_Class_3_5E9A03B1FC48E3FF_TypeDefinitionIndex)->GetStaticField(0x44CC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CLASS_3_5E9A03B1FC48E3FF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CLASS_3_5E9A03B1FC48E3FF__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CLASS_3_5E9A03B1FC48E3FF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_Performance*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_Performance*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CLASS_3_5E9A03B1FC48E3FF_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_Performance*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Performance*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_CLASS_3_5E9A03B1FC48E3FF_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
