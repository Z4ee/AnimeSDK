#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerReturnRelicRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_85CEA7FAA1E6E357_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x19135C10)
#define CLASS_1_85CEA7FAA1E6E357_METHOD_1_19403937752EF9CF_OFFSET UNITYSDK_OFFSET(0x19135390)
#define CLASS_1_85CEA7FAA1E6E357_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19135A30)
#define CLASS_1_85CEA7FAA1E6E357_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19135410)
#define CLASS_1_85CEA7FAA1E6E357_METHOD_1_6FD62FEEB38ADDF8_OFFSET UNITYSDK_OFFSET(0x191356C0)
#define CLASS_1_85CEA7FAA1E6E357_METHOD_1_7B7BADA352BA5764_OFFSET UNITYSDK_OFFSET(0x19135C60)
#define CLASS_1_85CEA7FAA1E6E357_METHOD_1_A80CB931AAE7F490_OFFSET UNITYSDK_OFFSET(0x19135870)
#define CLASS_1_85CEA7FAA1E6E357_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19135AD0)
#define CLASS_1_85CEA7FAA1E6E357_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19135660)
#define CLASS_1_85CEA7FAA1E6E357_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x191359F0)
#define CLASS_1_85CEA7FAA1E6E357_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19135B70)
#define CLASS_1_85CEA7FAA1E6E357__CCTOR_OFFSET UNITYSDK_OFFSET(0x19135F70)

inline static constexpr unsigned int Class_1_85CEA7FAA1E6E357_TypeDefinitionIndex = 13737;

class Class_1_85CEA7FAA1E6E357 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_85CEA7FAA1E6E357_TypeDefinitionIndex)->GetStaticField(0x40470);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRelicRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRelicRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_85CEA7FAA1E6E357_TypeDefinitionIndex)->GetStaticField(0x40478);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_85CEA7FAA1E6E357_TypeDefinitionIndex)->GetStaticField(0x40480);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_85CEA7FAA1E6E357_TypeDefinitionIndex)->GetStaticField(0xE740);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_85CEA7FAA1E6E357_TypeDefinitionIndex)->GetStaticField(0xE741);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRelicRow*>* Method_1_19403937752EF9CF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRelicRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357_METHOD_1_19403937752EF9CF_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRelicRow*> Method_1_6FD62FEEB38ADDF8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRelicRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357_METHOD_1_6FD62FEEB38ADDF8_OFFSET))();
	}

	static ::RPG::GameCore::PlayerReturnRelicRow* Method_1_A80CB931AAE7F490(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlayerReturnRelicRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357_METHOD_1_A80CB931AAE7F490_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_7B7BADA352BA5764(::RPG::GameCore::PlayerReturnRelicRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerReturnRelicRow*))((::PBYTE)hIl2Cpp + CLASS_1_85CEA7FAA1E6E357_METHOD_1_7B7BADA352BA5764_OFFSET))(a1);
	}
};
