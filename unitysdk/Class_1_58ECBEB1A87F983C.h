#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_58ECBEB1A87F983C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x182C6E80)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_24468007BD1514B8_OFFSET UNITYSDK_OFFSET(0x182C6ED0)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182C6CA0)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_40D9A48177B12B73_OFFSET UNITYSDK_OFFSET(0x182C68E0)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182C6630)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_8241CAB6E0732166_OFFSET UNITYSDK_OFFSET(0x182C6A90)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_8DC8E9DFAFF1518E_OFFSET UNITYSDK_OFFSET(0x182C65B0)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182C6D40)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182C6880)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182C6C60)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182C6DE0)
#define CLASS_1_58ECBEB1A87F983C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182C7230)

inline static constexpr unsigned int Class_1_58ECBEB1A87F983C_TypeDefinitionIndex = 11100;

class Class_1_58ECBEB1A87F983C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58ECBEB1A87F983C_TypeDefinitionIndex)->GetStaticField(0x22730);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58ECBEB1A87F983C_TypeDefinitionIndex)->GetStaticField(0x22738);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58ECBEB1A87F983C_TypeDefinitionIndex)->GetStaticField(0x22740);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_58ECBEB1A87F983C_TypeDefinitionIndex)->GetStaticField(0x8AD0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_58ECBEB1A87F983C_TypeDefinitionIndex)->GetStaticField(0x8AD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>* Method_1_8DC8E9DFAFF1518E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_8DC8E9DFAFF1518E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*> Method_1_40D9A48177B12B73()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_40D9A48177B12B73_OFFSET))();
	}

	static ::RPG::GameCore::ActivityHipplenInteractInfoRow* Method_1_8241CAB6E0732166(::RPG::GameCore::HipplenInteractType a1)
	{
		return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::RPG::GameCore::HipplenInteractType))((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_8241CAB6E0732166_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_24468007BD1514B8(::RPG::GameCore::ActivityHipplenInteractInfoRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenInteractInfoRow*))((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_24468007BD1514B8_OFFSET))(a1);
	}
};
