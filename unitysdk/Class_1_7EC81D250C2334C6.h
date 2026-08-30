#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PamMoodType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PamMoodRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7EC81D250C2334C6_METHOD_1_05A3D5AD9BA75F2E_OFFSET UNITYSDK_OFFSET(0x1A412890)
#define CLASS_1_7EC81D250C2334C6_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1A413070)
#define CLASS_1_7EC81D250C2334C6_METHOD_1_54E7E6FD255BCDCE_OFFSET UNITYSDK_OFFSET(0x1A412BA0)
#define CLASS_1_7EC81D250C2334C6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1A412EA0)
#define CLASS_1_7EC81D250C2334C6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1A412F30)
#define CLASS_1_7EC81D250C2334C6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1A412B40)
#define CLASS_1_7EC81D250C2334C6_METHOD_1_D40F948B03ED248C_OFFSET UNITYSDK_OFFSET(0x1A412CD0)
#define CLASS_1_7EC81D250C2334C6_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1A412910)
#define CLASS_1_7EC81D250C2334C6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1A412E60)
#define CLASS_1_7EC81D250C2334C6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1A412FD0)
#define CLASS_1_7EC81D250C2334C6_METHOD_1_FA377000A08170BB_OFFSET UNITYSDK_OFFSET(0x1A4130C0)
#define CLASS_1_7EC81D250C2334C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4133E0)

inline static constexpr unsigned int Class_1_7EC81D250C2334C6_TypeDefinitionIndex = 14202;

class Class_1_7EC81D250C2334C6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EC81D250C2334C6_TypeDefinitionIndex)->GetStaticField(0x473B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EC81D250C2334C6_TypeDefinitionIndex)->GetStaticField(0x473B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EC81D250C2334C6_TypeDefinitionIndex)->GetStaticField(0x473C0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EC81D250C2334C6_TypeDefinitionIndex)->GetStaticField(0x107B0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EC81D250C2334C6_TypeDefinitionIndex)->GetStaticField(0x107B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*>* Method_1_05A3D5AD9BA75F2E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6_METHOD_1_05A3D5AD9BA75F2E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*> Method_1_54E7E6FD255BCDCE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6_METHOD_1_54E7E6FD255BCDCE_OFFSET))();
	}

	static ::RPG::GameCore::PamMoodRow* Method_1_D40F948B03ED248C(::RPG::GameCore::PamMoodType a1)
	{
		return ((::RPG::GameCore::PamMoodRow*(*)(::RPG::GameCore::PamMoodType))((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6_METHOD_1_D40F948B03ED248C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FA377000A08170BB(::RPG::GameCore::PamMoodRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PamMoodRow*))((::PBYTE)hIl2Cpp + CLASS_1_7EC81D250C2334C6_METHOD_1_FA377000A08170BB_OFFSET))(a1);
	}
};
