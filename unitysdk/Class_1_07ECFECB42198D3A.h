#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyProgressRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_07ECFECB42198D3A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x17957C80)
#define CLASS_1_07ECFECB42198D3A_METHOD_1_2E24240A97B92A09_OFFSET UNITYSDK_OFFSET(0x179578E0)
#define CLASS_1_07ECFECB42198D3A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17957AA0)
#define CLASS_1_07ECFECB42198D3A_METHOD_1_472A857BE5607A07_OFFSET UNITYSDK_OFFSET(0x17957730)
#define CLASS_1_07ECFECB42198D3A_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17957480)
#define CLASS_1_07ECFECB42198D3A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17957B40)
#define CLASS_1_07ECFECB42198D3A_METHOD_1_B02E5F3BA27953CA_OFFSET UNITYSDK_OFFSET(0x17957400)
#define CLASS_1_07ECFECB42198D3A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179576D0)
#define CLASS_1_07ECFECB42198D3A_METHOD_1_E805659818E505D7_OFFSET UNITYSDK_OFFSET(0x17957CD0)
#define CLASS_1_07ECFECB42198D3A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17957A60)
#define CLASS_1_07ECFECB42198D3A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17957BE0)
#define CLASS_1_07ECFECB42198D3A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17957FE0)

inline static constexpr unsigned int Class_1_07ECFECB42198D3A_TypeDefinitionIndex = 14032;

class Class_1_07ECFECB42198D3A : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07ECFECB42198D3A_TypeDefinitionIndex)->GetStaticField(0x24220);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07ECFECB42198D3A_TypeDefinitionIndex)->GetStaticField(0x24228);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07ECFECB42198D3A_TypeDefinitionIndex)->GetStaticField(0x24230);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_07ECFECB42198D3A_TypeDefinitionIndex)->GetStaticField(0x9980);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_07ECFECB42198D3A_TypeDefinitionIndex)->GetStaticField(0x9981);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*>* Method_1_B02E5F3BA27953CA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A_METHOD_1_B02E5F3BA27953CA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*> Method_1_472A857BE5607A07()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A_METHOD_1_472A857BE5607A07_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartyProgressRow* Method_1_2E24240A97B92A09(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TrainPartyProgressRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A_METHOD_1_2E24240A97B92A09_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E805659818E505D7(::RPG::GameCore::TrainPartyProgressRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyProgressRow*))((::PBYTE)hIl2Cpp + CLASS_1_07ECFECB42198D3A_METHOD_1_E805659818E505D7_OFFSET))(a1);
	}
};
