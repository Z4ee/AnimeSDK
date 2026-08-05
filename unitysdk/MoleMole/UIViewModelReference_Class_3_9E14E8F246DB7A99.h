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

#define MOLEMOLE_UIVIEWMODELREFERENCE_CLASS_3_9E14E8F246DB7A99_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x188B83D0)
#define MOLEMOLE_UIVIEWMODELREFERENCE_CLASS_3_9E14E8F246DB7A99_READMEMBER_OFFSET UNITYSDK_OFFSET(0x188B83E0)
#define MOLEMOLE_UIVIEWMODELREFERENCE_CLASS_3_9E14E8F246DB7A99_WRITE_OFFSET UNITYSDK_OFFSET(0x188B84B0)
#define MOLEMOLE_UIVIEWMODELREFERENCE_CLASS_3_9E14E8F246DB7A99__CCTOR_OFFSET UNITYSDK_OFFSET(0x188B85A0)
#define MOLEMOLE_UIVIEWMODELREFERENCE_CLASS_3_9E14E8F246DB7A99__CTOR_OFFSET UNITYSDK_OFFSET(0x188B8560)

namespace MoleMole
{
	inline static constexpr unsigned int UIViewModelReference_Class_3_9E14E8F246DB7A99_TypeDefinitionIndex = 59189;

	class UIViewModelReference_Class_3_9E14E8F246DB7A99 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIViewModelReference*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::IScreenLayout*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::IScreenLayout*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIViewModelReference_Class_3_9E14E8F246DB7A99_TypeDefinitionIndex)->GetStaticField(0x33410);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_CLASS_3_9E14E8F246DB7A99__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_CLASS_3_9E14E8F246DB7A99__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_CLASS_3_9E14E8F246DB7A99_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIViewModelReference*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIViewModelReference*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_CLASS_3_9E14E8F246DB7A99_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::UIViewModelReference*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIViewModelReference*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_CLASS_3_9E14E8F246DB7A99_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
