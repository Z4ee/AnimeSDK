#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropInteractWhiteListRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F02D6B0F4E544769_METHOD_1_12050D58467C3B66_OFFSET UNITYSDK_OFFSET(0x1838B360)
#define CLASS_1_F02D6B0F4E544769_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1838B700)
#define CLASS_1_F02D6B0F4E544769_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1838B520)
#define CLASS_1_F02D6B0F4E544769_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1838AF00)
#define CLASS_1_F02D6B0F4E544769_METHOD_1_91726C0C97EAB435_OFFSET UNITYSDK_OFFSET(0x1838AE80)
#define CLASS_1_F02D6B0F4E544769_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1838B5C0)
#define CLASS_1_F02D6B0F4E544769_METHOD_1_AFFDB834084C55D2_OFFSET UNITYSDK_OFFSET(0x1838B750)
#define CLASS_1_F02D6B0F4E544769_METHOD_1_C8BB304AB784F4EA_OFFSET UNITYSDK_OFFSET(0x1838B1B0)
#define CLASS_1_F02D6B0F4E544769_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1838B150)
#define CLASS_1_F02D6B0F4E544769_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1838B4E0)
#define CLASS_1_F02D6B0F4E544769_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1838B660)
#define CLASS_1_F02D6B0F4E544769__CCTOR_OFFSET UNITYSDK_OFFSET(0x1838BA60)

inline static constexpr unsigned int Class_1_F02D6B0F4E544769_TypeDefinitionIndex = 12513;

class Class_1_F02D6B0F4E544769 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F02D6B0F4E544769_TypeDefinitionIndex)->GetStaticField(0x20E50);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F02D6B0F4E544769_TypeDefinitionIndex)->GetStaticField(0x20E58);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F02D6B0F4E544769_TypeDefinitionIndex)->GetStaticField(0x20E60);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F02D6B0F4E544769_TypeDefinitionIndex)->GetStaticField(0x8070);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F02D6B0F4E544769_TypeDefinitionIndex)->GetStaticField(0x8071);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*>* Method_1_91726C0C97EAB435()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769_METHOD_1_91726C0C97EAB435_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*> Method_1_C8BB304AB784F4EA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769_METHOD_1_C8BB304AB784F4EA_OFFSET))();
	}

	static ::RPG::GameCore::PropInteractWhiteListRow* Method_1_12050D58467C3B66(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PropInteractWhiteListRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769_METHOD_1_12050D58467C3B66_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_AFFDB834084C55D2(::RPG::GameCore::PropInteractWhiteListRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PropInteractWhiteListRow*))((::PBYTE)hIl2Cpp + CLASS_1_F02D6B0F4E544769_METHOD_1_AFFDB834084C55D2_OFFSET))(a1);
	}
};
