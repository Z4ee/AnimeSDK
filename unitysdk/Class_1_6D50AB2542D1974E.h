#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTutorialTaskRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6D50AB2542D1974E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1BD4AD70)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_1747AC0939F78D9F_OFFSET UNITYSDK_OFFSET(0x1BD4A9D0)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_285DC70082F2065F_OFFSET UNITYSDK_OFFSET(0x1BD4A7E0)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_86BB0633CBAF27B7_OFFSET UNITYSDK_OFFSET(0x1BD4A950)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1BD4ABA0)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1BD4AC30)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BD4A780)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_D678CDB0F7E74A36_OFFSET UNITYSDK_OFFSET(0x1BD4A4D0)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1BD4A550)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_F0D7750D9003211A_OFFSET UNITYSDK_OFFSET(0x1BD4ADC0)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1BD4AB60)
#define CLASS_1_6D50AB2542D1974E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1BD4ACD0)
#define CLASS_1_6D50AB2542D1974E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD4B130)

inline static constexpr unsigned int Class_1_6D50AB2542D1974E_TypeDefinitionIndex = 13154;

class Class_1_6D50AB2542D1974E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D50AB2542D1974E_TypeDefinitionIndex)->GetStaticField(0x38050);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D50AB2542D1974E_TypeDefinitionIndex)->GetStaticField(0x38058);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D50AB2542D1974E_TypeDefinitionIndex)->GetStaticField(0x38060);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D50AB2542D1974E_TypeDefinitionIndex)->GetStaticField(0x9580);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D50AB2542D1974E_TypeDefinitionIndex)->GetStaticField(0x9581);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>* Method_1_D678CDB0F7E74A36()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_D678CDB0F7E74A36_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*> Method_1_285DC70082F2065F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_285DC70082F2065F_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>, ::RPG::GameCore::GridFightTutorialTaskRow*> Method_1_86BB0633CBAF27B7()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>, ::RPG::GameCore::GridFightTutorialTaskRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_86BB0633CBAF27B7_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTutorialTaskRow* Method_1_1747AC0939F78D9F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightTutorialTaskRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_1747AC0939F78D9F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F0D7750D9003211A(::RPG::GameCore::GridFightTutorialTaskRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTutorialTaskRow*))((::PBYTE)hIl2Cpp + CLASS_1_6D50AB2542D1974E_METHOD_1_F0D7750D9003211A_OFFSET))(a1);
	}
};
