#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ModelIconConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DAEA3FAEC2619C13_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1939D2B0)
#define CLASS_1_DAEA3FAEC2619C13_METHOD_1_0EA2B472E2BB844B_OFFSET UNITYSDK_OFFSET(0x1939CA90)
#define CLASS_1_DAEA3FAEC2619C13_METHOD_1_5D8CE83C9A9779C1_OFFSET UNITYSDK_OFFSET(0x1939D300)
#define CLASS_1_DAEA3FAEC2619C13_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1939D0E0)
#define CLASS_1_DAEA3FAEC2619C13_METHOD_1_A7E29FDA7F55FC2C_OFFSET UNITYSDK_OFFSET(0x1939CDA0)
#define CLASS_1_DAEA3FAEC2619C13_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1939D170)
#define CLASS_1_DAEA3FAEC2619C13_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1939CD40)
#define CLASS_1_DAEA3FAEC2619C13_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1939CB10)
#define CLASS_1_DAEA3FAEC2619C13_METHOD_1_ECD3C9358D11EB52_OFFSET UNITYSDK_OFFSET(0x1939CF10)
#define CLASS_1_DAEA3FAEC2619C13_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1939D0A0)
#define CLASS_1_DAEA3FAEC2619C13_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1939D210)
#define CLASS_1_DAEA3FAEC2619C13__CCTOR_OFFSET UNITYSDK_OFFSET(0x1939D670)

inline static constexpr unsigned int Class_1_DAEA3FAEC2619C13_TypeDefinitionIndex = 11968;

class Class_1_DAEA3FAEC2619C13 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAEA3FAEC2619C13_TypeDefinitionIndex)->GetStaticField(0x58390);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAEA3FAEC2619C13_TypeDefinitionIndex)->GetStaticField(0x58398);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAEA3FAEC2619C13_TypeDefinitionIndex)->GetStaticField(0x583A0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAEA3FAEC2619C13_TypeDefinitionIndex)->GetStaticField(0x117F0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAEA3FAEC2619C13_TypeDefinitionIndex)->GetStaticField(0x117F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*>* Method_1_0EA2B472E2BB844B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13_METHOD_1_0EA2B472E2BB844B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*> Method_1_A7E29FDA7F55FC2C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13_METHOD_1_A7E29FDA7F55FC2C_OFFSET))();
	}

	static ::RPG::GameCore::ModelIconConfigRow* Method_1_ECD3C9358D11EB52(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ModelIconConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13_METHOD_1_ECD3C9358D11EB52_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_5D8CE83C9A9779C1(::RPG::GameCore::ModelIconConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ModelIconConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_DAEA3FAEC2619C13_METHOD_1_5D8CE83C9A9779C1_OFFSET))(a1);
	}
};
