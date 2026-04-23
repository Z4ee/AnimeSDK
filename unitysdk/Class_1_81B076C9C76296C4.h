#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingMagicRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_81B076C9C76296C4_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1834B510)
#define CLASS_1_81B076C9C76296C4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1834B330)
#define CLASS_1_81B076C9C76296C4_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1834AD10)
#define CLASS_1_81B076C9C76296C4_METHOD_1_6EF53E8C63290A72_OFFSET UNITYSDK_OFFSET(0x1834AC90)
#define CLASS_1_81B076C9C76296C4_METHOD_1_7499C3945998CB27_OFFSET UNITYSDK_OFFSET(0x1834AFC0)
#define CLASS_1_81B076C9C76296C4_METHOD_1_8A960D38BDCE8B3D_OFFSET UNITYSDK_OFFSET(0x1834B560)
#define CLASS_1_81B076C9C76296C4_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1834B3D0)
#define CLASS_1_81B076C9C76296C4_METHOD_1_BF2D4130D0869AAF_OFFSET UNITYSDK_OFFSET(0x1834B170)
#define CLASS_1_81B076C9C76296C4_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1834AF60)
#define CLASS_1_81B076C9C76296C4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1834B2F0)
#define CLASS_1_81B076C9C76296C4_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1834B470)
#define CLASS_1_81B076C9C76296C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1834B870)

inline static constexpr unsigned int Class_1_81B076C9C76296C4_TypeDefinitionIndex = 10591;

class Class_1_81B076C9C76296C4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81B076C9C76296C4_TypeDefinitionIndex)->GetStaticField(0x297C0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81B076C9C76296C4_TypeDefinitionIndex)->GetStaticField(0x297C8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81B076C9C76296C4_TypeDefinitionIndex)->GetStaticField(0x297D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_81B076C9C76296C4_TypeDefinitionIndex)->GetStaticField(0xB0B0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_81B076C9C76296C4_TypeDefinitionIndex)->GetStaticField(0xB0B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*>* Method_1_6EF53E8C63290A72()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4_METHOD_1_6EF53E8C63290A72_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*> Method_1_7499C3945998CB27()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4_METHOD_1_7499C3945998CB27_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingMagicRow* Method_1_BF2D4130D0869AAF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingMagicRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4_METHOD_1_BF2D4130D0869AAF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A960D38BDCE8B3D(::RPG::GameCore::ChenLingMagicRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingMagicRow*))((::PBYTE)hIl2Cpp + CLASS_1_81B076C9C76296C4_METHOD_1_8A960D38BDCE8B3D_OFFSET))(a1);
	}
};
