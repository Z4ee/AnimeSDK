#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A1E429E1374DA445_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CB0AF50)
#define CLASS_1_A1E429E1374DA445_METHOD_1_1D8A6D9A5F9ECD0C_OFFSET UNITYSDK_OFFSET(0x1CB0ABB0)
#define CLASS_1_A1E429E1374DA445_METHOD_1_339E2717ABE141B7_OFFSET UNITYSDK_OFFSET(0x1CB0AA80)
#define CLASS_1_A1E429E1374DA445_METHOD_1_842B3E1BED29A1B6_OFFSET UNITYSDK_OFFSET(0x1CB0AFA0)
#define CLASS_1_A1E429E1374DA445_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CB0AD80)
#define CLASS_1_A1E429E1374DA445_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CB0AE10)
#define CLASS_1_A1E429E1374DA445_METHOD_1_BEF2CEBF8B977AA9_OFFSET UNITYSDK_OFFSET(0x1CB0A770)
#define CLASS_1_A1E429E1374DA445_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CB0AA20)
#define CLASS_1_A1E429E1374DA445_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CB0A7F0)
#define CLASS_1_A1E429E1374DA445_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CB0AD40)
#define CLASS_1_A1E429E1374DA445_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CB0AEB0)
#define CLASS_1_A1E429E1374DA445__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB0B2C0)

inline static constexpr unsigned int Class_1_A1E429E1374DA445_TypeDefinitionIndex = 12369;

class Class_1_A1E429E1374DA445 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1E429E1374DA445_TypeDefinitionIndex)->GetStaticField(0x537D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1E429E1374DA445_TypeDefinitionIndex)->GetStaticField(0x537D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1E429E1374DA445_TypeDefinitionIndex)->GetStaticField(0x537E0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1E429E1374DA445_TypeDefinitionIndex)->GetStaticField(0x11850);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1E429E1374DA445_TypeDefinitionIndex)->GetStaticField(0x11851);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*>* Method_1_BEF2CEBF8B977AA9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445_METHOD_1_BEF2CEBF8B977AA9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*> Method_1_339E2717ABE141B7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445_METHOD_1_339E2717ABE141B7_OFFSET))();
	}

	static ::RPG::GameCore::SwordTrainingStoryRow* Method_1_1D8A6D9A5F9ECD0C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SwordTrainingStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445_METHOD_1_1D8A6D9A5F9ECD0C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_842B3E1BED29A1B6(::RPG::GameCore::SwordTrainingStoryRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingStoryRow*))((::PBYTE)hIl2Cpp + CLASS_1_A1E429E1374DA445_METHOD_1_842B3E1BED29A1B6_OFFSET))(a1);
	}
};
