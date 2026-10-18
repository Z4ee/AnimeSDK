#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicTalentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_13276911BA849EE0_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D1D3AA0)
#define CLASS_1_13276911BA849EE0_METHOD_1_86A7E669A5E22FB0_OFFSET UNITYSDK_OFFSET(0x1D1D3610)
#define CLASS_1_13276911BA849EE0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D1D38D0)
#define CLASS_1_13276911BA849EE0_METHOD_1_A7DC66D2E353EA14_OFFSET UNITYSDK_OFFSET(0x1D1D3300)
#define CLASS_1_13276911BA849EE0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D1D3960)
#define CLASS_1_13276911BA849EE0_METHOD_1_C04DFAB2DFA3349F_OFFSET UNITYSDK_OFFSET(0x1D1D3740)
#define CLASS_1_13276911BA849EE0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D1D35B0)
#define CLASS_1_13276911BA849EE0_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D1D3380)
#define CLASS_1_13276911BA849EE0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D1D3890)
#define CLASS_1_13276911BA849EE0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D1D3A00)
#define CLASS_1_13276911BA849EE0_METHOD_1_FFE60E4F472F7E91_OFFSET UNITYSDK_OFFSET(0x1D1D3AF0)
#define CLASS_1_13276911BA849EE0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1D3E10)

inline static constexpr unsigned int Class_1_13276911BA849EE0_TypeDefinitionIndex = 14869;

class Class_1_13276911BA849EE0 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13276911BA849EE0_TypeDefinitionIndex)->GetStaticField(0x3F760);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13276911BA849EE0_TypeDefinitionIndex)->GetStaticField(0x3F768);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13276911BA849EE0_TypeDefinitionIndex)->GetStaticField(0x3F770);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_13276911BA849EE0_TypeDefinitionIndex)->GetStaticField(0xF020);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_13276911BA849EE0_TypeDefinitionIndex)->GetStaticField(0xF021);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*>* Method_1_A7DC66D2E353EA14()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0_METHOD_1_A7DC66D2E353EA14_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*> Method_1_86A7E669A5E22FB0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicTalentRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0_METHOD_1_86A7E669A5E22FB0_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicTalentRow* Method_1_C04DFAB2DFA3349F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueMagicTalentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0_METHOD_1_C04DFAB2DFA3349F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FFE60E4F472F7E91(::RPG::GameCore::RogueMagicTalentRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicTalentRow*))((::PBYTE)hIl2Cpp + CLASS_1_13276911BA849EE0_METHOD_1_FFE60E4F472F7E91_OFFSET))(a1);
	}
};
