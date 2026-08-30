#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8152A9E569F5DCD2_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CC47470)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_194D68F19A996827_OFFSET UNITYSDK_OFFSET(0x1CC46F60)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_825C592BA89AB3F2_OFFSET UNITYSDK_OFFSET(0x1CC46C50)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CC472A0)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CC47330)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CC46F00)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CC46CD0)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_E75A3DB2A8E875B6_OFFSET UNITYSDK_OFFSET(0x1CC474C0)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CC47260)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CC473D0)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_FC3199F7F8E2C943_OFFSET UNITYSDK_OFFSET(0x1CC470D0)
#define CLASS_1_8152A9E569F5DCD2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC47830)

inline static constexpr unsigned int Class_1_8152A9E569F5DCD2_TypeDefinitionIndex = 12381;

class Class_1_8152A9E569F5DCD2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8152A9E569F5DCD2_TypeDefinitionIndex)->GetStaticField(0x2F640);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8152A9E569F5DCD2_TypeDefinitionIndex)->GetStaticField(0x2F648);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8152A9E569F5DCD2_TypeDefinitionIndex)->GetStaticField(0x2F650);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8152A9E569F5DCD2_TypeDefinitionIndex)->GetStaticField(0xD2F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8152A9E569F5DCD2_TypeDefinitionIndex)->GetStaticField(0xD2F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>* Method_1_825C592BA89AB3F2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_825C592BA89AB3F2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*> Method_1_194D68F19A996827()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_194D68F19A996827_OFFSET))();
	}

	static ::RPG::GameCore::SwordTrainingEventRow* Method_1_FC3199F7F8E2C943(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SwordTrainingEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_FC3199F7F8E2C943_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E75A3DB2A8E875B6(::RPG::GameCore::SwordTrainingEventRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_E75A3DB2A8E875B6_OFFSET))(a1);
	}
};
