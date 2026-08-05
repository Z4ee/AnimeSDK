#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AvatarUIElementColor; }
namespace MoleMole { class AvatarUIElementColorConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_CLASS_3_A40BA7767F41D896_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x116C87C0)
#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_CLASS_3_A40BA7767F41D896_READMEMBER_OFFSET UNITYSDK_OFFSET(0x116C87D0)
#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_CLASS_3_A40BA7767F41D896_WRITE_OFFSET UNITYSDK_OFFSET(0x116C88A0)
#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_CLASS_3_A40BA7767F41D896__CCTOR_OFFSET UNITYSDK_OFFSET(0x116C8990)
#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_CLASS_3_A40BA7767F41D896__CTOR_OFFSET UNITYSDK_OFFSET(0x116C8950)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarUIElementColorConfigs_Class_3_A40BA7767F41D896_TypeDefinitionIndex = 67770;

	class AvatarUIElementColorConfigs_Class_3_A40BA7767F41D896 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::AvatarUIElementColorConfigs*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AvatarUIElementColor*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AvatarUIElementColor*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarUIElementColorConfigs_Class_3_A40BA7767F41D896_TypeDefinitionIndex)->GetStaticField(0x4F710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_CLASS_3_A40BA7767F41D896__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_CLASS_3_A40BA7767F41D896__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_CLASS_3_A40BA7767F41D896_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AvatarUIElementColorConfigs*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarUIElementColorConfigs*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_CLASS_3_A40BA7767F41D896_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::AvatarUIElementColorConfigs*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AvatarUIElementColorConfigs*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS_CLASS_3_A40BA7767F41D896_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
