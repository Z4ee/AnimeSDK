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

#define MOLEMOLE_MONOUILAYOUTADAPTOR_MONOUILAYOUTADAPTOR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x191705A0)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_MONOUILAYOUTADAPTOR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x191705B0)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_MONOUILAYOUTADAPTOR_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x191706F0)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_MONOUILAYOUTADAPTOR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19170830)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_MONOUILAYOUTADAPTOR_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x191707F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUILayoutAdaptor_MonoUILayoutAdaptor_UnityGeneratedFormatter_TypeDefinitionIndex = 65263;

	class MonoUILayoutAdaptor_MonoUILayoutAdaptor_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoUILayoutAdaptor*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::UIAdaptorParams*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::UIAdaptorParams*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUILayoutAdaptor_MonoUILayoutAdaptor_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39EE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_MONOUILAYOUTADAPTOR_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_MONOUILAYOUTADAPTOR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_MONOUILAYOUTADAPTOR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUILayoutAdaptor*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUILayoutAdaptor*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_MONOUILAYOUTADAPTOR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MonoUILayoutAdaptor*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUILayoutAdaptor*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_MONOUILAYOUTADAPTOR_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
