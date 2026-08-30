#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTraitBEOverrideConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_59AB3E5E558BBE1E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CB8CC30)
#define CLASS_1_59AB3E5E558BBE1E_METHOD_1_4D4FB230755719AF_OFFSET UNITYSDK_OFFSET(0x1CB8C6E0)
#define CLASS_1_59AB3E5E558BBE1E_METHOD_1_6AC89A71F3C56873_OFFSET UNITYSDK_OFFSET(0x1CB8C850)
#define CLASS_1_59AB3E5E558BBE1E_METHOD_1_77C46A3F4167295A_OFFSET UNITYSDK_OFFSET(0x1CB8CC80)
#define CLASS_1_59AB3E5E558BBE1E_METHOD_1_83798673849C4BFE_OFFSET UNITYSDK_OFFSET(0x1CB8C3D0)
#define CLASS_1_59AB3E5E558BBE1E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CB8CA60)
#define CLASS_1_59AB3E5E558BBE1E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CB8CAF0)
#define CLASS_1_59AB3E5E558BBE1E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CB8C680)
#define CLASS_1_59AB3E5E558BBE1E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CB8C450)
#define CLASS_1_59AB3E5E558BBE1E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CB8CA20)
#define CLASS_1_59AB3E5E558BBE1E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CB8CB90)
#define CLASS_1_59AB3E5E558BBE1E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB8D020)

inline static constexpr unsigned int Class_1_59AB3E5E558BBE1E_TypeDefinitionIndex = 13601;

class Class_1_59AB3E5E558BBE1E : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59AB3E5E558BBE1E_TypeDefinitionIndex)->GetStaticField(0x28050);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59AB3E5E558BBE1E_TypeDefinitionIndex)->GetStaticField(0x28058);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59AB3E5E558BBE1E_TypeDefinitionIndex)->GetStaticField(0x28060);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59AB3E5E558BBE1E_TypeDefinitionIndex)->GetStaticField(0xBB80);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59AB3E5E558BBE1E_TypeDefinitionIndex)->GetStaticField(0xBB81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*>* Method_1_83798673849C4BFE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E_METHOD_1_83798673849C4BFE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*> Method_1_4D4FB230755719AF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E_METHOD_1_4D4FB230755719AF_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTraitBEOverrideConfigRow* Method_1_6AC89A71F3C56873(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightTraitBEOverrideConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E_METHOD_1_6AC89A71F3C56873_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_77C46A3F4167295A(::RPG::GameCore::GridFightTraitBEOverrideConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTraitBEOverrideConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_59AB3E5E558BBE1E_METHOD_1_77C46A3F4167295A_OFFSET))(a1);
	}
};
