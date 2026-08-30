#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeVsTalkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_533E5B885321F393_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D34DF60)
#define CLASS_1_533E5B885321F393_METHOD_1_149F4ADAF91119B2_OFFSET UNITYSDK_OFFSET(0x1D34DBC0)
#define CLASS_1_533E5B885321F393_METHOD_1_2DB39A0A0EDD22DB_OFFSET UNITYSDK_OFFSET(0x1D34D740)
#define CLASS_1_533E5B885321F393_METHOD_1_6225127F1ED163F1_OFFSET UNITYSDK_OFFSET(0x1D34DFB0)
#define CLASS_1_533E5B885321F393_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D34DD90)
#define CLASS_1_533E5B885321F393_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D34DE20)
#define CLASS_1_533E5B885321F393_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D34D9F0)
#define CLASS_1_533E5B885321F393_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D34D7C0)
#define CLASS_1_533E5B885321F393_METHOD_1_E3A0B1382F9B4180_OFFSET UNITYSDK_OFFSET(0x1D34DA50)
#define CLASS_1_533E5B885321F393_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D34DD50)
#define CLASS_1_533E5B885321F393_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D34DEC0)
#define CLASS_1_533E5B885321F393__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D34E320)

inline static constexpr unsigned int Class_1_533E5B885321F393_TypeDefinitionIndex = 11901;

class Class_1_533E5B885321F393 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_533E5B885321F393_TypeDefinitionIndex)->GetStaticField(0x12E30);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVsTalkRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVsTalkRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_533E5B885321F393_TypeDefinitionIndex)->GetStaticField(0x12E38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_533E5B885321F393_TypeDefinitionIndex)->GetStaticField(0x12E40);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_533E5B885321F393_TypeDefinitionIndex)->GetStaticField(0x7BE0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_533E5B885321F393_TypeDefinitionIndex)->GetStaticField(0x7BE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVsTalkRow*>* Method_1_2DB39A0A0EDD22DB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVsTalkRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393_METHOD_1_2DB39A0A0EDD22DB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVsTalkRow*> Method_1_E3A0B1382F9B4180()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeVsTalkRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393_METHOD_1_E3A0B1382F9B4180_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeVsTalkRow* Method_1_149F4ADAF91119B2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeVsTalkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393_METHOD_1_149F4ADAF91119B2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_6225127F1ED163F1(::RPG::GameCore::MatchThreeVsTalkRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeVsTalkRow*))((::PBYTE)hIl2Cpp + CLASS_1_533E5B885321F393_METHOD_1_6225127F1ED163F1_OFFSET))(a1);
	}
};
