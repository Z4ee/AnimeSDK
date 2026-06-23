#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIAdaptorParams; }
namespace MoleMole { class UIAdataporRectTransform; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_UIADAPTORPARAMS_UIADAPTORPARAMS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18A4AF30)
#define MOLEMOLE_UIADAPTORPARAMS_UIADAPTORPARAMS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18A4AF40)
#define MOLEMOLE_UIADAPTORPARAMS_UIADAPTORPARAMS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18A4B1E0)
#define MOLEMOLE_UIADAPTORPARAMS_UIADAPTORPARAMS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A4B3D0)
#define MOLEMOLE_UIADAPTORPARAMS_UIADAPTORPARAMS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4B390)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdaptorParams_UIAdaptorParams_UnityGeneratedFormatter_TypeDefinitionIndex = 66413;

	class UIAdaptorParams_UIAdaptorParams_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAdaptorParams*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAdaptorParams_UIAdaptorParams_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D9E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAdataporRectTransform*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAdataporRectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(UIAdaptorParams_UIAdaptorParams_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D9E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_UIADAPTORPARAMS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_UIADAPTORPARAMS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_UIADAPTORPARAMS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAdaptorParams*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAdaptorParams*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_UIADAPTORPARAMS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::UIAdaptorParams*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAdaptorParams*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_UIADAPTORPARAMS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
