#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class IScreenLayout; }
namespace MoleMole { class UIViewModelReference; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIEWMODELREFERENCE_UIVIEWMODELREFERENCE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15C47330)
#define MOLEMOLE_UIVIEWMODELREFERENCE_UIVIEWMODELREFERENCE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15C47340)
#define MOLEMOLE_UIVIEWMODELREFERENCE_UIVIEWMODELREFERENCE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x15C47480)
#define MOLEMOLE_UIVIEWMODELREFERENCE_UIVIEWMODELREFERENCE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C475C0)
#define MOLEMOLE_UIVIEWMODELREFERENCE_UIVIEWMODELREFERENCE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C47580)

namespace MoleMole
{
	inline static constexpr unsigned int UIViewModelReference_UIViewModelReference_UnityGeneratedFormatter_TypeDefinitionIndex = 82772;

	class UIViewModelReference_UIViewModelReference_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIViewModelReference*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::IScreenLayout*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::IScreenLayout*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIViewModelReference_UIViewModelReference_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4A0D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_UIVIEWMODELREFERENCE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_UIVIEWMODELREFERENCE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_UIVIEWMODELREFERENCE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIViewModelReference*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIViewModelReference*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_UIVIEWMODELREFERENCE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::UIViewModelReference*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIViewModelReference*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_UIVIEWMODELREFERENCE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
