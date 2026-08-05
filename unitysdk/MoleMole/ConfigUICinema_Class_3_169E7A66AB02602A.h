#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/MoleMole/CinemaDistanceRatioRotationStruct.h"
#include "unitysdk/MoleMole/CinemaProjectorStruct.h"
#include "unitysdk/MoleMole/CinemaSingleClickCurveParamsStruct.h"
#include "unitysdk/MoleMole/ConfigCinemaDepthOfFieldParam.h"
#include "unitysdk/MoleMole/ConfigCinemaFogParam.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigCinemaMoveCurve; }
namespace MoleMole { class ConfigUICinema; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICINEMA_CLASS_3_169E7A66AB02602A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B501C20)
#define MOLEMOLE_CONFIGUICINEMA_CLASS_3_169E7A66AB02602A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B501C30)
#define MOLEMOLE_CONFIGUICINEMA_CLASS_3_169E7A66AB02602A_WRITE_OFFSET UNITYSDK_OFFSET(0x1B5021E0)
#define MOLEMOLE_CONFIGUICINEMA_CLASS_3_169E7A66AB02602A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B502570)
#define MOLEMOLE_CONFIGUICINEMA_CLASS_3_169E7A66AB02602A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B502530)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICinema_Class_3_169E7A66AB02602A_TypeDefinitionIndex = 41069;

	class ConfigUICinema_Class_3_169E7A66AB02602A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICinema*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_Class_3_169E7A66AB02602A_TypeDefinitionIndex)->GetStaticField(0x4E880);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CinemaSingleClickCurveParamsStruct>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CinemaSingleClickCurveParamsStruct>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_Class_3_169E7A66AB02602A_TypeDefinitionIndex)->GetStaticField(0x4E888);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaFogParam>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaFogParam>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_Class_3_169E7A66AB02602A_TypeDefinitionIndex)->GetStaticField(0x4E890);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_Class_3_169E7A66AB02602A_TypeDefinitionIndex)->GetStaticField(0x4E898);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaDistanceRatioRotationStruct>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaDistanceRatioRotationStruct>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_Class_3_169E7A66AB02602A_TypeDefinitionIndex)->GetStaticField(0x4E8A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaDepthOfFieldParam>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaDepthOfFieldParam>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_Class_3_169E7A66AB02602A_TypeDefinitionIndex)->GetStaticField(0x4E8A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaMoveCurve*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaMoveCurve*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_Class_3_169E7A66AB02602A_TypeDefinitionIndex)->GetStaticField(0x4E8B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaProjectorStruct>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaProjectorStruct>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_Class_3_169E7A66AB02602A_TypeDefinitionIndex)->GetStaticField(0x4E8B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_CLASS_3_169E7A66AB02602A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_CLASS_3_169E7A66AB02602A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_CLASS_3_169E7A66AB02602A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICinema*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICinema*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_CLASS_3_169E7A66AB02602A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUICinema*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICinema*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_CLASS_3_169E7A66AB02602A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
