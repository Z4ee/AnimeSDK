#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class IScreenLayout; }
namespace MoleMole { class UIControlReference; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICONTROLREFERENCE_CLASS_3_CE31A9459E7D99CC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1803DEC0)
#define MOLEMOLE_UICONTROLREFERENCE_CLASS_3_CE31A9459E7D99CC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1803DED0)
#define MOLEMOLE_UICONTROLREFERENCE_CLASS_3_CE31A9459E7D99CC_WRITE_OFFSET UNITYSDK_OFFSET(0x1803DFA0)
#define MOLEMOLE_UICONTROLREFERENCE_CLASS_3_CE31A9459E7D99CC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1803E090)
#define MOLEMOLE_UICONTROLREFERENCE_CLASS_3_CE31A9459E7D99CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1803E050)

namespace MoleMole
{
	inline static constexpr unsigned int UIControlReference_Class_3_CE31A9459E7D99CC_TypeDefinitionIndex = 89454;

	class UIControlReference_Class_3_CE31A9459E7D99CC : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIControlReference*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::IScreenLayout*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::IScreenLayout*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIControlReference_Class_3_CE31A9459E7D99CC_TypeDefinitionIndex)->GetStaticField(0x3A2E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_CLASS_3_CE31A9459E7D99CC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_CLASS_3_CE31A9459E7D99CC__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_CLASS_3_CE31A9459E7D99CC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIControlReference*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlReference*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_CLASS_3_CE31A9459E7D99CC_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::UIControlReference*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_CLASS_3_CE31A9459E7D99CC_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
