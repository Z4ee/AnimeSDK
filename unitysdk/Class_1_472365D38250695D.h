#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExpeditionBattleRouteConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_472365D38250695D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D1E3D90)
#define CLASS_1_472365D38250695D_METHOD_1_5D3D79BBDC116F96_OFFSET UNITYSDK_OFFSET(0x1D1E3880)
#define CLASS_1_472365D38250695D_METHOD_1_7A84F1EEA59A7121_OFFSET UNITYSDK_OFFSET(0x1D1E3570)
#define CLASS_1_472365D38250695D_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D1E3BC0)
#define CLASS_1_472365D38250695D_METHOD_1_A7DE209282D7F107_OFFSET UNITYSDK_OFFSET(0x1D1E3DE0)
#define CLASS_1_472365D38250695D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D1E3C50)
#define CLASS_1_472365D38250695D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D1E3820)
#define CLASS_1_472365D38250695D_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D1E35F0)
#define CLASS_1_472365D38250695D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D1E3B80)
#define CLASS_1_472365D38250695D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D1E3CF0)
#define CLASS_1_472365D38250695D_METHOD_1_FC816AF0A10F3524_OFFSET UNITYSDK_OFFSET(0x1D1E39F0)
#define CLASS_1_472365D38250695D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E4150)

inline static constexpr unsigned int Class_1_472365D38250695D_TypeDefinitionIndex = 11429;

class Class_1_472365D38250695D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_472365D38250695D_TypeDefinitionIndex)->GetStaticField(0x3AFC0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_472365D38250695D_TypeDefinitionIndex)->GetStaticField(0x3AFC8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_472365D38250695D_TypeDefinitionIndex)->GetStaticField(0x3AFD0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_472365D38250695D_TypeDefinitionIndex)->GetStaticField(0xF230);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_472365D38250695D_TypeDefinitionIndex)->GetStaticField(0xF231);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*>* Method_1_7A84F1EEA59A7121()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D_METHOD_1_7A84F1EEA59A7121_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*> Method_1_5D3D79BBDC116F96()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D_METHOD_1_5D3D79BBDC116F96_OFFSET))();
	}

	static ::RPG::GameCore::ExpeditionBattleRouteConfigRow* Method_1_FC816AF0A10F3524(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ExpeditionBattleRouteConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D_METHOD_1_FC816AF0A10F3524_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_A7DE209282D7F107(::RPG::GameCore::ExpeditionBattleRouteConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ExpeditionBattleRouteConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_472365D38250695D_METHOD_1_A7DE209282D7F107_OFFSET))(a1);
	}
};
