#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShareConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_85DEE7FE461D5742_METHOD_1_04621E60F61D0032_OFFSET UNITYSDK_OFFSET(0x1C8E1880)
#define CLASS_1_85DEE7FE461D5742_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C8E20E0)
#define CLASS_1_85DEE7FE461D5742_METHOD_1_5044273A414DED29_OFFSET UNITYSDK_OFFSET(0x1C8E1D00)
#define CLASS_1_85DEE7FE461D5742_METHOD_1_53ABF17CA5819627_OFFSET UNITYSDK_OFFSET(0x1C8E1B90)
#define CLASS_1_85DEE7FE461D5742_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C8E1F10)
#define CLASS_1_85DEE7FE461D5742_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8E1FA0)
#define CLASS_1_85DEE7FE461D5742_METHOD_1_CC537F63BD321A56_OFFSET UNITYSDK_OFFSET(0x1C8E2130)
#define CLASS_1_85DEE7FE461D5742_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C8E1B30)
#define CLASS_1_85DEE7FE461D5742_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C8E1900)
#define CLASS_1_85DEE7FE461D5742_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C8E1ED0)
#define CLASS_1_85DEE7FE461D5742_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C8E2040)
#define CLASS_1_85DEE7FE461D5742__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8E24D0)

inline static constexpr unsigned int Class_1_85DEE7FE461D5742_TypeDefinitionIndex = 14327;

class Class_1_85DEE7FE461D5742 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_85DEE7FE461D5742_TypeDefinitionIndex)->GetStaticField(0x1D960);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_85DEE7FE461D5742_TypeDefinitionIndex)->GetStaticField(0x1D968);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_85DEE7FE461D5742_TypeDefinitionIndex)->GetStaticField(0x1D970);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_85DEE7FE461D5742_TypeDefinitionIndex)->GetStaticField(0xA020);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_85DEE7FE461D5742_TypeDefinitionIndex)->GetStaticField(0xA021);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*>* Method_1_04621E60F61D0032()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742_METHOD_1_04621E60F61D0032_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*> Method_1_53ABF17CA5819627()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742_METHOD_1_53ABF17CA5819627_OFFSET))();
	}

	static ::RPG::GameCore::ShareConfigRow* Method_1_5044273A414DED29(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::ShareConfigRow*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742_METHOD_1_5044273A414DED29_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_CC537F63BD321A56(::RPG::GameCore::ShareConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ShareConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_85DEE7FE461D5742_METHOD_1_CC537F63BD321A56_OFFSET))(a1);
	}
};
