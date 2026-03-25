#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelChimeraRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AC0704E1D72F0273_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16BF7490)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_22B312CC1B9A2F9C_OFFSET UNITYSDK_OFFSET(0x16BF7050)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BF72B0)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BF6C20)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_6C0255F9223024DE_OFFSET UNITYSDK_OFFSET(0x16BF74E0)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BF7350)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_C279AB5174923C1B_OFFSET UNITYSDK_OFFSET(0x16BF6BA0)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_C575371B033C0C4A_OFFSET UNITYSDK_OFFSET(0x16BF70F0)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BF6E70)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_E4EC5B9AACADEA53_OFFSET UNITYSDK_OFFSET(0x16BF6ED0)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BF7270)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BF73F0)
#define CLASS_1_AC0704E1D72F0273__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BF77F0)

inline static constexpr unsigned int Class_1_AC0704E1D72F0273_TypeDefinitionIndex = 10392;

class Class_1_AC0704E1D72F0273 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0704E1D72F0273_TypeDefinitionIndex)->GetStaticField(0x293D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0704E1D72F0273_TypeDefinitionIndex)->GetStaticField(0x293D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0704E1D72F0273_TypeDefinitionIndex)->GetStaticField(0x293E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0704E1D72F0273_TypeDefinitionIndex)->GetStaticField(0xD920);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0704E1D72F0273_TypeDefinitionIndex)->GetStaticField(0xD921);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>* Method_1_C279AB5174923C1B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_C279AB5174923C1B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*> Method_1_E4EC5B9AACADEA53()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_E4EC5B9AACADEA53_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>, ::RPG::GameCore::ChimeraDuelChimeraRow*> Method_1_22B312CC1B9A2F9C()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>, ::RPG::GameCore::ChimeraDuelChimeraRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_22B312CC1B9A2F9C_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelChimeraRow* Method_1_C575371B033C0C4A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraDuelChimeraRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_C575371B033C0C4A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C0255F9223024DE(::RPG::GameCore::ChimeraDuelChimeraRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelChimeraRow*))((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_6C0255F9223024DE_OFFSET))(a1);
	}
};
