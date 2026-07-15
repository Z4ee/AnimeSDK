#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraGalleryActRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_35343D0710ECDB20_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1B3254F0)
#define CLASS_1_35343D0710ECDB20_METHOD_1_331F841EAA6B7797_OFFSET UNITYSDK_OFFSET(0x1B325190)
#define CLASS_1_35343D0710ECDB20_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B325320)
#define CLASS_1_35343D0710ECDB20_METHOD_1_A3F64E8DD16B2DFA_OFFSET UNITYSDK_OFFSET(0x1B325060)
#define CLASS_1_35343D0710ECDB20_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B3253B0)
#define CLASS_1_35343D0710ECDB20_METHOD_1_C75FF4438FA1C7D9_OFFSET UNITYSDK_OFFSET(0x1B325540)
#define CLASS_1_35343D0710ECDB20_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B325000)
#define CLASS_1_35343D0710ECDB20_METHOD_1_DA56374D14595CDA_OFFSET UNITYSDK_OFFSET(0x1B324D50)
#define CLASS_1_35343D0710ECDB20_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B324DD0)
#define CLASS_1_35343D0710ECDB20_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B3252E0)
#define CLASS_1_35343D0710ECDB20_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B325450)
#define CLASS_1_35343D0710ECDB20__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B325860)

inline static constexpr unsigned int Class_1_35343D0710ECDB20_TypeDefinitionIndex = 12558;

class Class_1_35343D0710ECDB20 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_35343D0710ECDB20_TypeDefinitionIndex)->GetStaticField(0x66460);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_35343D0710ECDB20_TypeDefinitionIndex)->GetStaticField(0x66468);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_35343D0710ECDB20_TypeDefinitionIndex)->GetStaticField(0x66470);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_35343D0710ECDB20_TypeDefinitionIndex)->GetStaticField(0x13B10);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_35343D0710ECDB20_TypeDefinitionIndex)->GetStaticField(0x13B11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*>* Method_1_DA56374D14595CDA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20_METHOD_1_DA56374D14595CDA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*> Method_1_A3F64E8DD16B2DFA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20_METHOD_1_A3F64E8DD16B2DFA_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraGalleryActRow* Method_1_331F841EAA6B7797(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraGalleryActRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20_METHOD_1_331F841EAA6B7797_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_C75FF4438FA1C7D9(::RPG::GameCore::ChimeraGalleryActRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraGalleryActRow*))((::PBYTE)hIl2Cpp + CLASS_1_35343D0710ECDB20_METHOD_1_C75FF4438FA1C7D9_OFFSET))(a1);
	}
};
