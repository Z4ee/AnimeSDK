#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIAdaptorParams; }
namespace MoleMole { class UIAdataporRectTransform; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_UIADAPTORPARAMS_CLASS_3_8D10CF953BDDD150_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x196F4FF0)
#define MOLEMOLE_UIADAPTORPARAMS_CLASS_3_8D10CF953BDDD150_READMEMBER_OFFSET UNITYSDK_OFFSET(0x196F5000)
#define MOLEMOLE_UIADAPTORPARAMS_CLASS_3_8D10CF953BDDD150_WRITE_OFFSET UNITYSDK_OFFSET(0x196F5250)
#define MOLEMOLE_UIADAPTORPARAMS_CLASS_3_8D10CF953BDDD150__CCTOR_OFFSET UNITYSDK_OFFSET(0x196F5410)
#define MOLEMOLE_UIADAPTORPARAMS_CLASS_3_8D10CF953BDDD150__CTOR_OFFSET UNITYSDK_OFFSET(0x196F53D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdaptorParams_Class_3_8D10CF953BDDD150_TypeDefinitionIndex = 47053;

	class UIAdaptorParams_Class_3_8D10CF953BDDD150 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAdaptorParams*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAdaptorParams_Class_3_8D10CF953BDDD150_TypeDefinitionIndex)->GetStaticField(0x36AC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAdataporRectTransform*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAdataporRectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(UIAdaptorParams_Class_3_8D10CF953BDDD150_TypeDefinitionIndex)->GetStaticField(0x36AC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_CLASS_3_8D10CF953BDDD150__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_CLASS_3_8D10CF953BDDD150__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_CLASS_3_8D10CF953BDDD150_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAdaptorParams*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAdaptorParams*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_CLASS_3_8D10CF953BDDD150_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::UIAdaptorParams*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAdaptorParams*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_CLASS_3_8D10CF953BDDD150_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
