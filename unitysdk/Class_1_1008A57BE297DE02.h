#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveSpineAnimGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1008A57BE297DE02_METHOD_1_0A581D6F33B06D9A_OFFSET UNITYSDK_OFFSET(0x1C76B320)
#define CLASS_1_1008A57BE297DE02_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C76BB40)
#define CLASS_1_1008A57BE297DE02_METHOD_1_77FD50158CA68893_OFFSET UNITYSDK_OFFSET(0x1C76B7A0)
#define CLASS_1_1008A57BE297DE02_METHOD_1_85716DB835C73C86_OFFSET UNITYSDK_OFFSET(0x1C76BB90)
#define CLASS_1_1008A57BE297DE02_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C76B970)
#define CLASS_1_1008A57BE297DE02_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C76BA00)
#define CLASS_1_1008A57BE297DE02_METHOD_1_C5738E8122A4FC13_OFFSET UNITYSDK_OFFSET(0x1C76B630)
#define CLASS_1_1008A57BE297DE02_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C76B5D0)
#define CLASS_1_1008A57BE297DE02_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C76B3A0)
#define CLASS_1_1008A57BE297DE02_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C76B930)
#define CLASS_1_1008A57BE297DE02_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C76BAA0)
#define CLASS_1_1008A57BE297DE02__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C76BF00)

inline static constexpr unsigned int Class_1_1008A57BE297DE02_TypeDefinitionIndex = 11788;

class Class_1_1008A57BE297DE02 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1008A57BE297DE02_TypeDefinitionIndex)->GetStaticField(0x29010);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1008A57BE297DE02_TypeDefinitionIndex)->GetStaticField(0x29018);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1008A57BE297DE02_TypeDefinitionIndex)->GetStaticField(0x29020);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1008A57BE297DE02_TypeDefinitionIndex)->GetStaticField(0xC0D0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1008A57BE297DE02_TypeDefinitionIndex)->GetStaticField(0xC0D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*>* Method_1_0A581D6F33B06D9A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02_METHOD_1_0A581D6F33B06D9A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*> Method_1_C5738E8122A4FC13()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02_METHOD_1_C5738E8122A4FC13_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveSpineAnimGroupRow* Method_1_77FD50158CA68893(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveSpineAnimGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02_METHOD_1_77FD50158CA68893_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_85716DB835C73C86(::RPG::GameCore::IdleLiveSpineAnimGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpineAnimGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_1008A57BE297DE02_METHOD_1_85716DB835C73C86_OFFSET))(a1);
	}
};
