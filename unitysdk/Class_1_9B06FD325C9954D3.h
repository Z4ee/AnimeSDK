#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightCombinationBonusConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9B06FD325C9954D3_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1998BBF0)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_604EA8F30BB97B1C_OFFSET UNITYSDK_OFFSET(0x1998B6E0)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1998BA20)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1998BAB0)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_BCAE587BC91413E1_OFFSET UNITYSDK_OFFSET(0x1998BC40)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_C144420A46058083_OFFSET UNITYSDK_OFFSET(0x1998B3D0)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1998B680)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_D1E5F0644B43CDF2_OFFSET UNITYSDK_OFFSET(0x1998B850)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1998B450)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1998B9E0)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1998BB50)
#define CLASS_1_9B06FD325C9954D3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1998BFB0)

inline static constexpr unsigned int Class_1_9B06FD325C9954D3_TypeDefinitionIndex = 12784;

class Class_1_9B06FD325C9954D3 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B06FD325C9954D3_TypeDefinitionIndex)->GetStaticField(0x47CF0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B06FD325C9954D3_TypeDefinitionIndex)->GetStaticField(0x47CF8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B06FD325C9954D3_TypeDefinitionIndex)->GetStaticField(0x47D00);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B06FD325C9954D3_TypeDefinitionIndex)->GetStaticField(0xD270);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B06FD325C9954D3_TypeDefinitionIndex)->GetStaticField(0xD271);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>* Method_1_C144420A46058083()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_C144420A46058083_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*> Method_1_604EA8F30BB97B1C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_604EA8F30BB97B1C_OFFSET))();
	}

	static ::RPG::GameCore::GridFightCombinationBonusConfigRow* Method_1_D1E5F0644B43CDF2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightCombinationBonusConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_D1E5F0644B43CDF2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_BCAE587BC91413E1(::RPG::GameCore::GridFightCombinationBonusConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCombinationBonusConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_BCAE587BC91413E1_OFFSET))(a1);
	}
};
