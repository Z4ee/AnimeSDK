#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarUseMaterialDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3735EBF73EB48CFA_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16EE3A70)
#define CLASS_1_3735EBF73EB48CFA_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16EE3890)
#define CLASS_1_3735EBF73EB48CFA_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16EE3250)
#define CLASS_1_3735EBF73EB48CFA_METHOD_1_931667167F32C50F_OFFSET UNITYSDK_OFFSET(0x16EE3AC0)
#define CLASS_1_3735EBF73EB48CFA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16EE3930)
#define CLASS_1_3735EBF73EB48CFA_METHOD_1_BEEABC78D8C6A1FC_OFFSET UNITYSDK_OFFSET(0x16EE31D0)
#define CLASS_1_3735EBF73EB48CFA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16EE34A0)
#define CLASS_1_3735EBF73EB48CFA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16EE3850)
#define CLASS_1_3735EBF73EB48CFA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16EE39D0)
#define CLASS_1_3735EBF73EB48CFA_METHOD_1_F79B61AEB0B45968_OFFSET UNITYSDK_OFFSET(0x16EE3680)
#define CLASS_1_3735EBF73EB48CFA_METHOD_1_FB775F9F4475D94E_OFFSET UNITYSDK_OFFSET(0x16EE3500)
#define CLASS_1_3735EBF73EB48CFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EE3DD0)

inline static constexpr unsigned int Class_1_3735EBF73EB48CFA_TypeDefinitionIndex = 11658;

class Class_1_3735EBF73EB48CFA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3735EBF73EB48CFA_TypeDefinitionIndex)->GetStaticField(0x2D440);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3735EBF73EB48CFA_TypeDefinitionIndex)->GetStaticField(0x2D448);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3735EBF73EB48CFA_TypeDefinitionIndex)->GetStaticField(0x2D450);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3735EBF73EB48CFA_TypeDefinitionIndex)->GetStaticField(0xF160);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3735EBF73EB48CFA_TypeDefinitionIndex)->GetStaticField(0xF161);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*>* Method_1_BEEABC78D8C6A1FC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA_METHOD_1_BEEABC78D8C6A1FC_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*> Method_1_FB775F9F4475D94E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA_METHOD_1_FB775F9F4475D94E_OFFSET))();
	}

	static ::RPG::GameCore::AvatarUseMaterialDataRow* Method_1_F79B61AEB0B45968(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarUseMaterialDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA_METHOD_1_F79B61AEB0B45968_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_931667167F32C50F(::RPG::GameCore::AvatarUseMaterialDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarUseMaterialDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_3735EBF73EB48CFA_METHOD_1_931667167F32C50F_OFFSET))(a1);
	}
};
