#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoUILayoutAdaptor; }
namespace MoleMole { class UIAdaptorParams; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOUILAYOUTADAPTOR_CLASS_3_72B767505D2CE956_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11903A60)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_CLASS_3_72B767505D2CE956_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11903A70)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_CLASS_3_72B767505D2CE956_WRITE_OFFSET UNITYSDK_OFFSET(0x11903B40)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_CLASS_3_72B767505D2CE956__CCTOR_OFFSET UNITYSDK_OFFSET(0x11903C30)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_CLASS_3_72B767505D2CE956__CTOR_OFFSET UNITYSDK_OFFSET(0x11903BF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUILayoutAdaptor_Class_3_72B767505D2CE956_TypeDefinitionIndex = 53741;

	class MonoUILayoutAdaptor_Class_3_72B767505D2CE956 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoUILayoutAdaptor*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::UIAdaptorParams*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::UIAdaptorParams*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUILayoutAdaptor_Class_3_72B767505D2CE956_TypeDefinitionIndex)->GetStaticField(0x3CC70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_CLASS_3_72B767505D2CE956__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_CLASS_3_72B767505D2CE956__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_CLASS_3_72B767505D2CE956_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUILayoutAdaptor*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUILayoutAdaptor*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_CLASS_3_72B767505D2CE956_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoUILayoutAdaptor*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUILayoutAdaptor*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_CLASS_3_72B767505D2CE956_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
