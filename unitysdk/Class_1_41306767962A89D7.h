#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class HoyoTagInfo; }
namespace RPG::GameCore { class HoyoTagNodeInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_41306767962A89D7_METHOD_1_0F86E45B3CE1593F_OFFSET UNITYSDK_OFFSET(0x19157C70)
#define CLASS_1_41306767962A89D7_METHOD_1_56B7018AE9F3FBAB_OFFSET UNITYSDK_OFFSET(0x191579F0)
#define CLASS_1_41306767962A89D7_METHOD_1_ECA7333ABCD628C6_OFFSET UNITYSDK_OFFSET(0x19157A80)
#define CLASS_1_41306767962A89D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19157F80)

inline static constexpr unsigned int Class_1_41306767962A89D7_TypeDefinitionIndex = 23644;

class Class_1_41306767962A89D7 : public ::System::Object
{
public:
	static ::RPG::GameCore::HoyoTagInfo** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::HoyoTagInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41306767962A89D7_TypeDefinitionIndex)->GetStaticField(0x41B00);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::HoyoTagNodeInfo*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::HoyoTagNodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41306767962A89D7_TypeDefinitionIndex)->GetStaticField(0x41B08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41306767962A89D7__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_56B7018AE9F3FBAB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41306767962A89D7_METHOD_1_56B7018AE9F3FBAB_OFFSET))();
	}

	static ::System::Void Method_1_ECA7333ABCD628C6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41306767962A89D7_METHOD_1_ECA7333ABCD628C6_OFFSET))();
	}

	static ::RPG::GameCore::HoyoTagNodeInfo* Method_1_0F86E45B3CE1593F(::System::Int32 a1)
	{
		return ((::RPG::GameCore::HoyoTagNodeInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_41306767962A89D7_METHOD_1_0F86E45B3CE1593F_OFFSET))(a1);
	}
};
