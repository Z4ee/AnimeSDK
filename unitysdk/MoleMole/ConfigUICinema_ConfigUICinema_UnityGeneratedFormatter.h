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

#define MOLEMOLE_CONFIGUICINEMA_CONFIGUICINEMA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x161AF300)
#define MOLEMOLE_CONFIGUICINEMA_CONFIGUICINEMA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x161AF310)
#define MOLEMOLE_CONFIGUICINEMA_CONFIGUICINEMA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x161AF910)
#define MOLEMOLE_CONFIGUICINEMA_CONFIGUICINEMA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x161AFCD0)
#define MOLEMOLE_CONFIGUICINEMA_CONFIGUICINEMA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x161AFC90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICinema_ConfigUICinema_UnityGeneratedFormatter_TypeDefinitionIndex = 82948;

	class ConfigUICinema_ConfigUICinema_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICinema*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CinemaSingleClickCurveParamsStruct>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CinemaSingleClickCurveParamsStruct>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_ConfigUICinema_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37510);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaFogParam>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaFogParam>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_ConfigUICinema_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37518);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_ConfigUICinema_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37520);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaProjectorStruct>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaProjectorStruct>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_ConfigUICinema_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37528);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_ConfigUICinema_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37530);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaDepthOfFieldParam>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaDepthOfFieldParam>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_ConfigUICinema_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37538);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaMoveCurve*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaMoveCurve*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_ConfigUICinema_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37540);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaDistanceRatioRotationStruct>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaDistanceRatioRotationStruct>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICinema_ConfigUICinema_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37548);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_CONFIGUICINEMA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_CONFIGUICINEMA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_CONFIGUICINEMA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICinema*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICinema*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_CONFIGUICINEMA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUICinema*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICinema*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_CONFIGUICINEMA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
