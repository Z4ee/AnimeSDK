#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarEnhancedRankRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9F28348A8D5138E0_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1DAD9A60)
#define CLASS_1_9F28348A8D5138E0_METHOD_1_1B151EFB93A355AA_OFFSET UNITYSDK_OFFSET(0x1DAD9240)
#define CLASS_1_9F28348A8D5138E0_METHOD_1_3F744759A8719946_OFFSET UNITYSDK_OFFSET(0x1DAD9AB0)
#define CLASS_1_9F28348A8D5138E0_METHOD_1_6F3EE7ECDFA4BBE3_OFFSET UNITYSDK_OFFSET(0x1DAD96C0)
#define CLASS_1_9F28348A8D5138E0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1DAD9890)
#define CLASS_1_9F28348A8D5138E0_METHOD_1_8D417FEC2542FE73_OFFSET UNITYSDK_OFFSET(0x1DAD9550)
#define CLASS_1_9F28348A8D5138E0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1DAD9920)
#define CLASS_1_9F28348A8D5138E0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1DAD94F0)
#define CLASS_1_9F28348A8D5138E0_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1DAD92C0)
#define CLASS_1_9F28348A8D5138E0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1DAD9850)
#define CLASS_1_9F28348A8D5138E0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1DAD99C0)
#define CLASS_1_9F28348A8D5138E0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAD9E20)

inline static constexpr unsigned int Class_1_9F28348A8D5138E0_TypeDefinitionIndex = 12702;

class Class_1_9F28348A8D5138E0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F28348A8D5138E0_TypeDefinitionIndex)->GetStaticField(0x48F20);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F28348A8D5138E0_TypeDefinitionIndex)->GetStaticField(0x48F28);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F28348A8D5138E0_TypeDefinitionIndex)->GetStaticField(0x48F30);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F28348A8D5138E0_TypeDefinitionIndex)->GetStaticField(0x10C70);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F28348A8D5138E0_TypeDefinitionIndex)->GetStaticField(0x10C71);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*>* Method_1_1B151EFB93A355AA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0_METHOD_1_1B151EFB93A355AA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*> Method_1_8D417FEC2542FE73()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedRankRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0_METHOD_1_8D417FEC2542FE73_OFFSET))();
	}

	static ::RPG::GameCore::AvatarEnhancedRankRow* Method_1_6F3EE7ECDFA4BBE3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarEnhancedRankRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0_METHOD_1_6F3EE7ECDFA4BBE3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3F744759A8719946(::RPG::GameCore::AvatarEnhancedRankRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarEnhancedRankRow*))((::PBYTE)hIl2Cpp + CLASS_1_9F28348A8D5138E0_METHOD_1_3F744759A8719946_OFFSET))(a1);
	}
};
