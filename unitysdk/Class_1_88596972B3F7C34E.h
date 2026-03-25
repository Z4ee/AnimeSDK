#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyGameConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_88596972B3F7C34E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16AFC2D0)
#define CLASS_1_88596972B3F7C34E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16AFC0F0)
#define CLASS_1_88596972B3F7C34E_METHOD_1_536F7D630B82CBF3_OFFSET UNITYSDK_OFFSET(0x16AFC320)
#define CLASS_1_88596972B3F7C34E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16AFBB00)
#define CLASS_1_88596972B3F7C34E_METHOD_1_73941AD6E52D7258_OFFSET UNITYSDK_OFFSET(0x16AFBDB0)
#define CLASS_1_88596972B3F7C34E_METHOD_1_8B7E655A31873E0D_OFFSET UNITYSDK_OFFSET(0x16AFBF30)
#define CLASS_1_88596972B3F7C34E_METHOD_1_981FF0F3FCEF7E1E_OFFSET UNITYSDK_OFFSET(0x16AFBA80)
#define CLASS_1_88596972B3F7C34E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16AFC190)
#define CLASS_1_88596972B3F7C34E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16AFBD50)
#define CLASS_1_88596972B3F7C34E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16AFC0B0)
#define CLASS_1_88596972B3F7C34E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16AFC230)
#define CLASS_1_88596972B3F7C34E__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AFC630)

inline static constexpr unsigned int Class_1_88596972B3F7C34E_TypeDefinitionIndex = 11039;

class Class_1_88596972B3F7C34E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88596972B3F7C34E_TypeDefinitionIndex)->GetStaticField(0x27A90);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88596972B3F7C34E_TypeDefinitionIndex)->GetStaticField(0x27A98);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88596972B3F7C34E_TypeDefinitionIndex)->GetStaticField(0x27AA0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88596972B3F7C34E_TypeDefinitionIndex)->GetStaticField(0xCFB0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88596972B3F7C34E_TypeDefinitionIndex)->GetStaticField(0xCFB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*>* Method_1_981FF0F3FCEF7E1E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E_METHOD_1_981FF0F3FCEF7E1E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*> Method_1_73941AD6E52D7258()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E_METHOD_1_73941AD6E52D7258_OFFSET))();
	}

	static ::RPG::GameCore::MonopolyGameConfigRow* Method_1_8B7E655A31873E0D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MonopolyGameConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E_METHOD_1_8B7E655A31873E0D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_536F7D630B82CBF3(::RPG::GameCore::MonopolyGameConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MonopolyGameConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_88596972B3F7C34E_METHOD_1_536F7D630B82CBF3_OFFSET))(a1);
	}
};
